#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C8AA8
// Address: 0x1c8aa8 - 0x1c8b20
void sub_001C8AA8_0x1c8aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C8AA8_0x1c8aa8");
#endif

    switch (ctx->pc) {
        case 0x1c8ad8u: goto label_1c8ad8;
        default: break;
    }

    ctx->pc = 0x1c8aa8u;

    // 0x1c8aa8: 0x3c080038  lui         $t0, 0x38
    ctx->pc = 0x1c8aa8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)56 << 16));
    // 0x1c8aac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c8aacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8ab0: 0x8d055320  lw          $a1, 0x5320($t0)
    ctx->pc = 0x1c8ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 21280)));
    // 0x1c8ab4: 0x18a00011  blez        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C8AB4u;
    {
        const bool branch_taken_0x1c8ab4 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1C8AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8AB4u;
            // 0x1c8ab8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8ab4) {
            ctx->pc = 0x1C8AFCu;
            goto label_1c8afc;
        }
    }
    ctx->pc = 0x1C8ABCu;
    // 0x1c8abc: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c8abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c8ac0: 0x24445380  addiu       $a0, $v0, 0x5380
    ctx->pc = 0x1c8ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 21376));
    // 0x1c8ac4: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x1c8ac4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c8ac8: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1C8AC8u;
    {
        const bool branch_taken_0x1c8ac8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8AC8u;
            // 0x1c8acc: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8ac8) {
            ctx->pc = 0x1C8AFCu;
            goto label_1c8afc;
        }
    }
    ctx->pc = 0x1C8AD0u;
    // 0x1c8ad0: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1c8ad0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8ad4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1c8ad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c8ad8:
    // 0x1c8ad8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1c8ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1c8adc: 0x24a50018  addiu       $a1, $a1, 0x18
    ctx->pc = 0x1c8adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x1c8ae0: 0xc7102a  slt         $v0, $a2, $a3
    ctx->pc = 0x1c8ae0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1c8ae4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C8AE4u;
    {
        const bool branch_taken_0x1c8ae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8AE4u;
            // 0x1c8ae8: 0x24630018  addiu       $v1, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8ae4) {
            ctx->pc = 0x1C8AFCu;
            goto label_1c8afc;
        }
    }
    ctx->pc = 0x1C8AECu;
    // 0x1c8aec: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x1c8aecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c8af0: 0x0  nop
    ctx->pc = 0x1c8af0u;
    // NOP
    // 0x1c8af4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1C8AF4u;
    {
        const bool branch_taken_0x1c8af4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8AF4u;
            // 0x1c8af8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8af4) {
            ctx->pc = 0x1C8AD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c8ad8;
        }
    }
    ctx->pc = 0x1C8AFCu;
label_1c8afc:
    // 0x1c8afc: 0x8d035320  lw          $v1, 0x5320($t0)
    ctx->pc = 0x1c8afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 21280)));
    // 0x1c8b00: 0x10c30004  beq         $a2, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C8B00u;
    {
        const bool branch_taken_0x1c8b00 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C8B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8B00u;
            // 0x1c8b04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8b00) {
            ctx->pc = 0x1C8B14u;
            goto label_1c8b14;
        }
    }
    ctx->pc = 0x1C8B08u;
    // 0x1c8b08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c8b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8b0c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1c8b0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8b10: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1c8b10u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_1c8b14:
    // 0x1c8b14: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8B14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C8B1Cu;
    // 0x1c8b1c: 0x0  nop
    ctx->pc = 0x1c8b1cu;
    // NOP
    ctx->pc = 0x1c8b20u;
}
