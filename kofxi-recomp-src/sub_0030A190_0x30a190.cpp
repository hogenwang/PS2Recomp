#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0030A190
// Address: 0x30a190 - 0x30a2b0
void sub_0030A190_0x30a190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030A190_0x30a190");
#endif

    switch (ctx->pc) {
        case 0x30a1c8u: goto label_30a1c8;
        case 0x30a1f8u: goto label_30a1f8;
        case 0x30a238u: goto label_30a238;
        case 0x30a240u: goto label_30a240;
        case 0x30a258u: goto label_30a258;
        case 0x30a278u: goto label_30a278;
        case 0x30a288u: goto label_30a288;
        default: break;
    }

    ctx->pc = 0x30a190u;

    // 0x30a190: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30a190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30a194: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x30a194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x30a198: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30a198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30a19c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30a19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30a1a0: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x30a1a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x30a1a4: 0x8e03011c  lw          $v1, 0x11C($s0)
    ctx->pc = 0x30a1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x30a1a8: 0x1060003c  beqz        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x30A1A8u;
    {
        const bool branch_taken_0x30a1a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A1ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30A1A8u;
            // 0x30a1ac: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a1a8) {
            ctx->pc = 0x30A29Cu;
            goto label_30a29c;
        }
    }
    ctx->pc = 0x30A1B0u;
    // 0x30a1b0: 0x3c0201d3  lui         $v0, 0x1D3
    ctx->pc = 0x30a1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)467 << 16));
    // 0x30a1b4: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x30a1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x30a1b8: 0x8c4520c0  lw          $a1, 0x20C0($v0)
    ctx->pc = 0x30a1b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8384)));
    // 0x30a1bc: 0x24841f00  addiu       $a0, $a0, 0x1F00
    ctx->pc = 0x30a1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7936));
    // 0x30a1c0: 0xc040d06  jal         func_103418
    ctx->pc = 0x30A1C0u;
    SET_GPR_U32(ctx, 31, 0x30A1C8u);
    ctx->pc = 0x30A1C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A1C0u;
            // 0x30a1c4: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103418u;
    if (runtime->hasFunction(0x103418u)) {
        auto targetFn = runtime->lookupFunction(0x103418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A1C8u; }
        if (ctx->pc != 0x30A1C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103418_0x103418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A1C8u; }
        if (ctx->pc != 0x30A1C8u) { return; }
    }
    ctx->pc = 0x30A1C8u;
label_30a1c8:
    // 0x30a1c8: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x30a1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x30a1cc: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x30a1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x30a1d0: 0x8c630024  lw          $v1, 0x24($v1)
    ctx->pc = 0x30a1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x30a1d4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x30a1d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x30a1d8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30A1D8u;
    {
        const bool branch_taken_0x30a1d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a1d8) {
            ctx->pc = 0x30A1F8u;
            goto label_30a1f8;
        }
    }
    ctx->pc = 0x30A1E0u;
    // 0x30a1e0: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x30a1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x30a1e4: 0x3c0601d3  lui         $a2, 0x1D3
    ctx->pc = 0x30a1e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)467 << 16));
    // 0x30a1e8: 0x24841f00  addiu       $a0, $a0, 0x1F00
    ctx->pc = 0x30a1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7936));
    // 0x30a1ec: 0x24c61ec0  addiu       $a2, $a2, 0x1EC0
    ctx->pc = 0x30a1ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7872));
    // 0x30a1f0: 0xc040d06  jal         func_103418
    ctx->pc = 0x30A1F0u;
    SET_GPR_U32(ctx, 31, 0x30A1F8u);
    ctx->pc = 0x30A1F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A1F0u;
            // 0x30a1f4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103418u;
    if (runtime->hasFunction(0x103418u)) {
        auto targetFn = runtime->lookupFunction(0x103418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A1F8u; }
        if (ctx->pc != 0x30A1F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103418_0x103418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A1F8u; }
        if (ctx->pc != 0x30A1F8u) { return; }
    }
    ctx->pc = 0x30A1F8u;
label_30a1f8:
    // 0x30a1f8: 0x3c0201d2  lui         $v0, 0x1D2
    ctx->pc = 0x30a1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)466 << 16));
    // 0x30a1fc: 0x8e03011c  lw          $v1, 0x11C($s0)
    ctx->pc = 0x30a1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x30a200: 0x8c441e18  lw          $a0, 0x1E18($v0)
    ctx->pc = 0x30a200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7704)));
    // 0x30a204: 0x3c0201d2  lui         $v0, 0x1D2
    ctx->pc = 0x30a204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)466 << 16));
    // 0x30a208: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x30a208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x30a20c: 0xac431e18  sw          $v1, 0x1E18($v0)
    ctx->pc = 0x30a20cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7704), GPR_U32(ctx, 3));
    // 0x30a210: 0x8e060118  lw          $a2, 0x118($s0)
    ctx->pc = 0x30a210u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x30a214: 0x54c00003  bnel        $a2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x30A214u;
    {
        const bool branch_taken_0x30a214 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x30a214) {
            ctx->pc = 0x30A218u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30A214u;
            // 0x30a218: 0x8e070110  lw          $a3, 0x110($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30A224u;
            goto label_30a224;
        }
    }
    ctx->pc = 0x30A21Cu;
    // 0x30a21c: 0x8e060114  lw          $a2, 0x114($s0)
    ctx->pc = 0x30a21cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x30a220: 0x8e070110  lw          $a3, 0x110($s0)
    ctx->pc = 0x30a220u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_30a224:
    // 0x30a224: 0x3c0401d2  lui         $a0, 0x1D2
    ctx->pc = 0x30a224u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)466 << 16));
    // 0x30a228: 0x3c0501d3  lui         $a1, 0x1D3
    ctx->pc = 0x30a228u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)467 << 16));
    // 0x30a22c: 0x24841e50  addiu       $a0, $a0, 0x1E50
    ctx->pc = 0x30a22cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7760));
    // 0x30a230: 0xc0c2728  jal         func_309CA0
    ctx->pc = 0x30A230u;
    SET_GPR_U32(ctx, 31, 0x30A238u);
    ctx->pc = 0x30A234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A230u;
            // 0x30a234: 0x24a51f00  addiu       $a1, $a1, 0x1F00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7936));
        ctx->in_delay_slot = false;
    ctx->pc = 0x309CA0u;
    if (runtime->hasFunction(0x309CA0u)) {
        auto targetFn = runtime->lookupFunction(0x309CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A238u; }
        if (ctx->pc != 0x30A238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00309CA0_0x309ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A238u; }
        if (ctx->pc != 0x30A238u) { return; }
    }
    ctx->pc = 0x30A238u;
