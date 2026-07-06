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

// Function: sub_001271D0
// Address: 0x1271d0 - 0x1272d8
void sub_001271D0_0x1271d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001271D0_0x1271d0");
#endif

    switch (ctx->pc) {
        case 0x127204u: goto label_127204;
        case 0x127248u: goto label_127248;
        case 0x127280u: goto label_127280;
        case 0x1272b0u: goto label_1272b0;
        default: break;
    }

    ctx->pc = 0x1271d0u;

    // 0x1271d0: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1271d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1271d4: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x1271d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1271d8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1271D8u;
    {
        const bool branch_taken_0x1271d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1271DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1271D8u;
        // 0x1271dc: 0x100182d  daddu       $v1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1271d8) {
            ctx->pc = 0x127228u;
            goto label_127228;
        }
    }
    ctx->pc = 0x1271E0u;
    // 0x1271e0: 0xa63821  addu        $a3, $a1, $a2
    ctx->pc = 0x1271e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1271e4: 0x107102b  sltu        $v0, $t0, $a3
    ctx->pc = 0x1271e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1271e8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1271E8u;
    {
        const bool branch_taken_0x1271e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1271ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1271E8u;
        // 0x1271ec: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1271e8) {
            ctx->pc = 0x127228u;
            goto label_127228;
        }
    }
    ctx->pc = 0x1271F0u;
    // 0x1271f0: 0x1061821  addu        $v1, $t0, $a2
    ctx->pc = 0x1271f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1271f4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1271f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1271f8: 0x10c20034  beq         $a2, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x1271F8u;
    {
        const bool branch_taken_0x1271f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1271FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1271F8u;
        // 0x1271fc: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1271f8) {
            ctx->pc = 0x1272CCu;
            goto label_1272cc;
        }
    }
    ctx->pc = 0x127200u;
    // 0x127200: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x127200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_127204:
    // 0x127204: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x127204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x127208: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x127208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x12720c: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x12720cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x127210: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x127210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x127214: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x127214u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x127218: 0x14c4fffa  bne         $a2, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x127218u;
    {
        const bool branch_taken_0x127218 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        if (branch_taken_0x127218) {
            ctx->pc = 0x127204u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_127204;
        }
    }
    ctx->pc = 0x127220u;
    // 0x127220: 0x3e00008  jr          $ra
    ctx->pc = 0x127220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127220u;
        // 0x127224: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x127228u;
label_127228:
    // 0x127228: 0x2cc20020  sltiu       $v0, $a2, 0x20
    ctx->pc = 0x127228u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x12722c: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x12722Cu;
    {
        const bool branch_taken_0x12722c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12722c) {
            ctx->pc = 0x127230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12722Cu;
            // 0x127230: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1272A4u;
            goto label_1272a4;
        }
    }
    ctx->pc = 0x127234u;
    // 0x127234: 0xa31025  or          $v0, $a1, $v1
    ctx->pc = 0x127234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x127238: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x127238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x12723c: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x12723Cu;
    {
        const bool branch_taken_0x12723c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12723c) {
            ctx->pc = 0x127240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12723Cu;
            // 0x127240: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1272A4u;
            goto label_1272a4;
        }
    }
    ctx->pc = 0x127244u;
    // 0x127244: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x127244u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_127248:
    // 0x127248: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x127248u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12724c: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x12724cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x127250: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x127250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x127254: 0x2cc40020  sltiu       $a0, $a2, 0x20
    ctx->pc = 0x127254u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x127258: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x127258u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x12725c: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x12725cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x127260: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x127260u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x127264: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x127264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x127268: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x127268u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x12726c: 0x1080fff6  beqz        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x12726Cu;
    {
        const bool branch_taken_0x12726c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x127270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12726Cu;
        // 0x127270: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12726c) {
            ctx->pc = 0x127248u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_127248;
        }
    }
    ctx->pc = 0x127274u;
    // 0x127274: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x127274u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x127278: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x127278u;
    {
        const bool branch_taken_0x127278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12727Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127278u;
        // 0x12727c: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127278) {
            ctx->pc = 0x1272A0u;
            goto label_1272a0;
        }
    }
    ctx->pc = 0x127280u;
label_127280:
    // 0x127280: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x127280u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x127284: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x127284u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x127288: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x127288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x12728c: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x12728cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x127290: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x127290u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x127294: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x127294u;
    {
        const bool branch_taken_0x127294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x127298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127294u;
        // 0x127298: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127294) {
            ctx->pc = 0x127280u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_127280;
        }
    }
    ctx->pc = 0x12729Cu;
    // 0x12729c: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x12729cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1272a0:
    // 0x1272a0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1272a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_1272a4:
    // 0x1272a4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1272a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1272a8: 0x10c20008  beq         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1272A8u;
    {
        const bool branch_taken_0x1272a8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1272ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1272A8u;
        // 0x1272ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1272a8) {
            ctx->pc = 0x1272CCu;
            goto label_1272cc;
        }
    }
    ctx->pc = 0x1272B0u;
label_1272b0:
    // 0x1272b0: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x1272b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1272b4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1272b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1272b8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1272b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1272bc: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1272bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1272c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1272c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1272c4: 0x14c4fffa  bne         $a2, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1272C4u;
    {
        const bool branch_taken_0x1272c4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        if (branch_taken_0x1272c4) {
            ctx->pc = 0x1272B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1272b0;
        }
    }
    ctx->pc = 0x1272CCu;
label_1272cc:
    // 0x1272cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1272CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1272D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1272CCu;
        // 0x1272d0: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1272CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1272D4u;
    // 0x1272d4: 0x0  nop
    ctx->pc = 0x1272d4u;
    // NOP
    if (ctx->pc == 0x1272d4u) { ctx->pc = 0x1272d8u; }
}
