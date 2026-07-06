#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003090F0
// Address: 0x3090f0 - 0x309250
void sub_003090F0_0x3090f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003090F0_0x3090f0");
#endif

    switch (ctx->pc) {
        case 0x309110u: goto label_309110;
        case 0x309180u: goto label_309180;
        case 0x309198u: goto label_309198;
        case 0x3091b0u: goto label_3091b0;
        default: break;
    }

    ctx->pc = 0x3090f0u;

    // 0x3090f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3090f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3090f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3090f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3090f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3090f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3090fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3090fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x309100: 0x8c890000  lw          $t1, 0x0($a0)
    ctx->pc = 0x309100u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x309104: 0x3122000f  andi        $v0, $t1, 0xF
    ctx->pc = 0x309104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)15);
    // 0x309108: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x309108u;
    {
        const bool branch_taken_0x309108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30910Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309108u;
            // 0x30910c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309108) {
            ctx->pc = 0x309130u;
            goto label_309130;
        }
    }
    ctx->pc = 0x309110u;
label_309110:
    // 0x309110: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x309110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x309114: 0x24490001  addiu       $t1, $v0, 0x1
    ctx->pc = 0x309114u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x309118: 0x3122000f  andi        $v0, $t1, 0xF
    ctx->pc = 0x309118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)15);
    // 0x30911c: 0xae290000  sw          $t1, 0x0($s1)
    ctx->pc = 0x30911cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 9));
    // 0x309120: 0x0  nop
    ctx->pc = 0x309120u;
    // NOP
    // 0x309124: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x309124u;
    {
        const bool branch_taken_0x309124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x309124) {
            ctx->pc = 0x309110u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_309110;
        }
    }
    ctx->pc = 0x30912Cu;
    // 0x30912c: 0x0  nop
    ctx->pc = 0x30912cu;
    // NOP
label_309130:
    // 0x309130: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x309130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x309134: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x309134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x309138: 0x3c0201d3  lui         $v0, 0x1D3
    ctx->pc = 0x309138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)467 << 16));
    // 0x30913c: 0x25300010  addiu       $s0, $t1, 0x10
    ctx->pc = 0x30913cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x309140: 0x3c0701d3  lui         $a3, 0x1D3
    ctx->pc = 0x309140u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)467 << 16));
    // 0x309144: 0xac644790  sw          $a0, 0x4790($v1)
    ctx->pc = 0x309144u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18320), GPR_U32(ctx, 4));
    // 0x309148: 0x3c0601d3  lui         $a2, 0x1D3
    ctx->pc = 0x309148u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)467 << 16));
    // 0x30914c: 0xac444748  sw          $a0, 0x4748($v0)
    ctx->pc = 0x30914cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 18248), GPR_U32(ctx, 4));
    // 0x309150: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x309150u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x309154: 0x8d280004  lw          $t0, 0x4($t1)
    ctx->pc = 0x309154u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x309158: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x309158u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x30915c: 0x3c0201d3  lui         $v0, 0x1D3
    ctx->pc = 0x30915cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)467 << 16));
    // 0x309160: 0x248447a0  addiu       $a0, $a0, 0x47A0
    ctx->pc = 0x309160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18336));
    // 0x309164: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x309164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309168: 0xace84788  sw          $t0, 0x4788($a3)
    ctx->pc = 0x309168u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 18312), GPR_U32(ctx, 8));
    // 0x30916c: 0xacc84740  sw          $t0, 0x4740($a2)
    ctx->pc = 0x30916cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 18240), GPR_U32(ctx, 8));
    // 0x309170: 0x8d260008  lw          $a2, 0x8($t1)
    ctx->pc = 0x309170u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x309174: 0xac664780  sw          $a2, 0x4780($v1)
    ctx->pc = 0x309174u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18304), GPR_U32(ctx, 6));
    // 0x309178: 0xc0c21f0  jal         func_3087C0
    ctx->pc = 0x309178u;
    SET_GPR_U32(ctx, 31, 0x309180u);
    ctx->pc = 0x30917Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309178u;
            // 0x30917c: 0xac464738  sw          $a2, 0x4738($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 18232), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3087C0u;
    if (runtime->hasFunction(0x3087C0u)) {
        auto targetFn = runtime->lookupFunction(0x3087C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309180u; }
        if (ctx->pc != 0x309180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003087C0_0x3087c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309180u; }
        if (ctx->pc != 0x309180u) { return; }
    }
    ctx->pc = 0x309180u;
label_309180:
    // 0x309180: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x309180u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x309184: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x309184u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x309188: 0x248447a0  addiu       $a0, $a0, 0x47A0
    ctx->pc = 0x309188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18336));
    // 0x30918c: 0xac624778  sw          $v0, 0x4778($v1)
    ctx->pc = 0x30918cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18296), GPR_U32(ctx, 2));
    // 0x309190: 0xc0c21f0  jal         func_3087C0
    ctx->pc = 0x309190u;
    SET_GPR_U32(ctx, 31, 0x309198u);
    ctx->pc = 0x309194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309190u;
            // 0x309194: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3087C0u;
    if (runtime->hasFunction(0x3087C0u)) {
        auto targetFn = runtime->lookupFunction(0x3087C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309198u; }
        if (ctx->pc != 0x309198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003087C0_0x3087c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309198u; }
        if (ctx->pc != 0x309198u) { return; }
    }
    ctx->pc = 0x309198u;
