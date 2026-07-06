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

// Function: sub_002E2DD0
// Address: 0x2e2dd0 - 0x2e2ee0
void sub_002E2DD0_0x2e2dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E2DD0_0x2e2dd0");
#endif

    switch (ctx->pc) {
        case 0x2e2e10u: goto label_2e2e10;
        case 0x2e2e60u: goto label_2e2e60;
        case 0x2e2e70u: goto label_2e2e70;
        case 0x2e2e8cu: goto label_2e2e8c;
        case 0x2e2ec4u: goto label_2e2ec4;
        default: break;
    }

    ctx->pc = 0x2e2dd0u;

    // 0x2e2dd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e2dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e2dd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e2dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e2dd8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e2dd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2ddc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e2ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2e2de0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e2de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e2de4: 0x3c03002e  lui         $v1, 0x2E
    ctx->pc = 0x2e2de4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)46 << 16));
    // 0x2e2de8: 0x24632e30  addiu       $v1, $v1, 0x2E30
    ctx->pc = 0x2e2de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11824));
    // 0x2e2dec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2e2decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e2df0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E2DF0u;
    {
        const bool branch_taken_0x2e2df0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e2df0) {
            ctx->pc = 0x2E2E10u;
            goto label_2e2e10;
        }
    }
    ctx->pc = 0x2E2DF8u;
    // 0x2e2df8: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2e2df8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2e2dfc: 0x24842e44  addiu       $a0, $a0, 0x2E44
    ctx->pc = 0x2e2dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11844));
    // 0x2e2e00: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x2e2e00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2e2e04: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2e2e04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2e2e08: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2E2E08u;
    SET_GPR_U32(ctx, 31, 0x2E2E10u);
    ctx->pc = 0x2E2E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2E08u;
    // 0x2e2e0c: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FC0u, 0x2E2E08u, 0x2E2E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2E10u;
label_2e2e10:
    // 0x2e2e10: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2E2E10u;
    {
        const bool branch_taken_0x2e2e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2e10) {
            ctx->pc = 0x2E2E44u;
            goto label_2e2e44;
        }
    }
    ctx->pc = 0x2E2E18u;
    // 0x2e2e18: 0x391b020  add         $s6, $gp, $s1
    ctx->pc = 0x2e2e18u;
    {     int32_t rs_val = GPR_S32(ctx, 28);     int32_t rt_val = GPR_S32(ctx, 17);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x2e2e1c: 0xa14f28d9  sb          $t7, 0x28D9($t2)
    ctx->pc = 0x2e2e1cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 10457), (uint8_t)GPR_U32(ctx, 15));
    // 0x2e2e20: 0x8fefef5d  lw          $t7, -0x10A3($ra)
    ctx->pc = 0x2e2e20u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 31), 4294963037)));
    // 0x2e2e24: 0x2634db78  addiu       $s4, $s1, -0x2488
    ctx->pc = 0x2e2e24u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 4294957944));
    // 0x2e2e28: 0x85dbe23b  lh          $k1, -0x1DC5($t6)
    ctx->pc = 0x2e2e28u;
    SET_GPR_S32(ctx, 27, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 4294959675)));
    // 0x2e2e2c: 0x85c4365b  lh          $a0, 0x365B($t6)
    ctx->pc = 0x2e2e2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 13915)));
    // 0x2e2e30: 0x0  nop
    ctx->pc = 0x2e2e30u;
    // NOP
    // 0x2e2e34: 0x58f3885d  .word       0x58F3885D                   # blezl       $a3, . + 4 + (-0x77A3 << 2) # 00130000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E2E34u;
    {
        const bool branch_taken_0x2e2e34 = (GPR_S32(ctx, 7) <= 0);
        if (branch_taken_0x2e2e34) {
            ctx->pc = 0x2E2E38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2E34u;
            // 0x2e2e38: 0xca15ff36  lwc2        $21, -0xCA($s0) (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x32 at 0x2E2E38 raw=0xCA15FF36");
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4FACu;
            return;
        }
    }
    ctx->pc = 0x2E2E3Cu;
    // 0x2e2e3c: 0x58f3886d  .word       0x58F3886D                   # blezl       $a3, . + 4 + (-0x7793 << 2) # 00130000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E2E3Cu;
    {
        const bool branch_taken_0x2e2e3c = (GPR_S32(ctx, 7) <= 0);
        if (branch_taken_0x2e2e3c) {
            ctx->pc = 0x2C4FF4u;
            return;
        }
    }
    ctx->pc = 0x2E2E44u;
