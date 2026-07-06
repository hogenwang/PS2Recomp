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

// Function: sub_002DCD00
// Address: 0x2dcd00 - 0x2dce38
void sub_002DCD00_0x2dcd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DCD00_0x2dcd00");
#endif

    switch (ctx->pc) {
        case 0x2dcd50u: goto label_2dcd50;
        case 0x2dcde0u: goto label_2dcde0;
        case 0x2dcde4u: goto label_2dcde4;
        case 0x2dce18u: goto label_2dce18;
        default: break;
    }

    ctx->pc = 0x2dcd00u;

    // 0x2dcd00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2dcd00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2dcd04: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2dcd04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2dcd08: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2dcd08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcd0c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2dcd0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2dcd10: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2dcd10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcd14: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2dcd14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2dcd18: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2dcd18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcd1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2dcd1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2dcd20: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2dcd20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2dcd24: 0x3c03002e  lui         $v1, 0x2E
    ctx->pc = 0x2dcd24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)46 << 16));
    // 0x2dcd28: 0x2463cd70  addiu       $v1, $v1, -0x3290
    ctx->pc = 0x2dcd28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954352));
    // 0x2dcd2c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2dcd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2dcd30: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DCD30u;
    {
        const bool branch_taken_0x2dcd30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dcd30) {
            ctx->pc = 0x2DCD50u;
            goto label_2dcd50;
        }
    }
    ctx->pc = 0x2DCD38u;
    // 0x2dcd38: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2dcd38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2dcd3c: 0x2484cd84  addiu       $a0, $a0, -0x327C
    ctx->pc = 0x2dcd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954372));
    // 0x2dcd40: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x2dcd40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2dcd44: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2dcd44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2dcd48: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2DCD48u;
    SET_GPR_U32(ctx, 31, 0x2DCD50u);
    ctx->pc = 0x2DCD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCD48u;
    // 0x2dcd4c: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FC0u, 0x2DCD48u, 0x2DCD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCD50u;
label_2dcd50:
    // 0x2dcd50: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2DCD50u;
    {
        const bool branch_taken_0x2dcd50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dcd50) {
            ctx->pc = 0x2DCD84u;
            goto label_2dcd84;
        }
    }
    ctx->pc = 0x2DCD58u;
    // 0x2dcd58: 0x2285020  add         $t2, $s1, $t0
    ctx->pc = 0x2dcd58u;
    {     int32_t rs_val = GPR_S32(ctx, 17);     int32_t rt_val = GPR_S32(ctx, 8);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
    // 0x2dcd5c: 0xa3add469  sb          $t5, -0x2B97($sp)
    ctx->pc = 0x2dcd5cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 4294956137), (uint8_t)GPR_U32(ctx, 13));
    // 0x2dcd60: 0xa058f8b9  sb          $t8, -0x747($v0)
    ctx->pc = 0x2dcd60u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294965433), (uint8_t)GPR_U32(ctx, 24));
    // 0x2dcd64: 0xa2d0d709  sb          $s0, -0x28F7($s6)
    ctx->pc = 0x2dcd64u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 4294956809), (uint8_t)GPR_U32(ctx, 16));
    // 0x2dcd68: 0x86d6c4cb  lh          $s6, -0x3B35($s6)
    ctx->pc = 0x2dcd68u;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 4294952139)));
    // 0x2dcd6c: 0x27888448  addiu       $t0, $gp, -0x7BB8
    ctx->pc = 0x2dcd6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935624));
    // 0x2dcd70: 0x0  nop
    ctx->pc = 0x2dcd70u;
    // NOP
    // 0x2dcd74: 0xda85b4f8  lqc2        $vf5, -0x4B08($s4)
    ctx->pc = 0x2dcd74u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 4294948088)));
    // 0x2dcd78: 0x0  nop
    ctx->pc = 0x2dcd78u;
    // NOP
    // 0x2dcd7c: 0xda85b4bc  lqc2        $vf5, -0x4B44($s4)
    ctx->pc = 0x2dcd7cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 4294948028)));
    // 0x2dcd80: 0x0  nop
    ctx->pc = 0x2dcd80u;
    // NOP