label_309198:
    // 0x309198: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x309198u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x30919c: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x30919cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x3091a0: 0x248447a0  addiu       $a0, $a0, 0x47A0
    ctx->pc = 0x3091a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18336));
    // 0x3091a4: 0xac624770  sw          $v0, 0x4770($v1)
    ctx->pc = 0x3091a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18288), GPR_U32(ctx, 2));
    // 0x3091a8: 0xc0c21f0  jal         func_3087C0
    ctx->pc = 0x3091A8u;
    SET_GPR_U32(ctx, 31, 0x3091B0u);
    ctx->pc = 0x3091ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3091A8u;
            // 0x3091ac: 0x26050040  addiu       $a1, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3087C0u;
    if (runtime->hasFunction(0x3087C0u)) {
        auto targetFn = runtime->lookupFunction(0x3087C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3091B0u; }
        if (ctx->pc != 0x3091B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003087C0_0x3087c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3091B0u; }
        if (ctx->pc != 0x3091B0u) { return; }
    }
    ctx->pc = 0x3091B0u;
label_3091b0:
    // 0x3091b0: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x3091b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x3091b4: 0x26070060  addiu       $a3, $s0, 0x60
    ctx->pc = 0x3091b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x3091b8: 0xac624768  sw          $v0, 0x4768($v1)
    ctx->pc = 0x3091b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18280), GPR_U32(ctx, 2));
    // 0x3091bc: 0x260400e0  addiu       $a0, $s0, 0xE0
    ctx->pc = 0x3091bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x3091c0: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x3091c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x3091c4: 0x26050160  addiu       $a1, $s0, 0x160
    ctx->pc = 0x3091c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
    // 0x3091c8: 0xac674760  sw          $a3, 0x4760($v1)
    ctx->pc = 0x3091c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18272), GPR_U32(ctx, 7));
    // 0x3091cc: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x3091ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x3091d0: 0xac644758  sw          $a0, 0x4758($v1)
    ctx->pc = 0x3091d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18264), GPR_U32(ctx, 4));
    // 0x3091d4: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x3091d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x3091d8: 0xac654750  sw          $a1, 0x4750($v1)
    ctx->pc = 0x3091d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18256), GPR_U32(ctx, 5));
    // 0x3091dc: 0x8e060060  lw          $a2, 0x60($s0)
    ctx->pc = 0x3091dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x3091e0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3091e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3091e4: 0x50c30004  beql        $a2, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3091E4u;
    {
        const bool branch_taken_0x3091e4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x3091e4) {
            ctx->pc = 0x3091E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3091E4u;
            // 0x3091e8: 0x4303c  dsll32      $a2, $a0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3091F8u;
            goto label_3091f8;
        }
    }
    ctx->pc = 0x3091ECu;
    // 0x3091ec: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x3091ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x3091f0: 0xac674730  sw          $a3, 0x4730($v1)
    ctx->pc = 0x3091f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18224), GPR_U32(ctx, 7));
    // 0x3091f4: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x3091f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
label_3091f8:
    // 0x3091f8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3091f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3091fc: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x3091fcu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x309200: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x309200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x309204: 0x50830004  beql        $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x309204u;
    {
        const bool branch_taken_0x309204 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x309204) {
            ctx->pc = 0x309208u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x309204u;
            // 0x309208: 0x5283c  dsll32      $a1, $a1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x309218u;
            goto label_309218;
        }
    }
    ctx->pc = 0x30920Cu;
    // 0x30920c: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x30920cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x309210: 0xac664728  sw          $a2, 0x4728($v1)
    ctx->pc = 0x309210u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18216), GPR_U32(ctx, 6));
    // 0x309214: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x309214u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_309218:
    // 0x309218: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x309218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30921c: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x30921cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x309220: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x309220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x309224: 0x50830004  beql        $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x309224u;
    {
        const bool branch_taken_0x309224 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x309224) {
            ctx->pc = 0x309228u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x309224u;
            // 0x309228: 0x260301e0  addiu       $v1, $s0, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 480));
        ctx->in_delay_slot = false;
            ctx->pc = 0x309238u;
            goto label_309238;
        }
    }
    ctx->pc = 0x30922Cu;
    // 0x30922c: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x30922cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x309230: 0xac654720  sw          $a1, 0x4720($v1)
    ctx->pc = 0x309230u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18208), GPR_U32(ctx, 5));
    // 0x309234: 0x260301e0  addiu       $v1, $s0, 0x1E0
    ctx->pc = 0x309234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 480));
label_309238:
    // 0x309238: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x309238u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x30923c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x30923cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x309240: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x309240u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x309244: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x309244u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x309248: 0x3e00008  jr          $ra
    ctx->pc = 0x309248u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30924Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309248u;
            // 0x30924c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x309250u;
    ctx->pc = 0x309250u;
}
