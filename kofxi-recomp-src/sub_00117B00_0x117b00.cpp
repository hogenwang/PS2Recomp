#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00117B00
// Address: 0x117b00 - 0x117c90
void sub_00117B00_0x117b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117B00_0x117b00");
#endif

    switch (ctx->pc) {
        case 0x117b48u: goto label_117b48;
        case 0x117b6cu: goto label_117b6c;
        case 0x117bb0u: goto label_117bb0;
        case 0x117c1cu: goto label_117c1c;
        case 0x117c40u: goto label_117c40;
        case 0x117c50u: goto label_117c50;
        case 0x117c78u: goto label_117c78;
        default: break;
    }

    ctx->pc = 0x117b00u;

    // 0x117b00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x117b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x117b04: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x117b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x117b08: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x117b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x117b0c: 0x24429d48  addiu       $v0, $v0, -0x62B8
    ctx->pc = 0x117b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942024));
    // 0x117b10: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x117b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x117b14: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x117b14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117b18: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x117b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x117b1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x117b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x117b20: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x117b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x117b24: 0x4610054  bgez        $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x117B24u;
    {
        const bool branch_taken_0x117b24 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x117B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117B24u;
            // 0x117b28: 0x8c460018  lw          $a2, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117b24) {
            ctx->pc = 0x117C78u;
            goto label_117c78;
        }
    }
    ctx->pc = 0x117B2Cu;
    // 0x117b2c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x117b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x117b30: 0x34421010  ori         $v0, $v0, 0x1010
    ctx->pc = 0x117b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4112);
    // 0x117b34: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x117b34u;
    SET_GPR_S32(ctx, 18, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x117b38: 0x54c0000c  bnel        $a2, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x117B38u;
    {
        const bool branch_taken_0x117b38 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x117b38) {
            ctx->pc = 0x117B3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x117B38u;
            // 0x117b3c: 0xdcc20020  ld          $v0, 0x20($a2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x117B6Cu;
            goto label_117b6c;
        }
    }
    ctx->pc = 0x117B40u;
    // 0x117b40: 0xc045de8  jal         func_1177A0
    ctx->pc = 0x117B40u;
    SET_GPR_U32(ctx, 31, 0x117B48u);
    ctx->pc = 0x117B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117B40u;
            // 0x117b44: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1177A0u;
    if (runtime->hasFunction(0x1177A0u)) {
        auto targetFn = runtime->lookupFunction(0x1177A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117B48u; }
        if (ctx->pc != 0x117B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001177A0_0x1177a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117B48u; }
        if (ctx->pc != 0x117B48u) { return; }
    }
    ctx->pc = 0x117B48u;
label_117b48:
    // 0x117b48: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x117b48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x117b4c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x117b4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x117b50: 0x3484f7ff  ori         $a0, $a0, 0xF7FF
    ctx->pc = 0x117b50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)63487);
    // 0x117b54: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x117b54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117b58: 0x2442024  and         $a0, $s2, $a0
    ctx->pc = 0x117b58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    // 0x117b5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x117b5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117b60: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x117b60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117b64: 0x8045de4  j           func_117790
    ctx->pc = 0x117B64u;
    ctx->pc = 0x117B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117B64u;
            // 0x117b68: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117790u;
    if (runtime->hasFunction(0x117790u)) {
        auto targetFn = runtime->lookupFunction(0x117790u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00117790_0x117790(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x117B6Cu;
label_117b6c:
    // 0x117b6c: 0xdcc30010  ld          $v1, 0x10($a2)
    ctx->pc = 0x117b6cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x117b70: 0xdcc40018  ld          $a0, 0x18($a2)
    ctx->pc = 0x117b70u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x117b74: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x117b74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x117b78: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x117b78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x117b7c: 0x10c00019  beqz        $a2, . + 4 + (0x19 << 2)
    ctx->pc = 0x117B7Cu;
    {
        const bool branch_taken_0x117b7c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x117B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117B7Cu;
            // 0x117b80: 0x44802f  dsubu       $s0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) - GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117b7c) {
            ctx->pc = 0x117BE4u;
            goto label_117be4;
        }
    }
    ctx->pc = 0x117B84u;
    // 0x117b84: 0xdcc20020  ld          $v0, 0x20($a2)
    ctx->pc = 0x117b84u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x117b88: 0x66037333  daddiu      $v1, $s0, 0x7333
    ctx->pc = 0x117b88u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)29491);
    // 0x117b8c: 0xdcc40010  ld          $a0, 0x10($a2)
    ctx->pc = 0x117b8cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x117b90: 0xdcc50018  ld          $a1, 0x18($a2)
    ctx->pc = 0x117b90u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x117b94: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x117b94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x117b98: 0x45102f  dsubu       $v0, $v0, $a1
    ctx->pc = 0x117b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 5));
    // 0x117b9c: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x117b9cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x117ba0: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x117BA0u;
    {
        const bool branch_taken_0x117ba0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x117BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117BA0u;
            // 0x117ba4: 0x32510003  andi        $s1, $s2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x117ba0) {
            ctx->pc = 0x117BE4u;
            goto label_117be4;
        }
    }
    ctx->pc = 0x117BA8u;
    // 0x117ba8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x117ba8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117bac: 0x0  nop
    ctx->pc = 0x117bacu;
    // NOP