label_2e2e44:
    // 0x2e2e44: 0x14582c9c  bne         $v0, $t8, . + 4 + (0x2C9C << 2)
    ctx->pc = 0x2E2E44u;
    {
        const bool branch_taken_0x2e2e44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 24));
        ctx->pc = 0x2E2E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2E44u;
        // 0x2e2e48: 0x3c05003c  lui         $a1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2e44) {
            ctx->pc = 0x2EE0B8u;
            return;
        }
    }
    ctx->pc = 0x2E2E4Cu;
    // 0x2e2e4c: 0xc449fe28  lwc1        $f9, -0x1D8($v0)
    ctx->pc = 0x2e2e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2e2e50: 0x161a8cac  bne         $s0, $k0, . + 4 + (-0x7354 << 2)
    ctx->pc = 0x2E2E50u;
    {
        const bool branch_taken_0x2e2e50 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 26));
        ctx->pc = 0x2E2E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2E50u;
        // 0x2e2e54: 0x24a5e200  addiu       $a1, $a1, -0x1E00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959616));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2e50) {
            ctx->pc = 0x2C6104u;
            return;
        }
    }
    ctx->pc = 0x2E2E58u;
    // 0x2e2e58: 0xc0b8a58  jal         func_2E2960
    ctx->pc = 0x2E2E58u;
    SET_GPR_U32(ctx, 31, 0x2E2E60u);
    ctx->pc = 0x2E2E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2E58u;
    // 0x2e2e5c: 0x84420ca8  lh          $v0, 0xCA8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 3240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E2960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2960u, 0x2E2E58u, 0x2E2E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2E60u;
label_2e2e60:
    // 0x2e2e60: 0x455a0c38  .word       0x455A0C38                   # INVALID     $t2, $k0, 0xC38 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2e2e60u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x38 at 0x2E2E60 raw=0x455A0C38");
    // 0x2e2e64: 0x1c5a8c9c  .word       0x1C5A8C9C                   # bgtz        $v0, . + 4 + (-0x7364 << 2) # 001A0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E2E64u;
    {
        const bool branch_taken_0x2e2e64 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2E2E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2E64u;
        // 0x2e2e68: 0xc0b8aa6  jal         func_2E2A98 (Delay Slot)
        // JAL 0x2E2A98 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2e64) {
            ctx->pc = 0x2C60D8u;
            return;
        }
    }
    ctx->pc = 0x2E2E6Cu;
    // 0x2e2e6c: 0x145a0c28  bne         $v0, $k0, . + 4 + (0xC28 << 2)
label_2e2e70:
    if (ctx->pc == 0x2E2E70u) {
        ctx->pc = 0x2E2E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2E6Cu;
        // 0x2e2e70: 0x15582c9c  bne         $t2, $t8, . + 4 + (0x2C9C << 2) (Delay Slot)
        // Likely branch instruction at 0x2E2E70 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2E74u;
        goto label_fallthrough_0x2e2e6c;
    }
    ctx->pc = 0x2E2E6Cu;
    {
        const bool branch_taken_0x2e2e6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 26));
        ctx->pc = 0x2E2E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2E6Cu;
        // 0x2e2e70: 0x15582c9c  bne         $t2, $t8, . + 4 + (0x2C9C << 2) (Delay Slot)
        // Likely branch instruction at 0x2E2E70 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2e6c) {
            ctx->pc = 0x2E5F10u;
            return;
        }
    }
