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

// Function: sub_00197FF0
// Address: 0x197ff0 - 0x198080
void sub_00197FF0_0x197ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197FF0_0x197ff0");
#endif

    switch (ctx->pc) {
        case 0x198000u: goto label_198000;
        case 0x19803cu: goto label_19803c;
        default: break;
    }

    ctx->pc = 0x197ff0u;

    // 0x197ff0: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x197ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x197ff4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x197ff4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197ff8: 0x24a5d430  addiu       $a1, $a1, -0x2BD0
    ctx->pc = 0x197ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956080));
    // 0x197ffc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x197ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_198000:
    // 0x198000: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x198000u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x198004: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x198004u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x198008: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x198008u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x19800c: 0x28c30020  slti        $v1, $a2, 0x20
    ctx->pc = 0x19800cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x198010: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x198010u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x198014: 0xaca4000c  sw          $a0, 0xC($a1)
    ctx->pc = 0x198014u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
    // 0x198018: 0xaca40010  sw          $a0, 0x10($a1)
    ctx->pc = 0x198018u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 4));
    // 0x19801c: 0xaca40014  sw          $a0, 0x14($a1)
    ctx->pc = 0x19801cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 4));
    // 0x198020: 0xaca40018  sw          $a0, 0x18($a1)
    ctx->pc = 0x198020u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 4));
    // 0x198024: 0xaca4001c  sw          $a0, 0x1C($a1)
    ctx->pc = 0x198024u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 4));
    // 0x198028: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x198028u;
    {
        const bool branch_taken_0x198028 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19802Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198028u;
        // 0x19802c: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198028) {
            ctx->pc = 0x198000u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_198000;
        }
    }
    ctx->pc = 0x198030u;
    // 0x198030: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x198030u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x198034: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x198034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198038: 0x24a5d3b0  addiu       $a1, $a1, -0x2C50
    ctx->pc = 0x198038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955952));
label_19803c:
    // 0x19803c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x19803cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x198040: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x198040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x198044: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x198044u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x198048: 0x28830020  slti        $v1, $a0, 0x20
    ctx->pc = 0x198048u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x19804c: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x19804cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x198050: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x198050u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x198054: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x198054u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
    // 0x198058: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x198058u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
    // 0x19805c: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x19805cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
    // 0x198060: 0xaca0001c  sw          $zero, 0x1C($a1)
    ctx->pc = 0x198060u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
    // 0x198064: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x198064u;
    {
        const bool branch_taken_0x198064 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x198068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198064u;
        // 0x198068: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198064) {
            ctx->pc = 0x19803Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19803c;
        }
    }
    ctx->pc = 0x19806Cu;
    // 0x19806c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19806cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x198070: 0x3e00008  jr          $ra
    ctx->pc = 0x198070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198070u;
        // 0x198074: 0xac60d3a0  sw          $zero, -0x2C60($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294955936), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x198078u;
    // 0x198078: 0x0  nop
    ctx->pc = 0x198078u;
    // NOP
    // 0x19807c: 0x0  nop
    ctx->pc = 0x19807cu;
    // NOP
    if (ctx->pc == 0x19807cu) { ctx->pc = 0x198080u; }
}