label_2dcd84:
    // 0x2dcd84: 0xff212a61  sd          $at, 0x2A61($t9)
    ctx->pc = 0x2dcd84u;
    WRITE64(ADD32(GPR_U32(ctx, 25), 10849), GPR_U64(ctx, 1));
    // 0x2dcd88: 0xbfa182e9  cache       0x01, -0x7D17($sp)
    ctx->pc = 0x2dcd88u;
    // CACHE instruction (ignored)
    // 0x2dcd8c: 0xbf954b79  cache       0x15, 0x4B79($gp)
    ctx->pc = 0x2dcd8cu;
    // CACHE instruction (ignored)
    // 0x2dcd90: 0xbf95abf9  cache       0x15, -0x5407($gp)
    ctx->pc = 0x2dcd90u;
    // CACHE instruction (ignored)
    // 0x2dcd94: 0xff09237f  sd          $t1, 0x237F($t8)
    ctx->pc = 0x2dcd94u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 9087), GPR_U64(ctx, 9));
    // 0x2dcd98: 0x3f153079  .word       0x3F153079                   # lui         $s5, 0x3079 # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2dcd98u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)12409 << 16));
    // 0x2dcd9c: 0xff0d20ff  sd          $t5, 0x20FF($t8)
    ctx->pc = 0x2dcd9cu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 8447), GPR_U64(ctx, 13));
    // 0x2dcda0: 0xbfa5e031  cache       0x05, -0x1FCF($sp)
    ctx->pc = 0x2dcda0u;
    // CACHE instruction (ignored)
    // 0x2dcda4: 0xbfa9a371  cache       0x09, -0x5C8F($sp)
    ctx->pc = 0x2dcda4u;
    // CACHE instruction (ignored)
    // 0x2dcda8: 0xbfad63f1  cache       0x0D, 0x63F1($sp)
    ctx->pc = 0x2dcda8u;
    // CACHE instruction (ignored)
    // 0x2dcdac: 0xff0133e5  sd          $at, 0x33E5($t8)
    ctx->pc = 0x2dcdacu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 13285), GPR_U64(ctx, 1));
    // 0x2dcdb0: 0x20e2d2a1  addi        $v0, $a3, -0x2D5F
    ctx->pc = 0x2dcdb0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294955681, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
    // 0x2dcdb4: 0xff0130ed  sd          $at, 0x30ED($t8)
    ctx->pc = 0x2dcdb4u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 12525), GPR_U64(ctx, 1));
    // 0x2dcdb8: 0x3f0132b9  .word       0x3F0132B9                   # lui         $at, 0x32B9 # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2dcdb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12985 << 16));
    // 0x2dcdbc: 0xe0c2d1ed  sc          $v0, -0x2E13($a2)
    ctx->pc = 0x2dcdbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 4294955501); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 2)); SET_GPR_S32(ctx, 2, 1); } else { SET_GPR_S32(ctx, 2, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x2dcdc0: 0xbf954b79  cache       0x15, 0x4B79($gp)
    ctx->pc = 0x2dcdc0u;
    // CACHE instruction (ignored)
    // 0x2dcdc4: 0xbfa322e9  cache       0x03, 0x22E9($sp)
    ctx->pc = 0x2dcdc4u;
    // CACHE instruction (ignored)
    // 0x2dcdc8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2DCDC8u;
    {
        const bool branch_taken_0x2dcdc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dcdc8) {
            ctx->pc = 0x2DCDF8u;
            goto label_2dcdf8;
        }
    }
    ctx->pc = 0x2DCDD0u;
    // 0x2dcdd0: 0x8e19e065  lw          $t9, -0x1F9B($s0)
    ctx->pc = 0x2dcdd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294959205)));
    // 0x2dcdd4: 0xfd5e9a32  sd          $fp, -0x65CE($t2)
    ctx->pc = 0x2dcdd4u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 4294941234), GPR_U64(ctx, 30));
    // 0x2dcdd8: 0xcb950bb  jal         func_2E542EC
    ctx->pc = 0x2DCDD8u;
    SET_GPR_U32(ctx, 31, 0x2DCDE0u);
    ctx->pc = 0x2DCDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCDD8u;
    // 0x2dcddc: 0xcbd8eaa  jal         func_2F63AA8 (Delay Slot)
    // JAL 0x2F63AA8 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E542ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E542ECu, 0x2DCDD8u, 0x2DCDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCDE0u;
label_2dcde0:
    // 0x2dcde0: 0xa24c3ee1  sb          $t4, 0x3EE1($s2)
    ctx->pc = 0x2dcde0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 16097), (uint8_t)GPR_U32(ctx, 12));
label_2dcde4:
    // 0x2dcde4: 0x86cbeb6b  lh          $t3, -0x1495($s6)
    ctx->pc = 0x2dcde4u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 4294962027)));
    // 0x2dcde8: 0xda88f4b5  lqc2        $vf8, -0xB4B($s4)
    ctx->pc = 0x2dcde8u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 4294964405)));
    // 0x2dcdec: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2dcdecu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2DCDEC raw=0x00000001");
    // 0x2dcdf0: 0xda88f4f1  lqc2        $vf8, -0xB0F($s4)
    ctx->pc = 0x2dcdf0u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 4294964465)));
    // 0x2dcdf4: 0x0  nop
    ctx->pc = 0x2dcdf4u;
    // NOP
label_2dcdf8:
    // 0x2dcdf8: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x2dcdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x2dcdfc: 0x2442cde8  addiu       $v0, $v0, -0x3218
    ctx->pc = 0x2dcdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954472));
    // 0x2dce00: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2dce00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2dce04: 0x2484cdc8  addiu       $a0, $a0, -0x3238
    ctx->pc = 0x2dce04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954440));
    // 0x2dce08: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2dce08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2dce0c: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2dce0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2dce10: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2DCE10u;
    SET_GPR_U32(ctx, 31, 0x2DCE18u);
    ctx->pc = 0x2DCE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCE10u;
    // 0x2dce14: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FC0u, 0x2DCE10u, 0x2DCE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCE18u;
label_2dce18:
    // 0x2dce18: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2dce18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dce1c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2dce1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2dce20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2dce20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dce24: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2dce24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dce28: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2dce28u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2dce2c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2dce2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dce30: 0x3e00008  jr          $ra
    ctx->pc = 0x2DCE30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DCE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCE30u;
        // 0x2dce34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DCE30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DCE38u;
}