label_30a238:
    // 0x30a238: 0xc0c25dc  jal         func_309770
    ctx->pc = 0x30A238u;
    SET_GPR_U32(ctx, 31, 0x30A240u);
    ctx->pc = 0x30A23Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A238u;
            // 0x30a23c: 0x8e04017c  lw          $a0, 0x17C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x309770u;
    if (runtime->hasFunction(0x309770u)) {
        auto targetFn = runtime->lookupFunction(0x309770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A240u; }
        if (ctx->pc != 0x30A240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00309770_0x309770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A240u; }
        if (ctx->pc != 0x30A240u) { return; }
    }
    ctx->pc = 0x30A240u;
label_30a240:
    // 0x30a240: 0x8e07011c  lw          $a3, 0x11C($s0)
    ctx->pc = 0x30a240u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x30a244: 0x3c0501d2  lui         $a1, 0x1D2
    ctx->pc = 0x30a244u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)466 << 16));
    // 0x30a248: 0x8e2400b8  lw          $a0, 0xB8($s1)
    ctx->pc = 0x30a248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x30a24c: 0x8e060120  lw          $a2, 0x120($s0)
    ctx->pc = 0x30a24cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x30a250: 0xc0c2770  jal         func_309DC0
    ctx->pc = 0x30A250u;
    SET_GPR_U32(ctx, 31, 0x30A258u);
    ctx->pc = 0x30A254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A250u;
            // 0x30a254: 0x24a51e50  addiu       $a1, $a1, 0x1E50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x309DC0u;
    if (runtime->hasFunction(0x309DC0u)) {
        auto targetFn = runtime->lookupFunction(0x309DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A258u; }
        if (ctx->pc != 0x30A258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00309DC0_0x309dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A258u; }
        if (ctx->pc != 0x30A258u) { return; }
    }
    ctx->pc = 0x30A258u;
label_30a258:
    // 0x30a258: 0x3c0201d2  lui         $v0, 0x1D2
    ctx->pc = 0x30a258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)466 << 16));
    // 0x30a25c: 0x8e03011c  lw          $v1, 0x11C($s0)
    ctx->pc = 0x30a25cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x30a260: 0x8c451e30  lw          $a1, 0x1E30($v0)
    ctx->pc = 0x30a260u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7728)));
    // 0x30a264: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x30a264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a268: 0x3c0201d2  lui         $v0, 0x1D2
    ctx->pc = 0x30a268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)466 << 16));
    // 0x30a26c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x30a26cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x30a270: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x30A270u;
    SET_GPR_U32(ctx, 31, 0x30A278u);
    ctx->pc = 0x30A274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A270u;
            // 0x30a274: 0xac431e30  sw          $v1, 0x1E30($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 7728), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (runtime->hasFunction(0x10CEE0u)) {
        auto targetFn = runtime->lookupFunction(0x10CEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A278u; }
        if (ctx->pc != 0x30A278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CEE0_0x10cee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A278u; }
        if (ctx->pc != 0x30A278u) { return; }
    }
    ctx->pc = 0x30A278u;
label_30a278:
    // 0x30a278: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30a278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30a27c: 0x8c44e688  lw          $a0, -0x1978($v0)
    ctx->pc = 0x30a27cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960776)));
    // 0x30a280: 0xc040a04  jal         func_102810
    ctx->pc = 0x30A280u;
    SET_GPR_U32(ctx, 31, 0x30A288u);
    ctx->pc = 0x30A284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A280u;
            // 0x30a284: 0x8e2500b4  lw          $a1, 0xB4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102810u;
    if (runtime->hasFunction(0x102810u)) {
        auto targetFn = runtime->lookupFunction(0x102810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A288u; }
        if (ctx->pc != 0x30A288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102810_0x102810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A288u; }
        if (ctx->pc != 0x30A288u) { return; }
    }
    ctx->pc = 0x30A288u;
label_30a288:
    // 0x30a288: 0x3c0401d2  lui         $a0, 0x1D2
    ctx->pc = 0x30a288u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)466 << 16));
    // 0x30a28c: 0x3c0301d2  lui         $v1, 0x1D2
    ctx->pc = 0x30a28cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)466 << 16));
    // 0x30a290: 0x8c841e10  lw          $a0, 0x1E10($a0)
    ctx->pc = 0x30a290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7696)));
    // 0x30a294: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x30a294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x30a298: 0xac641e10  sw          $a0, 0x1E10($v1)
    ctx->pc = 0x30a298u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7696), GPR_U32(ctx, 4));
label_30a29c:
    // 0x30a29c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x30a29cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30a2a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30a2a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30a2a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30a2a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30a2a8: 0x3e00008  jr          $ra
    ctx->pc = 0x30A2A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30A2ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30A2A8u;
            // 0x30a2ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30A2B0u;
    ctx->pc = 0x30a2b0u;
}
