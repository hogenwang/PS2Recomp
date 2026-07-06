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

// Function: sub_001D5F78
// Address: 0x1d5f78 - 0x1d6208
void sub_001D5F78_0x1d5f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5F78_0x1d5f78");
#endif

    switch (ctx->pc) {
        case 0x1d5f90u: goto label_1d5f90;
        case 0x1d5fa8u: goto label_1d5fa8;
        case 0x1d5fc0u: goto label_1d5fc0;
        case 0x1d6038u: goto label_1d6038;
        case 0x1d6048u: goto label_1d6048;
        case 0x1d6070u: goto label_1d6070;
        default: break;
    }

    ctx->pc = 0x1d5f78u;

label_1d5f78:
    // 0x1d5f78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d5f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d5f7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d5f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d5f80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d5f80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5f84: 0x8049c48  j           func_127120
    ctx->pc = 0x1D5F84u;
    ctx->pc = 0x1D5F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5F84u;
    // 0x1d5f88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    sub_00127120_0x127120(rdram, ctx, runtime); return;
    ctx->pc = 0x1D5F8Cu;
    // 0x1d5f8c: 0x0  nop
    ctx->pc = 0x1d5f8cu;
    // NOP
label_1d5f90:
    // 0x1d5f90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d5f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d5f94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d5f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d5f98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d5f98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5f9c: 0x8049c48  j           func_127120
    ctx->pc = 0x1D5F9Cu;
    ctx->pc = 0x1D5FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5F9Cu;
    // 0x1d5fa0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    sub_00127120_0x127120(rdram, ctx, runtime); return;
    ctx->pc = 0x1D5FA4u;
    // 0x1d5fa4: 0x0  nop
    ctx->pc = 0x1d5fa4u;
    // NOP
label_1d5fa8:
    // 0x1d5fa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d5fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d5fac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d5facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d5fb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d5fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5fb4: 0x8049c48  j           func_127120
    ctx->pc = 0x1D5FB4u;
    ctx->pc = 0x1D5FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5FB4u;
    // 0x1d5fb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    sub_00127120_0x127120(rdram, ctx, runtime); return;
    ctx->pc = 0x1D5FBCu;
    // 0x1d5fbc: 0x0  nop
    ctx->pc = 0x1d5fbcu;
    // NOP
label_1d5fc0:
    // 0x1d5fc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d5fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d5fc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d5fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d5fc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d5fc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5fcc: 0x8049c48  j           func_127120
    ctx->pc = 0x1D5FCCu;
    ctx->pc = 0x1D5FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5FCCu;
    // 0x1d5fd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    sub_00127120_0x127120(rdram, ctx, runtime); return;
    ctx->pc = 0x1D5FD4u;
    // 0x1d5fd4: 0x0  nop
    ctx->pc = 0x1d5fd4u;
    // NOP
    // 0x1d5fd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d5fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d5fdc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d5fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d5fe0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d5fe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5fe4: 0x80757de  j           func_1D5F78
    ctx->pc = 0x1D5FE4u;
    ctx->pc = 0x1D5FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5FE4u;
    // 0x1d5fe8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5F78u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_1d5f78;
    ctx->pc = 0x1D5FECu;
    // 0x1d5fec: 0x0  nop
    ctx->pc = 0x1d5fecu;
    // NOP
    // 0x1d5ff0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d5ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d5ff4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d5ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d5ff8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d5ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5ffc: 0x80757e4  j           func_1D5F90
    ctx->pc = 0x1D5FFCu;
    ctx->pc = 0x1D6000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5FFCu;
    // 0x1d6000: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5F90u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_1d5f90;
    ctx->pc = 0x1D6004u;
    // 0x1d6004: 0x0  nop
    ctx->pc = 0x1d6004u;
    // NOP
    // 0x1d6008: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d6008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d600c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d600cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d6010: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d6010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6014: 0x80757ea  j           func_1D5FA8
    ctx->pc = 0x1D6014u;
    ctx->pc = 0x1D6018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6014u;
    // 0x1d6018: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5FA8u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_1d5fa8;
    ctx->pc = 0x1D601Cu;
    // 0x1d601c: 0x0  nop
    ctx->pc = 0x1d601cu;
    // NOP
    // 0x1d6020: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d6020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d6024: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d6024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d6028: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d6028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d602c: 0x80757f0  j           func_1D5FC0
    ctx->pc = 0x1D602Cu;
    ctx->pc = 0x1D6030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D602Cu;
    // 0x1d6030: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5FC0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_1d5fc0;
    ctx->pc = 0x1D6034u;
    // 0x1d6034: 0x0  nop
    ctx->pc = 0x1d6034u;
    // NOP
