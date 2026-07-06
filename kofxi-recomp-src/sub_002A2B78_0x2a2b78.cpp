#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A2B78
// Address: 0x2a2b78 - 0x2a2ce8
void sub_002A2B78_0x2a2b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A2B78_0x2a2b78");
#endif

    switch (ctx->pc) {
        case 0x2a2ba4u: goto label_2a2ba4;
        case 0x2a2bd0u: goto label_2a2bd0;
        case 0x2a2be8u: goto label_2a2be8;
        case 0x2a2c44u: goto label_2a2c44;
        case 0x2a2c90u: goto label_2a2c90;
        case 0x2a2ca8u: goto label_2a2ca8;
        case 0x2a2cb8u: goto label_2a2cb8;
        case 0x2a2cc8u: goto label_2a2cc8;
        case 0x2a2cd8u: goto label_2a2cd8;
        default: break;
    }

    ctx->pc = 0x2a2b78u;

    // 0x2a2b78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a2b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a2b7c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2a2b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2a2b80: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2a2b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2a2b84: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x2a2b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2a2b88: 0x2451c888  addiu       $s1, $v0, -0x3778
    ctx->pc = 0x2a2b88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953096));
    // 0x2a2b8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a2b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a2b90: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a2b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a2b94: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x2a2b94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2a2b98: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a2b98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2b9c: 0xc0a8b3a  jal         func_2A2CE8
    ctx->pc = 0x2A2B9Cu;
    SET_GPR_U32(ctx, 31, 0x2A2BA4u);
    ctx->pc = 0x2A2BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2B9Cu;
            // 0x2a2ba0: 0x240700c4  addiu       $a3, $zero, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2CE8u;
    if (runtime->hasFunction(0x2A2CE8u)) {
        auto targetFn = runtime->lookupFunction(0x2A2CE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2BA4u; }
        if (ctx->pc != 0x2A2BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2CE8_0x2a2ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2BA4u; }
        if (ctx->pc != 0x2A2BA4u) { return; }
    }
    ctx->pc = 0x2A2BA4u;
label_2a2ba4:
    // 0x2a2ba4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2a2ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2a2ba8: 0x8c426a04  lw          $v0, 0x6A04($v0)
    ctx->pc = 0x2a2ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27140)));
    // 0x2a2bac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A2BACu;
    {
        const bool branch_taken_0x2a2bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2BACu;
            // 0x2a2bb0: 0x2410001b  addiu       $s0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2bac) {
            ctx->pc = 0x2A2BBCu;
            goto label_2a2bbc;
        }
    }
    ctx->pc = 0x2A2BB4u;
    // 0x2a2bb4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2a2bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a2bb8: 0x2450001b  addiu       $s0, $v0, 0x1B
    ctx->pc = 0x2a2bb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 27));
label_2a2bbc:
    // 0x2a2bbc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a2bbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2bc0: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2a2bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2a2bc4: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x2a2bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2a2bc8: 0xc0a8b3a  jal         func_2A2CE8
    ctx->pc = 0x2A2BC8u;
    SET_GPR_U32(ctx, 31, 0x2A2BD0u);
    ctx->pc = 0x2A2BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2BC8u;
            // 0x2a2bcc: 0x240700ca  addiu       $a3, $zero, 0xCA (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2CE8u;
    if (runtime->hasFunction(0x2A2CE8u)) {
        auto targetFn = runtime->lookupFunction(0x2A2CE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2BD0u; }
        if (ctx->pc != 0x2A2BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2CE8_0x2a2ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2BD0u; }
        if (ctx->pc != 0x2A2BD0u) { return; }
    }
    ctx->pc = 0x2A2BD0u;
label_2a2bd0:
    // 0x2a2bd0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a2bd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2bd4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a2bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a2bd8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2a2bd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a2bdc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a2bdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a2be0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A2BE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A2BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2BE0u;
            // 0x2a2be4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A2BE8u;
label_2a2be8:
    // 0x2a2be8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a2be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a2bec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a2becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a2bf0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a2bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a2bf4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a2bf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2bf8: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A2BF8u;
    {
        const bool branch_taken_0x2a2bf8 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x2A2BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2BF8u;
            // 0x2a2bfc: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2bf8) {
            ctx->pc = 0x2A2C0Cu;
            goto label_2a2c0c;
        }
    }
    ctx->pc = 0x2A2C00u;
    // 0x2a2c00: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2a2c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2a2c04: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2A2C04u;
    {
        const bool branch_taken_0x2a2c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2C04u;
            // 0x2a2c08: 0x2450c8b0  addiu       $s0, $v0, -0x3750 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2c04) {
            ctx->pc = 0x2A2C90u;
            goto label_2a2c90;
        }
    }
    ctx->pc = 0x2A2C0Cu;
label_2a2c0c:
    // 0x2a2c0c: 0x2a02001b  slti        $v0, $s0, 0x1B
    ctx->pc = 0x2a2c0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x2a2c10: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A2C10u;
    {
        const bool branch_taken_0x2a2c10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2C10u;
            // 0x2a2c14: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2c10) {
            ctx->pc = 0x2A2C2Cu;
            goto label_2a2c2c;
        }
    }
    ctx->pc = 0x2A2C18u;
    // 0x2a2c18: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2a2c18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2a2c1c: 0x24426998  addiu       $v0, $v0, 0x6998
    ctx->pc = 0x2a2c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27032));
    // 0x2a2c20: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a2c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a2c24: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2A2C24u;
    {
        const bool branch_taken_0x2a2c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2C24u;
            // 0x2a2c28: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2c24) {
            ctx->pc = 0x2A2C90u;
            goto label_2a2c90;
        }
    }
    ctx->pc = 0x2A2C2Cu;
