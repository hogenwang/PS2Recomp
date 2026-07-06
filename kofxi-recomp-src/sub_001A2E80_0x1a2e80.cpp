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

// Function: sub_001A2E80
// Address: 0x1a2e80 - 0x1a2f50
void sub_001A2E80_0x1a2e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A2E80_0x1a2e80");
#endif

    switch (ctx->pc) {
        case 0x1a2e98u: goto label_1a2e98;
        case 0x1a2eb0u: goto label_1a2eb0;
        default: break;
    }

    ctx->pc = 0x1a2e80u;

    // 0x1a2e80: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1a2e80u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2e84: 0x3c09009c  lui         $t1, 0x9C
    ctx->pc = 0x1a2e84u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)156 << 16));
    // 0x1a2e88: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1a2e88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1a2e8c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a2e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2e90: 0x2529e8c0  addiu       $t1, $t1, -0x1740
    ctx->pc = 0x1a2e90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294961344));
    // 0x1a2e94: 0x316600ff  andi        $a2, $t3, 0xFF
    ctx->pc = 0x1a2e94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
label_1a2e98:
    // 0x1a2e98: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1a2e98u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2e9c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1a2e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a2ea0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1a2ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1a2ea4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1a2ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1a2ea8: 0x1234021  addu        $t0, $t1, $v1
    ctx->pc = 0x1a2ea8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x1a2eac: 0x0  nop
    ctx->pc = 0x1a2eacu;
    // NOP
label_1a2eb0:
    // 0x1a2eb0: 0x314700ff  andi        $a3, $t2, 0xFF
    ctx->pc = 0x1a2eb0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x1a2eb4: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x1a2eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1a2eb8: 0x25430001  addiu       $v1, $t2, 0x1
    ctx->pc = 0x1a2eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1a2ebc: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1a2ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1a2ec0: 0x306a00ff  andi        $t2, $v1, 0xFF
    ctx->pc = 0x1a2ec0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a2ec4: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x1a2ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1a2ec8: 0x29430004  slti        $v1, $t2, 0x4
    ctx->pc = 0x1a2ec8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1a2ecc: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x1a2eccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1a2ed0: 0xa0cb0004  sb          $t3, 0x4($a2)
    ctx->pc = 0x1a2ed0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4), (uint8_t)GPR_U32(ctx, 11));
    // 0x1a2ed4: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1a2ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x1a2ed8: 0xa0c50005  sb          $a1, 0x5($a2)
    ctx->pc = 0x1a2ed8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 5), (uint8_t)GPR_U32(ctx, 5));
    // 0x1a2edc: 0xa0c0000b  sb          $zero, 0xB($a2)
    ctx->pc = 0x1a2edcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 11), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a2ee0: 0xa0c50006  sb          $a1, 0x6($a2)
    ctx->pc = 0x1a2ee0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 6), (uint8_t)GPR_U32(ctx, 5));
    // 0x1a2ee4: 0xa0c0000c  sb          $zero, 0xC($a2)
    ctx->pc = 0x1a2ee4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a2ee8: 0xa0c50007  sb          $a1, 0x7($a2)
    ctx->pc = 0x1a2ee8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 7), (uint8_t)GPR_U32(ctx, 5));
    // 0x1a2eec: 0xa0c0000d  sb          $zero, 0xD($a2)
    ctx->pc = 0x1a2eecu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 13), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a2ef0: 0xa0c50008  sb          $a1, 0x8($a2)
    ctx->pc = 0x1a2ef0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 8), (uint8_t)GPR_U32(ctx, 5));
    // 0x1a2ef4: 0xa0c0000e  sb          $zero, 0xE($a2)
    ctx->pc = 0x1a2ef4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 14), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a2ef8: 0xa0c50009  sb          $a1, 0x9($a2)
    ctx->pc = 0x1a2ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 9), (uint8_t)GPR_U32(ctx, 5));
    // 0x1a2efc: 0xa0c0000f  sb          $zero, 0xF($a2)
    ctx->pc = 0x1a2efcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 15), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a2f00: 0xa0c5000a  sb          $a1, 0xA($a2)
    ctx->pc = 0x1a2f00u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 10), (uint8_t)GPR_U32(ctx, 5));
    // 0x1a2f04: 0xa0c00010  sb          $zero, 0x10($a2)
    ctx->pc = 0x1a2f04u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a2f08: 0xa4c00012  sh          $zero, 0x12($a2)
    ctx->pc = 0x1a2f08u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 18), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a2f0c: 0xa4c00014  sh          $zero, 0x14($a2)
    ctx->pc = 0x1a2f0cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a2f10: 0xacc00018  sw          $zero, 0x18($a2)
    ctx->pc = 0x1a2f10u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 0));
    // 0x1a2f14: 0xa4c0001c  sh          $zero, 0x1C($a2)
    ctx->pc = 0x1a2f14u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 28), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a2f18: 0xacc00020  sw          $zero, 0x20($a2)
    ctx->pc = 0x1a2f18u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 0));
    // 0x1a2f1c: 0xa4c00024  sh          $zero, 0x24($a2)
    ctx->pc = 0x1a2f1cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 36), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a2f20: 0xa0c00005  sb          $zero, 0x5($a2)
    ctx->pc = 0x1a2f20u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a2f24: 0x1460ffe2  bnez        $v1, . + 4 + (-0x1E << 2)
    ctx->pc = 0x1A2F24u;
    {
        const bool branch_taken_0x1a2f24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A2F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2F24u;
        // 0x1a2f28: 0xa0c40006  sb          $a0, 0x6($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 6), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2f24) {
            ctx->pc = 0x1A2EB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a2eb0;
        }
    }
    ctx->pc = 0x1A2F2Cu;
    // 0x1a2f2c: 0x25630001  addiu       $v1, $t3, 0x1
    ctx->pc = 0x1a2f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x1a2f30: 0x306b00ff  andi        $t3, $v1, 0xFF
    ctx->pc = 0x1a2f30u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a2f34: 0x29630002  slti        $v1, $t3, 0x2
    ctx->pc = 0x1a2f34u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1a2f38: 0x5460ffd7  bnel        $v1, $zero, . + 4 + (-0x29 << 2)
    ctx->pc = 0x1A2F38u;
    {
        const bool branch_taken_0x1a2f38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2f38) {
            ctx->pc = 0x1A2F3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A2F38u;
            // 0x1a2f3c: 0x316600ff  andi        $a2, $t3, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A2E98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a2e98;
        }
    }
    ctx->pc = 0x1A2F40u;
    // 0x1a2f40: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2F40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2F48u;
    // 0x1a2f48: 0x0  nop
    ctx->pc = 0x1a2f48u;
    // NOP
    // 0x1a2f4c: 0x0  nop
    ctx->pc = 0x1a2f4cu;
    // NOP
}