label_1d6038:
    // 0x1d6038: 0x30c3001f  andi        $v1, $a2, 0x1F
    ctx->pc = 0x1d6038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)31);
    // 0x1d603c: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1D603Cu;
    {
        const bool branch_taken_0x1d603c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d603c) {
            ctx->pc = 0x1D6040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D603Cu;
            // 0x1d6040: 0x63142  srl         $a2, $a2, 5 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D6068u;
            goto label_1d6068;
        }
    }
    ctx->pc = 0x1D6044u;
    // 0x1d6044: 0x0  nop
    ctx->pc = 0x1d6044u;
    // NOP
label_1d6048:
    // 0x1d6048: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x1d6048u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d604c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d604cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d6050: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1d6050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1d6054: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x1d6054u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d6058: 0x0  nop
    ctx->pc = 0x1d6058u;
    // NOP
    // 0x1d605c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D605Cu;
    {
        const bool branch_taken_0x1d605c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D6060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D605Cu;
        // 0x1d6060: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d605c) {
            ctx->pc = 0x1D6048u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d6048;
        }
    }
    ctx->pc = 0x1D6064u;
    // 0x1d6064: 0x63142  srl         $a2, $a2, 5
    ctx->pc = 0x1d6064u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 5));
label_1d6068:
    // 0x1d6068: 0x10c00065  beqz        $a2, . + 4 + (0x65 << 2)
    ctx->pc = 0x1D6068u;
    {
        const bool branch_taken_0x1d6068 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6068) {
            ctx->pc = 0x1D6200u;
            goto label_1d6200;
        }
    }
    ctx->pc = 0x1D6070u;
