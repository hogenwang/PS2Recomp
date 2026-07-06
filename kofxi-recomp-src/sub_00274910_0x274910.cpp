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

// Function: sub_00274910
// Address: 0x274910 - 0x274a10
void sub_00274910_0x274910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00274910_0x274910");
#endif

    switch (ctx->pc) {
        case 0x27494cu: goto label_27494c;
        case 0x2749ccu: goto label_2749cc;
        case 0x2749fcu: goto label_2749fc;
        default: break;
    }

    ctx->pc = 0x274910u;

    // 0x274910: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x274910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x274914: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x274914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x274918: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x274918u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27491c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x27491cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x274920: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x274920u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x274924: 0x2463496c  addiu       $v1, $v1, 0x496C
    ctx->pc = 0x274924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18796));
    // 0x274928: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x274928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27492c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27492Cu;
    {
        const bool branch_taken_0x27492c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27492c) {
            ctx->pc = 0x27494Cu;
            goto label_27494c;
        }
    }
    ctx->pc = 0x274934u;
    // 0x274934: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x274934u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x274938: 0x24844980  addiu       $a0, $a0, 0x4980
    ctx->pc = 0x274938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18816));
    // 0x27493c: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x27493cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x274940: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x274940u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x274944: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x274944u;
    SET_GPR_U32(ctx, 31, 0x27494Cu);
    ctx->pc = 0x274948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274944u;
    // 0x274948: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E050u, 0x274944u, 0x27494Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27494Cu;
label_27494c:
    // 0x27494c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x27494Cu;
    {
        const bool branch_taken_0x27494c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27494c) {
            ctx->pc = 0x274980u;
            goto label_274980;
        }
    }
    ctx->pc = 0x274954u;
    // 0x274954: 0xa36707e1  sb          $a3, 0x7E1($k1)
    ctx->pc = 0x274954u;
    WRITE8(ADD32(GPR_U32(ctx, 27), 2017), (uint8_t)GPR_U32(ctx, 7));
    // 0x274958: 0xff10f01a  sd          $s0, -0xFE6($t8)
    ctx->pc = 0x274958u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 4294963226), GPR_U64(ctx, 16));
    // 0x27495c: 0x8fcf5a1d  lw          $t7, 0x5A1D($fp)
    ctx->pc = 0x27495cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 23069)));
    // 0x274960: 0xfedfb42a  sd          $ra, -0x4BD6($s6)
    ctx->pc = 0x274960u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 4294947882), GPR_U64(ctx, 31));
    // 0x274964: 0xdfc24ce7  ld          $v0, 0x4CE7($fp)
    ctx->pc = 0x274964u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 30), 19687)));
    // 0x274968: 0xa3a92229  sb          $t1, 0x2229($sp)
    ctx->pc = 0x274968u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 8745), (uint8_t)GPR_U32(ctx, 9));
    // 0x27496c: 0x0  nop
    ctx->pc = 0x27496cu;
    // NOP
    // 0x274970: 0x85c13800  lh          $at, 0x3800($t6)
    ctx->pc = 0x274970u;
    SET_GPR_S32(ctx, 1, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 14336)));
    // 0x274974: 0x971e2638  lhu         $fp, 0x2638($t8)
    ctx->pc = 0x274974u;
    SET_GPR_U32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 9784)));
    // 0x274978: 0x85c1382c  lh          $at, 0x382C($t6)
    ctx->pc = 0x274978u;
    SET_GPR_S32(ctx, 1, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 14380)));
    // 0x27497c: 0x0  nop
    ctx->pc = 0x27497cu;
    // NOP
