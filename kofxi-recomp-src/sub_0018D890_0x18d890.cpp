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

// Function: sub_0018D890
// Address: 0x18d890 - 0x18d960
void sub_0018D890_0x18d890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018D890_0x18d890");
#endif

    ctx->pc = 0x18d890u;

    // 0x18d890: 0x3086ffff  andi        $a2, $a0, 0xFFFF
    ctx->pc = 0x18d890u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x18d894: 0x30a38300  andi        $v1, $a1, 0x8300
    ctx->pc = 0x18d894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)33536);
    // 0x18d898: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x18d898u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x18d89c: 0x2484bcc0  addiu       $a0, $a0, -0x4340
    ctx->pc = 0x18d89cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950080));
    // 0x18d8a0: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x18d8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x18d8a4: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x18D8A4u;
    {
        const bool branch_taken_0x18d8a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D8A4u;
        // 0x18d8a8: 0x90840000  lbu         $a0, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d8a4) {
            ctx->pc = 0x18D8D8u;
            goto label_18d8d8;
        }
    }
    ctx->pc = 0x18D8ACu;
    // 0x18d8ac: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x18d8acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x18d8b0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18d8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x18d8b4: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x18d8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18d8b8: 0x2442bd78  addiu       $v0, $v0, -0x4288
    ctx->pc = 0x18d8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950264));
    // 0x18d8bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18d8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18d8c0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x18d8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x18d8c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18d8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18d8c8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18d8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18d8cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18d8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18d8d0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x18D8D0u;
    {
        const bool branch_taken_0x18d8d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D8D0u;
        // 0x18d8d4: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d8d0) {
            ctx->pc = 0x18D950u;
            goto label_18d950;
        }
    }
    ctx->pc = 0x18D8D8u;
label_18d8d8:
    // 0x18d8d8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x18d8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x18d8dc: 0x34630c00  ori         $v1, $v1, 0xC00
    ctx->pc = 0x18d8dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3072);
    // 0x18d8e0: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x18d8e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x18d8e4: 0x5060000c  beql        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x18D8E4u;
    {
        const bool branch_taken_0x18d8e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d8e4) {
            ctx->pc = 0x18D8E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D8E4u;
            // 0x18d8e8: 0x3c030180  lui         $v1, 0x180 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)384 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D918u;
            goto label_18d918;
        }
    }
    ctx->pc = 0x18D8ECu;
    // 0x18d8ec: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x18d8ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x18d8f0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18d8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x18d8f4: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x18d8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18d8f8: 0x2442bd80  addiu       $v0, $v0, -0x4280
    ctx->pc = 0x18d8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950272));
    // 0x18d8fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18d8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18d900: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x18d900u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x18d904: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18d904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18d908: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18d908u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18d90c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18d90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18d910: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x18D910u;
    {
        const bool branch_taken_0x18d910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D910u;
        // 0x18d914: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d910) {
            ctx->pc = 0x18D950u;
            goto label_18d950;
        }
    }
    ctx->pc = 0x18D918u;
label_18d918:
    // 0x18d918: 0x34633000  ori         $v1, $v1, 0x3000
    ctx->pc = 0x18d918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12288);
    // 0x18d91c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x18d91cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x18d920: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x18D920u;
    {
        const bool branch_taken_0x18d920 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d920) {
            ctx->pc = 0x18D950u;
            goto label_18d950;
        }
    }
    ctx->pc = 0x18D928u;
    // 0x18d928: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x18d928u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x18d92c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18d92cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x18d930: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x18d930u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18d934: 0x2442bd88  addiu       $v0, $v0, -0x4278
    ctx->pc = 0x18d934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950280));
    // 0x18d938: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18d938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18d93c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x18d93cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x18d940: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18d940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18d944: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18d944u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18d948: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18d948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18d94c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18d94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18d950:
    // 0x18d950: 0x3e00008  jr          $ra
    ctx->pc = 0x18D950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18D958u;
    // 0x18d958: 0x0  nop
    ctx->pc = 0x18d958u;
    // NOP
    // 0x18d95c: 0x0  nop
    ctx->pc = 0x18d95cu;
    // NOP
    if (ctx->pc == 0x18d95cu) { ctx->pc = 0x18d960u; }
}