label_2a2c2c:
    // 0x2a2c2c: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x2a2c2cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x2a2c30: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x2a2c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2a2c34: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x2a2c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2a2c38: 0x2626c888  addiu       $a2, $s1, -0x3778
    ctx->pc = 0x2a2c38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4294953096));
    // 0x2a2c3c: 0xc0a8b3a  jal         func_2A2CE8
    ctx->pc = 0x2A2C3Cu;
    SET_GPR_U32(ctx, 31, 0x2A2C44u);
    ctx->pc = 0x2A2C40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2C3Cu;
            // 0x2a2c40: 0x240700da  addiu       $a3, $zero, 0xDA (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 218));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2CE8u;
    if (runtime->hasFunction(0x2A2CE8u)) {
        auto targetFn = runtime->lookupFunction(0x2A2CE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2C44u; }
        if (ctx->pc != 0x2A2C44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2CE8_0x2a2ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2C44u; }
        if (ctx->pc != 0x2A2C44u) { return; }
    }
    ctx->pc = 0x2A2C44u;
label_2a2c44:
    // 0x2a2c44: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2a2c44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2a2c48: 0x8c646a04  lw          $a0, 0x6A04($v1)
    ctx->pc = 0x2a2c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27140)));
    // 0x2a2c4c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A2C4Cu;
    {
        const bool branch_taken_0x2a2c4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2C4Cu;
            // 0x2a2c50: 0x2602ffe5  addiu       $v0, $s0, -0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967269));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2c4c) {
            ctx->pc = 0x2A2C64u;
            goto label_2a2c64;
        }
    }
    ctx->pc = 0x2A2C54u;
    // 0x2a2c54: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2a2c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a2c58: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2a2c58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2a2c5c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A2C5Cu;
    {
        const bool branch_taken_0x2a2c5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a2c5c) {
            ctx->pc = 0x2A2C60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2C5Cu;
            // 0x2a2c60: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A2C70u;
            goto label_2a2c70;
        }
    }
    ctx->pc = 0x2A2C64u;
label_2a2c64:
    // 0x2a2c64: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2a2c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2a2c68: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A2C68u;
    {
        const bool branch_taken_0x2a2c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2C68u;
            // 0x2a2c6c: 0x2450c8b0  addiu       $s0, $v0, -0x3750 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2c68) {
            ctx->pc = 0x2A2C7Cu;
            goto label_2a2c7c;
        }
    }
    ctx->pc = 0x2A2C70u;
label_2a2c70:
    // 0x2a2c70: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2a2c70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2a2c74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a2c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a2c78: 0x8c50ff94  lw          $s0, -0x6C($v0)
    ctx->pc = 0x2a2c78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967188)));
label_2a2c7c:
    // 0x2a2c7c: 0x2626c888  addiu       $a2, $s1, -0x3778
    ctx->pc = 0x2a2c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4294953096));
    // 0x2a2c80: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2a2c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2a2c84: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x2a2c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2a2c88: 0xc0a8b3a  jal         func_2A2CE8
    ctx->pc = 0x2A2C88u;
    SET_GPR_U32(ctx, 31, 0x2A2C90u);
    ctx->pc = 0x2A2C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2C88u;
            // 0x2a2c8c: 0x240700e0  addiu       $a3, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2CE8u;
    if (runtime->hasFunction(0x2A2CE8u)) {
        auto targetFn = runtime->lookupFunction(0x2A2CE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2C90u; }
        if (ctx->pc != 0x2A2C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2CE8_0x2a2ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2C90u; }
        if (ctx->pc != 0x2A2C90u) { return; }
    }
    ctx->pc = 0x2A2C90u;
label_2a2c90:
    // 0x2a2c90: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a2c90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2c94: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a2c94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a2c98: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2a2c98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a2c9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a2c9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a2ca0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A2CA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A2CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2CA0u;
            // 0x2a2ca4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A2CA8u;
label_2a2ca8:
    // 0x2a2ca8: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2a2ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2a2cac: 0x3e00008  jr          $ra
    ctx->pc = 0x2A2CACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A2CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2CACu;
            // 0x2a2cb0: 0x8c626988  lw          $v0, 0x6988($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27016)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A2CB4u;
    // 0x2a2cb4: 0x0  nop
    ctx->pc = 0x2a2cb4u;
    // NOP
label_2a2cb8:
    // 0x2a2cb8: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2a2cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2a2cbc: 0x3e00008  jr          $ra
    ctx->pc = 0x2A2CBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A2CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2CBCu;
            // 0x2a2cc0: 0x8c62698c  lw          $v0, 0x698C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27020)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A2CC4u;
    // 0x2a2cc4: 0x0  nop
    ctx->pc = 0x2a2cc4u;
    // NOP
label_2a2cc8:
    // 0x2a2cc8: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2a2cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2a2ccc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a2cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a2cd0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A2CD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A2CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2CD0u;
            // 0x2a2cd4: 0xac646988  sw          $a0, 0x6988($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 27016), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A2CD8u;
label_2a2cd8:
    // 0x2a2cd8: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2a2cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2a2cdc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a2cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a2ce0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A2CE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A2CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2CE0u;
            // 0x2a2ce4: 0xac64698c  sw          $a0, 0x698C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 27020), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A2CE8u;
    ctx->pc = 0x2a2ce8u;
}