label_274980:
    // 0x274980: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x274980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x274984: 0x244632bc  addiu       $a2, $v0, 0x32BC
    ctx->pc = 0x274984u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 12988));
    // 0x274988: 0x58f803be  .word       0x58F803BE                   # blezl       $a3, . + 4 + (0x3BE << 2) # 00180000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x274988u;
    {
        const bool branch_taken_0x274988 = (GPR_S32(ctx, 7) <= 0);
        if (branch_taken_0x274988) {
            ctx->pc = 0x27498Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x274988u;
            // 0x27498c: 0x58d02ebe  .word       0x58D02EBE                   # blezl       $a2, . + 4 + (0x2EBE << 2) # 00100000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x27498C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x275884u;
            return;
        }
    }
    ctx->pc = 0x274990u;
    // 0x274990: 0x5dc00fbc  bgtzl       $t6, . + 4 + (0xFBC << 2)
    ctx->pc = 0x274990u;
    {
        const bool branch_taken_0x274990 = (GPR_S32(ctx, 14) > 0);
        if (branch_taken_0x274990) {
            ctx->pc = 0x274994u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x274990u;
            // 0x274994: 0x9df00fbe  lwu         $s0, 0xFBE($t7) (Delay Slot)
            SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 15), 4030)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x278884u;
            return;
        }
    }
    ctx->pc = 0x274998u;
    // 0x274998: 0x1bd02e2e  .word       0x1BD02E2E                   # blez        $fp, . + 4 + (0x2E2E << 2) # 00100000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x274998u;
    {
        const bool branch_taken_0x274998 = (GPR_S32(ctx, 30) <= 0);
        ctx->pc = 0x27499Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274998u;
        // 0x27499c: 0xfdd02f9a  sd          $s0, 0x2F9A($t6) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 14), 12186), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274998) {
            ctx->pc = 0x280254u;
            return;
        }
    }
    ctx->pc = 0x2749A0u;
    // 0x2749a0: 0xfad00e92  sqc2        $vf16, 0xE92($s6)
    ctx->pc = 0x2749a0u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 3730), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2749a4: 0x182fd4aa  .word       0x182FD4AA                   # blez        $at, . + 4 + (-0x2B56 << 2) # 000F0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2749A4u;
    {
        const bool branch_taken_0x2749a4 = (GPR_S32(ctx, 1) <= 0);
        ctx->pc = 0x2749A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2749A4u;
        // 0x2749a8: 0xdbd02e1e  lqc2        $vf16, 0x2E1E($fp) (Delay Slot)
        ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 11806)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2749a4) {
            ctx->pc = 0x269C50u;
            return;
        }
    }
    ctx->pc = 0x2749ACu;
    // 0x2749ac: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2749ACu;
    {
        const bool branch_taken_0x2749ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2749ac) {
            ctx->pc = 0x2749DCu;
            goto label_2749dc;
        }
    }
    ctx->pc = 0x2749B4u;
    // 0x2749b4: 0x2c34820  add         $t1, $s6, $v1
    ctx->pc = 0x2749b4u;
    {     int32_t rs_val = GPR_S32(ctx, 22);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
    // 0x2749b8: 0x256fd690  addiu       $t7, $t3, -0x2970
    ctx->pc = 0x2749b8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 11), 4294956688));
    // 0x2749bc: 0x8f8e72f5  lw          $t6, 0x72F5($gp)
    ctx->pc = 0x2749bcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 29429)));
    // 0x2749c0: 0x26ef0fc8  addiu       $t7, $s7, 0xFC8
    ctx->pc = 0x2749c0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 23), 4040));
    // 0x2749c4: 0xce66a80  jal         func_399AA00
    ctx->pc = 0x2749C4u;
    SET_GPR_U32(ctx, 31, 0x2749CCu);
    ctx->pc = 0x2749C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2749C4u;
    // 0x2749c8: 0x868606e3  lh          $a2, 0x6E3($s4) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1763)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399AA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399AA00u, 0x2749C4u, 0x2749CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2749CCu;
label_2749cc:
    // 0x2749cc: 0x85c00831  lh          $zero, 0x831($t6)
    ctx->pc = 0x2749ccu;
    SET_GPR_S32(ctx, 0, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 2097)));
    // 0x2749d0: 0x971e2639  lhu         $fp, 0x2639($t8)
    ctx->pc = 0x2749d0u;
    SET_GPR_U32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 9785)));
    // 0x2749d4: 0x85c0081d  lh          $zero, 0x81D($t6)
    ctx->pc = 0x2749d4u;
    SET_GPR_S32(ctx, 0, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 2077)));
    // 0x2749d8: 0x0  nop
    ctx->pc = 0x2749d8u;
    // NOP
label_2749dc:
    // 0x2749dc: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x2749dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x2749e0: 0x244249cc  addiu       $v0, $v0, 0x49CC
    ctx->pc = 0x2749e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18892));
    // 0x2749e4: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x2749e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x2749e8: 0x248449ac  addiu       $a0, $a0, 0x49AC
    ctx->pc = 0x2749e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18860));
    // 0x2749ec: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2749ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2749f0: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2749f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2749f4: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x2749F4u;
    SET_GPR_U32(ctx, 31, 0x2749FCu);
    ctx->pc = 0x2749F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2749F4u;
    // 0x2749f8: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E050u, 0x2749F4u, 0x2749FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2749FCu;
label_2749fc:
    // 0x2749fc: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2749fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x274a00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x274a00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x274a04: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x274a04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x274a08: 0x3e00008  jr          $ra
    ctx->pc = 0x274A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274A08u;
        // 0x274a0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274A08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x274A10u;
}