label_1d6070:
    // 0x1d6070: 0x80a80000  lb          $t0, 0x0($a1)
    ctx->pc = 0x1d6070u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d6074: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d6074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d6078: 0x80a70000  lb          $a3, 0x0($a1)
    ctx->pc = 0x1d6078u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d607c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d607cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d6080: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x1d6080u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d6084: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d6084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d6088: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x1d6088u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d608c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d608cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d6090: 0xa0880000  sb          $t0, 0x0($a0)
    ctx->pc = 0x1d6090u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x1d6094: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1d6094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1d6098: 0xa0870001  sb          $a3, 0x1($a0)
    ctx->pc = 0x1d6098u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 7));
    // 0x1d609c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1d609cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d60a0: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x1d60a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d60a4: 0x80a80000  lb          $t0, 0x0($a1)
    ctx->pc = 0x1d60a4u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d60a8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d60a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d60ac: 0x80a70000  lb          $a3, 0x0($a1)
    ctx->pc = 0x1d60acu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d60b0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d60b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d60b4: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x1d60b4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d60b8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d60b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d60bc: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x1d60bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d60c0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d60c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d60c4: 0xa0880004  sb          $t0, 0x4($a0)
    ctx->pc = 0x1d60c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 8));
    // 0x1d60c8: 0xa0870005  sb          $a3, 0x5($a0)
    ctx->pc = 0x1d60c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 7));
    // 0x1d60cc: 0xa0830006  sb          $v1, 0x6($a0)
    ctx->pc = 0x1d60ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d60d0: 0xa0820007  sb          $v0, 0x7($a0)
    ctx->pc = 0x1d60d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d60d4: 0x80a80000  lb          $t0, 0x0($a1)
    ctx->pc = 0x1d60d4u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d60d8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d60d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d60dc: 0x80a70000  lb          $a3, 0x0($a1)
    ctx->pc = 0x1d60dcu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d60e0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d60e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d60e4: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x1d60e4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d60e8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d60e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d60ec: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x1d60ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d60f0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d60f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d60f4: 0xa0880008  sb          $t0, 0x8($a0)
    ctx->pc = 0x1d60f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 8));
    // 0x1d60f8: 0xa0870009  sb          $a3, 0x9($a0)
    ctx->pc = 0x1d60f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 9), (uint8_t)GPR_U32(ctx, 7));
    // 0x1d60fc: 0xa083000a  sb          $v1, 0xA($a0)
    ctx->pc = 0x1d60fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d6100: 0xa082000b  sb          $v0, 0xB($a0)
    ctx->pc = 0x1d6100u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d6104: 0x80a80000  lb          $t0, 0x0($a1)
    ctx->pc = 0x1d6104u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d6108: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d6108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d610c: 0x80a70000  lb          $a3, 0x0($a1)
    ctx->pc = 0x1d610cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d6110: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d6110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d6114: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x1d6114u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d6118: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d6118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d611c: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x1d611cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d6120: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d6120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d6124: 0xa088000c  sb          $t0, 0xC($a0)
    ctx->pc = 0x1d6124u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 8));
    // 0x1d6128: 0xa087000d  sb          $a3, 0xD($a0)
    ctx->pc = 0x1d6128u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 13), (uint8_t)GPR_U32(ctx, 7));
    // 0x1d612c: 0xa083000e  sb          $v1, 0xE($a0)
    ctx->pc = 0x1d612cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 14), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d6130: 0xa082000f  sb          $v0, 0xF($a0)
    ctx->pc = 0x1d6130u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 15), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d6134: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1d6134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1d6138: 0x80a80000  lb          $t0, 0x0($a1)
    ctx->pc = 0x1d6138u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d613c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d613cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d6140: 0x80a70000  lb          $a3, 0x0($a1)
    ctx->pc = 0x1d6140u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d6144: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d6144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d6148: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x1d6148u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d614c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d614cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d6150: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x1d6150u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d6154: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d6154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d6158: 0xa0880000  sb          $t0, 0x0($a0)
    ctx->pc = 0x1d6158u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x1d615c: 0xa0870001  sb          $a3, 0x1($a0)
    ctx->pc = 0x1d615cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 7));
    // 0x1d6160: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1d6160u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d6164: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x1d6164u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d6168: 0x80a80000  lb          $t0, 0x0($a1)
    ctx->pc = 0x1d6168u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d616c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d616cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d6170: 0x80a70000  lb          $a3, 0x0($a1)
    ctx->pc = 0x1d6170u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d6174: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d6174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d6178: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x1d6178u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d617c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d617cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d6180: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x1d6180u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d6184: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d6184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d6188: 0xa0880004  sb          $t0, 0x4($a0)
    ctx->pc = 0x1d6188u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 8));
    // 0x1d618c: 0xa0870005  sb          $a3, 0x5($a0)
    ctx->pc = 0x1d618cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 7));
    // 0x1d6190: 0xa0830006  sb          $v1, 0x6($a0)
    ctx->pc = 0x1d6190u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d6194: 0xa0820007  sb          $v0, 0x7($a0)
    ctx->pc = 0x1d6194u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d6198: 0x80a80000  lb          $t0, 0x0($a1)
    ctx->pc = 0x1d6198u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d619c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d619cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d61a0: 0x80a70000  lb          $a3, 0x0($a1)
    ctx->pc = 0x1d61a0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d61a4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d61a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d61a8: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x1d61a8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d61ac: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d61acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d61b0: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x1d61b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d61b4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d61b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d61b8: 0xa0880008  sb          $t0, 0x8($a0)
    ctx->pc = 0x1d61b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 8));
    // 0x1d61bc: 0xa0870009  sb          $a3, 0x9($a0)
    ctx->pc = 0x1d61bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 9), (uint8_t)GPR_U32(ctx, 7));
    // 0x1d61c0: 0xa083000a  sb          $v1, 0xA($a0)
    ctx->pc = 0x1d61c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d61c4: 0xa082000b  sb          $v0, 0xB($a0)
    ctx->pc = 0x1d61c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d61c8: 0x80a80000  lb          $t0, 0x0($a1)
    ctx->pc = 0x1d61c8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d61cc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d61ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d61d0: 0x80a70000  lb          $a3, 0x0($a1)
    ctx->pc = 0x1d61d0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d61d4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d61d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d61d8: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x1d61d8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d61dc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d61dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d61e0: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x1d61e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d61e4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d61e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d61e8: 0xa088000c  sb          $t0, 0xC($a0)
    ctx->pc = 0x1d61e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 8));
    // 0x1d61ec: 0xa087000d  sb          $a3, 0xD($a0)
    ctx->pc = 0x1d61ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 13), (uint8_t)GPR_U32(ctx, 7));
    // 0x1d61f0: 0xa083000e  sb          $v1, 0xE($a0)
    ctx->pc = 0x1d61f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 14), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d61f4: 0xa082000f  sb          $v0, 0xF($a0)
    ctx->pc = 0x1d61f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 15), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d61f8: 0x14c0ff9d  bnez        $a2, . + 4 + (-0x63 << 2)
    ctx->pc = 0x1D61F8u;
    {
        const bool branch_taken_0x1d61f8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D61FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D61F8u;
        // 0x1d61fc: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d61f8) {
            ctx->pc = 0x1D6070u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d6070;
        }
    }
    ctx->pc = 0x1D6200u;
label_1d6200:
    // 0x1d6200: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6208u;
}
