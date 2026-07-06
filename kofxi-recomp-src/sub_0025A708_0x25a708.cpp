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

// Function: sub_0025A708
// Address: 0x25a708 - 0x25a7a0
void sub_0025A708_0x25a708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A708_0x25a708");
#endif

    switch (ctx->pc) {
        case 0x25a71cu: goto label_25a71c;
        default: break;
    }

    ctx->pc = 0x25a708u;

    // 0x25a708: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25a708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25a70c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25a70cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25a710: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25a710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25a714: 0xc08b614  jal         func_22D850
    ctx->pc = 0x25A714u;
    SET_GPR_U32(ctx, 31, 0x25A71Cu);
    ctx->pc = 0x25A718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A714u;
    // 0x25a718: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D850u, 0x25A714u, 0x25A71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A71Cu;
label_25a71c:
    // 0x25a71c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x25A71Cu;
    {
        const bool branch_taken_0x25a71c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A71Cu;
        // 0x25a720: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a71c) {
            ctx->pc = 0x25A740u;
            goto label_25a740;
        }
    }
    ctx->pc = 0x25A724u;
    // 0x25a724: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x25a724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x25a728: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x25a728u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x25a72c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x25a72cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x25a730: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x25a730u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x25a734: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x25a734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x25a738: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x25A738u;
    {
        const bool branch_taken_0x25a738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A738u;
        // 0x25a73c: 0x703021  addu        $a2, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a738) {
            ctx->pc = 0x25A764u;
            goto label_25a764;
        }
    }
    ctx->pc = 0x25A740u;
label_25a740:
    // 0x25a740: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x25a740u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x25a744: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x25a744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x25a748: 0x8ca412d4  lw          $a0, 0x12D4($a1)
    ctx->pc = 0x25a748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4820)));
    // 0x25a74c: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x25a74cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x25a750: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x25a750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x25a754: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x25a754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x25a758: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x25a758u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x25a75c: 0xaca212d4  sw          $v0, 0x12D4($a1)
    ctx->pc = 0x25a75cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4820), GPR_U32(ctx, 2));
    // 0x25a760: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x25a760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_25a764:
    // 0x25a764: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x25a764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x25a768: 0x8c4312d0  lw          $v1, 0x12D0($v0)
    ctx->pc = 0x25a768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4816)));
    // 0x25a76c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x25A76Cu;
    {
        const bool branch_taken_0x25a76c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A76Cu;
        // 0x25a770: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a76c) {
            ctx->pc = 0x25A78Cu;
            goto label_25a78c;
        }
    }
    ctx->pc = 0x25A774u;
    // 0x25a774: 0x4c10006  bgez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x25A774u;
    {
        const bool branch_taken_0x25a774 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x25A778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A774u;
        // 0x25a778: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a774) {
            ctx->pc = 0x25A790u;
            goto label_25a790;
        }
    }
    ctx->pc = 0x25A77Cu;
    // 0x25a77c: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x25a77cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x25a780: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x25a780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x25a784: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x25a784u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x25a788: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25a788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_25a78c:
    // 0x25a78c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x25a78cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_25a790:
    // 0x25a790: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25a790u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a794: 0x3e00008  jr          $ra
    ctx->pc = 0x25A794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A794u;
        // 0x25a798: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A79Cu;
    // 0x25a79c: 0x0  nop
    ctx->pc = 0x25a79cu;
    // NOP
}
