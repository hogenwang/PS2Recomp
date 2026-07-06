#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018D960
// Address: 0x18d960 - 0x18da50
void sub_0018D960_0x18d960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018D960_0x18d960");
#endif

    ctx->pc = 0x18d960u;

    // 0x18d960: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18d960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x18d964: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x18d964u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x18d968: 0x2442bcc0  addiu       $v0, $v0, -0x4340
    ctx->pc = 0x18d968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950080));
    // 0x18d96c: 0x30838300  andi        $v1, $a0, 0x8300
    ctx->pc = 0x18d96cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)33536);
    // 0x18d970: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x18d970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x18d974: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x18D974u;
    {
        const bool branch_taken_0x18d974 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D974u;
        // 0x18d978: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d974) {
            ctx->pc = 0x18D9A4u;
            goto label_18d9a4;
        }
    }
    ctx->pc = 0x18D97Cu;
    // 0x18d97c: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x18d97cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18d980: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18d980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18d984: 0x728c0  sll         $a1, $a3, 3
    ctx->pc = 0x18d984u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x18d988: 0x2463bd7c  addiu       $v1, $v1, -0x4284
    ctx->pc = 0x18d988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950268));
    // 0x18d98c: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x18d98cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x18d990: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x18d990u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x18d994: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x18d994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x18d998: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x18d998u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x18d99c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x18d99cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x18d9a0: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x18d9a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_18d9a4:
    // 0x18d9a4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x18d9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x18d9a8: 0x34630c00  ori         $v1, $v1, 0xC00
    ctx->pc = 0x18d9a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3072);
    // 0x18d9ac: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x18d9acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x18d9b0: 0x5060000c  beql        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x18D9B0u;
    {
        const bool branch_taken_0x18d9b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d9b0) {
            ctx->pc = 0x18D9B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D9B0u;
            // 0x18d9b4: 0x3c030180  lui         $v1, 0x180 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)384 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D9E4u;
            goto label_18d9e4;
        }
    }
    ctx->pc = 0x18D9B8u;
    // 0x18d9b8: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x18d9b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18d9bc: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18d9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18d9c0: 0x728c0  sll         $a1, $a3, 3
    ctx->pc = 0x18d9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x18d9c4: 0x2463bd84  addiu       $v1, $v1, -0x427C
    ctx->pc = 0x18d9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950276));
    // 0x18d9c8: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x18d9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x18d9cc: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x18d9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x18d9d0: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x18d9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x18d9d4: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x18d9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x18d9d8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x18d9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x18d9dc: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x18d9dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18d9e0: 0x3c030180  lui         $v1, 0x180
    ctx->pc = 0x18d9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)384 << 16));
label_18d9e4:
    // 0x18d9e4: 0x34633000  ori         $v1, $v1, 0x3000
    ctx->pc = 0x18d9e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12288);
    // 0x18d9e8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x18d9e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x18d9ec: 0x5060000c  beql        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x18D9ECu;
    {
        const bool branch_taken_0x18d9ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d9ec) {
            ctx->pc = 0x18D9F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D9ECu;
            // 0x18d9f0: 0x30c300ff  andi        $v1, $a2, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x18DA20u;
            goto label_18da20;
        }
    }
    ctx->pc = 0x18D9F4u;
    // 0x18d9f4: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x18d9f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18d9f8: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x18d9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18d9fc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18d9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x18da00: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18da00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18da04: 0x2442bd8c  addiu       $v0, $v0, -0x4274
    ctx->pc = 0x18da04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950284));
    // 0x18da08: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x18da08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x18da0c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18da0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18da10: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18da10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18da14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18da14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18da18: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x18da18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18da1c: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x18da1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_18da20:
    // 0x18da20: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x18da20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x18da24: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x18da24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x18da28: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x18da28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x18da2c: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x18da2cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18da30: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18DA30u;
    {
        const bool branch_taken_0x18da30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18da30) {
            ctx->pc = 0x18DA34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18DA30u;
            // 0x18da34: 0x3062ffff  andi        $v0, $v1, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x18DA40u;
            goto label_18da40;
        }
    }
    ctx->pc = 0x18DA38u;
    // 0x18da38: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x18da38u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x18da3c: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x18da3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_18da40:
    // 0x18da40: 0x3e00008  jr          $ra
    ctx->pc = 0x18DA40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18DA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DA40u;
        // 0x18da44: 0xe21021  addu        $v0, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18DA40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18DA48u;
    // 0x18da48: 0x0  nop
    ctx->pc = 0x18da48u;
    // NOP
    // 0x18da4c: 0x0  nop
    ctx->pc = 0x18da4cu;
    // NOP
}