label_fallthrough_0x2e2e6c:
    ctx->pc = 0x2E2E74u;
    // 0x2e2e74: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2E2E74u;
    {
        const bool branch_taken_0x2e2e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2e74) {
            ctx->pc = 0x2E2EA4u;
            goto label_2e2ea4;
        }
    }
    ctx->pc = 0x2E2E7Cu;
    // 0x2e2e7c: 0xffcea3aa  sd          $t6, -0x5C56($fp)
    ctx->pc = 0x2e2e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 4294943658), GPR_U64(ctx, 14));
    // 0x2e2e80: 0x26676b50  addiu       $a3, $s3, 0x6B50
    ctx->pc = 0x2e2e80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 27472));
    // 0x2e2e84: 0xc46ae5b  jal         func_11AB96C
    ctx->pc = 0x2E2E84u;
    SET_GPR_U32(ctx, 31, 0x2E2E8Cu);
    ctx->pc = 0x2E2E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2E84u;
    // 0x2e2e88: 0xa29dfd79  sb          $sp, -0x287($s4) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 20), 4294966649), (uint8_t)GPR_U32(ctx, 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AB96Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AB96Cu, 0x2E2E84u, 0x2E2E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2E8Cu;
label_2e2e8c:
    // 0x2e2e8c: 0x1b07020  add         $t6, $t5, $s0
    ctx->pc = 0x2e2e8cu;
    {     int32_t rs_val = GPR_S32(ctx, 13);     int32_t rt_val = GPR_S32(ctx, 16);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
    // 0x2e2e90: 0x8deb8795  lw          $t3, -0x786B($t7)
    ctx->pc = 0x2e2e90u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294936469)));
    // 0x2e2e94: 0x58fd5883  .word       0x58FD5883                   # blezl       $a3, . + 4 + (0x5883 << 2) # 001D0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E2E94u;
    {
        const bool branch_taken_0x2e2e94 = (GPR_S32(ctx, 7) <= 0);
        if (branch_taken_0x2e2e94) {
            ctx->pc = 0x2E2E98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2E94u;
            // 0x2e2e98: 0xca15ff37  lwc2        $21, -0xC9($s0) (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x32 at 0x2E2E98 raw=0xCA15FF37");
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F90A4u;
            return;
        }
    }
    ctx->pc = 0x2E2E9Cu;
    // 0x2e2e9c: 0x58fd58b3  .word       0x58FD58B3                   # blezl       $a3, . + 4 + (0x58B3 << 2) # 001D0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E2E9Cu;
    {
        const bool branch_taken_0x2e2e9c = (GPR_S32(ctx, 7) <= 0);
        if (branch_taken_0x2e2e9c) {
            ctx->pc = 0x2F916Cu;
            return;
        }
    }
    ctx->pc = 0x2E2EA4u;
label_2e2ea4:
    // 0x2e2ea4: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x2e2ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x2e2ea8: 0x24422e94  addiu       $v0, $v0, 0x2E94
    ctx->pc = 0x2e2ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11924));
    // 0x2e2eac: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2e2eacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2e2eb0: 0x24842e74  addiu       $a0, $a0, 0x2E74
    ctx->pc = 0x2e2eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11892));
    // 0x2e2eb4: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2e2eb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e2eb8: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2e2eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2e2ebc: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2E2EBCu;
    SET_GPR_U32(ctx, 31, 0x2E2EC4u);
    ctx->pc = 0x2E2EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2EBCu;
    // 0x2e2ec0: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FC0u, 0x2E2EBCu, 0x2E2EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2EC4u;
label_2e2ec4:
    // 0x2e2ec4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2e2ec4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2ec8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e2ec8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e2ecc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e2eccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e2ed0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e2ed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e2ed4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2ED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E2ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2ED4u;
        // 0x2e2ed8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2ED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E2EDCu;
    // 0x2e2edc: 0x0  nop
    ctx->pc = 0x2e2edcu;
    // NOP
}