label_117bb0:
    // 0x117bb0: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x117bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x117bb4: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x117BB4u;
    {
        const bool branch_taken_0x117bb4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x117BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117BB4u;
            // 0x117bb8: 0x66037333  daddiu      $v1, $s0, 0x7333 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)29491);
        ctx->in_delay_slot = false;
        if (branch_taken_0x117bb4) {
            ctx->pc = 0x117BE8u;
            goto label_117be8;
        }
    }
    ctx->pc = 0x117BBCu;
    // 0x117bbc: 0xdcc20020  ld          $v0, 0x20($a2)
    ctx->pc = 0x117bbcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x117bc0: 0xdcc40010  ld          $a0, 0x10($a2)
    ctx->pc = 0x117bc0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x117bc4: 0xdcc50018  ld          $a1, 0x18($a2)
    ctx->pc = 0x117bc4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x117bc8: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x117bc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x117bcc: 0x45102f  dsubu       $v0, $v0, $a1
    ctx->pc = 0x117bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 5));
    // 0x117bd0: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x117bd0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x117bd4: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x117BD4u;
    {
        const bool branch_taken_0x117bd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x117bd4) {
            ctx->pc = 0x117BD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x117BD4u;
            // 0x117bd8: 0x207102f  dsubu       $v0, $s0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) - GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x117BECu;
            goto label_117bec;
        }
    }
    ctx->pc = 0x117BDCu;
    // 0x117bdc: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x117BDCu;
    {
        const bool branch_taken_0x117bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117BDCu;
            // 0x117be0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117bdc) {
            ctx->pc = 0x117BB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_117bb0;
        }
    }
    ctx->pc = 0x117BE4u;
label_117be4:
    // 0x117be4: 0x32510003  andi        $s1, $s2, 0x3
    ctx->pc = 0x117be4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
label_117be8:
    // 0x117be8: 0x207102f  dsubu       $v0, $s0, $a3
    ctx->pc = 0x117be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) - GPR_U64(ctx, 7));
label_117bec:
    // 0x117bec: 0x28427333  slti        $v0, $v0, 0x7333
    ctx->pc = 0x117becu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)29491) ? 1 : 0);
    // 0x117bf0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x117BF0u;
    {
        const bool branch_taken_0x117bf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117BF0u;
            // 0x117bf4: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117bf0) {
            ctx->pc = 0x117C40u;
            goto label_117c40;
        }
    }
    ctx->pc = 0x117BF8u;
    // 0x117bf8: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x117bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x117bfc: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x117bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x117c00: 0x24047333  addiu       $a0, $zero, 0x7333
    ctx->pc = 0x117c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29491));
    // 0x117c04: 0xa42016  dsrlv       $a0, $a0, $a1
    ctx->pc = 0x117c04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (GPR_U32(ctx, 5) & 0x3F));
    // 0x117c08: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x117c08u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x117c0c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x117c0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x117c10: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x117c10u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x117c14: 0xc045de8  jal         func_1177A0
    ctx->pc = 0x117C14u;
    SET_GPR_U32(ctx, 31, 0x117C1Cu);
    ctx->pc = 0x117C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117C14u;
            // 0x117c18: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1177A0u;
    if (runtime->hasFunction(0x1177A0u)) {
        auto targetFn = runtime->lookupFunction(0x1177A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117C1Cu; }
        if (ctx->pc != 0x117C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001177A0_0x1177a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117C1Cu; }
        if (ctx->pc != 0x117C1Cu) { return; }
    }
    ctx->pc = 0x117C1Cu;
label_117c1c:
    // 0x117c1c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x117c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x117c20: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x117c20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x117c24: 0x3484f7ff  ori         $a0, $a0, 0xF7FF
    ctx->pc = 0x117c24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)63487);
    // 0x117c28: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x117c28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117c2c: 0x2442024  and         $a0, $s2, $a0
    ctx->pc = 0x117c2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    // 0x117c30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x117c30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117c34: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x117c34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117c38: 0x8045de4  j           func_117790
    ctx->pc = 0x117C38u;
    ctx->pc = 0x117C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117C38u;
            // 0x117c3c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117790u;
    if (runtime->hasFunction(0x117790u)) {
        auto targetFn = runtime->lookupFunction(0x117790u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00117790_0x117790(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x117C40u;
label_117c40:
    // 0x117c40: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x117c40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x117c44: 0x3484f7ff  ori         $a0, $a0, 0xF7FF
    ctx->pc = 0x117c44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)63487);
    // 0x117c48: 0xc045de4  jal         func_117790
    ctx->pc = 0x117C48u;
    SET_GPR_U32(ctx, 31, 0x117C50u);
    ctx->pc = 0x117C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117C48u;
            // 0x117c4c: 0x2442024  and         $a0, $s2, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117790u;
    if (runtime->hasFunction(0x117790u)) {
        auto targetFn = runtime->lookupFunction(0x117790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117C50u; }
        if (ctx->pc != 0x117C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00117790_0x117790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117C50u; }
        if (ctx->pc != 0x117C50u) { return; }
    }
    ctx->pc = 0x117C50u;
label_117c50:
    // 0x117c50: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x117c50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x117c54: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x117c54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x117c58: 0x902016  dsrlv       $a0, $s0, $a0
    ctx->pc = 0x117c58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) >> (GPR_U32(ctx, 4) & 0x3F));
    // 0x117c5c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x117c5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117c60: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x117c60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117c64: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x117c64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x117c68: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x117c68u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x117c6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x117c6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117c70: 0x8045de8  j           func_1177A0
    ctx->pc = 0x117C70u;
    ctx->pc = 0x117C74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117C70u;
            // 0x117c74: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1177A0u;
    if (runtime->hasFunction(0x1177A0u)) {
        auto targetFn = runtime->lookupFunction(0x1177A0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001177A0_0x1177a0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x117C78u;
label_117c78:
    // 0x117c78: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x117c78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x117c7c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x117c7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117c80: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x117c80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117c84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x117c84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117c88: 0x3e00008  jr          $ra
    ctx->pc = 0x117C88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117C88u;
            // 0x117c8c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x117C90u;
    ctx->pc = 0x117c90u;
}
