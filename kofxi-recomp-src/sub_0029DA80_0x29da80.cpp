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

// Function: sub_0029DA80
// Address: 0x29da80 - 0x29e050
void sub_0029DA80_0x29da80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029DA80_0x29da80");
#endif

    switch (ctx->pc) {
        case 0x29daccu: goto label_29dacc;
        case 0x29dad8u: goto label_29dad8;
        case 0x29dae0u: goto label_29dae0;
        case 0x29dae8u: goto label_29dae8;
        case 0x29db20u: goto label_29db20;
        case 0x29db2cu: goto label_29db2c;
        case 0x29db50u: goto label_29db50;
        case 0x29db94u: goto label_29db94;
        case 0x29dba8u: goto label_29dba8;
        case 0x29dbc4u: goto label_29dbc4;
        case 0x29dbd8u: goto label_29dbd8;
        case 0x29dbecu: goto label_29dbec;
        case 0x29dc08u: goto label_29dc08;
        case 0x29dc20u: goto label_29dc20;
        case 0x29dc30u: goto label_29dc30;
        case 0x29dc3cu: goto label_29dc3c;
        case 0x29dc84u: goto label_29dc84;
        case 0x29dc9cu: goto label_29dc9c;
        case 0x29dcb4u: goto label_29dcb4;
        case 0x29dcd4u: goto label_29dcd4;
        case 0x29dcf0u: goto label_29dcf0;
        case 0x29dd20u: goto label_29dd20;
        case 0x29dd2cu: goto label_29dd2c;
        case 0x29dd74u: goto label_29dd74;
        case 0x29dd94u: goto label_29dd94;
        case 0x29ddb0u: goto label_29ddb0;
        case 0x29dde8u: goto label_29dde8;
        case 0x29de00u: goto label_29de00;
        case 0x29de44u: goto label_29de44;
        case 0x29de70u: goto label_29de70;
        case 0x29de84u: goto label_29de84;
        case 0x29de9cu: goto label_29de9c;
        case 0x29debcu: goto label_29debc;
        case 0x29ded8u: goto label_29ded8;
        case 0x29def0u: goto label_29def0;
        case 0x29df10u: goto label_29df10;
        case 0x29df2cu: goto label_29df2c;
        case 0x29df7cu: goto label_29df7c;
        case 0x29df84u: goto label_29df84;
        case 0x29df8cu: goto label_29df8c;
        case 0x29df94u: goto label_29df94;
        case 0x29dfc4u: goto label_29dfc4;
        case 0x29dfe4u: goto label_29dfe4;
        case 0x29dff4u: goto label_29dff4;
        case 0x29e004u: goto label_29e004;
        case 0x29e00cu: goto label_29e00c;
        case 0x29e01cu: goto label_29e01c;
        default: break;
    }

    ctx->pc = 0x29da80u;

    // 0x29da80: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x29da80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x29da84: 0xffb40160  sd          $s4, 0x160($sp)
    ctx->pc = 0x29da84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 20));
    // 0x29da88: 0xffbe01a0  sd          $fp, 0x1A0($sp)
    ctx->pc = 0x29da88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 30));
    // 0x29da8c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x29da8cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29da90: 0xffb70190  sd          $s7, 0x190($sp)
    ctx->pc = 0x29da90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 23));
    // 0x29da94: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x29da94u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29da98: 0xffb60180  sd          $s6, 0x180($sp)
    ctx->pc = 0x29da98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 22));
    // 0x29da9c: 0xffb50170  sd          $s5, 0x170($sp)
    ctx->pc = 0x29da9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 21));
    // 0x29daa0: 0xffb20140  sd          $s2, 0x140($sp)
    ctx->pc = 0x29daa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 18));
    // 0x29daa4: 0xffbf01b0  sd          $ra, 0x1B0($sp)
    ctx->pc = 0x29daa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 31));
    // 0x29daa8: 0xffb30150  sd          $s3, 0x150($sp)
    ctx->pc = 0x29daa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 19));
    // 0x29daac: 0xffb10130  sd          $s1, 0x130($sp)
    ctx->pc = 0x29daacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 17));
    // 0x29dab0: 0xffb00120  sd          $s0, 0x120($sp)
    ctx->pc = 0x29dab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 16));
    // 0x29dab4: 0xafa50108  sw          $a1, 0x108($sp)
    ctx->pc = 0x29dab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 5));
    // 0x29dab8: 0xafa6010c  sw          $a2, 0x10C($sp)
    ctx->pc = 0x29dab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 6));
    // 0x29dabc: 0xafa70110  sw          $a3, 0x110($sp)
    ctx->pc = 0x29dabcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 7));
    // 0x29dac0: 0xafa80114  sw          $t0, 0x114($sp)
    ctx->pc = 0x29dac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 8));
    // 0x29dac4: 0xc0a32b4  jal         func_28CAD0
    ctx->pc = 0x29DAC4u;
    SET_GPR_U32(ctx, 31, 0x29DACCu);
    ctx->pc = 0x29DAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DAC4u;
    // 0x29dac8: 0xafa00100  sw          $zero, 0x100($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CAD0u, 0x29DAC4u, 0x29DACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DACCu;
label_29dacc:
    // 0x29dacc: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x29daccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dad0: 0xc0a32b4  jal         func_28CAD0
    ctx->pc = 0x29DAD0u;
    SET_GPR_U32(ctx, 31, 0x29DAD8u);
    ctx->pc = 0x29DAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DAD0u;
    // 0x29dad4: 0xafa00118  sw          $zero, 0x118($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CAD0u, 0x29DAD0u, 0x29DAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DAD8u;
label_29dad8:
    // 0x29dad8: 0xc0a32b4  jal         func_28CAD0
    ctx->pc = 0x29DAD8u;
    SET_GPR_U32(ctx, 31, 0x29DAE0u);
    ctx->pc = 0x29DADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DAD8u;
    // 0x29dadc: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CAD0u, 0x29DAD8u, 0x29DAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DAE0u;
label_29dae0:
    // 0x29dae0: 0xc0a5408  jal         func_295020
    ctx->pc = 0x29DAE0u;
    SET_GPR_U32(ctx, 31, 0x29DAE8u);
    ctx->pc = 0x29DAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DAE0u;
    // 0x29dae4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295020u, 0x29DAE0u, 0x29DAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DAE8u;
label_29dae8:
    // 0x29dae8: 0x12c00007  beqz        $s6, . + 4 + (0x7 << 2)
    ctx->pc = 0x29DAE8u;
    {
        const bool branch_taken_0x29dae8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DAE8u;
        // 0x29daec: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dae8) {
            ctx->pc = 0x29DB08u;
            goto label_29db08;
        }
    }
    ctx->pc = 0x29DAF0u;
    // 0x29daf0: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x29DAF0u;
    {
        const bool branch_taken_0x29daf0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DAF0u;
        // 0x29daf4: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29daf0) {
            ctx->pc = 0x29DB0Cu;
            goto label_29db0c;
        }
    }
    ctx->pc = 0x29DAF8u;
    // 0x29daf8: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x29DAF8u;
    {
        const bool branch_taken_0x29daf8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DAF8u;
        // 0x29dafc: 0x2405006d  addiu       $a1, $zero, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29daf8) {
            ctx->pc = 0x29DB10u;
            goto label_29db10;
        }
    }
    ctx->pc = 0x29DB00u;
    // 0x29db00: 0x56e00005  bnel        $s7, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x29DB00u;
    {
        const bool branch_taken_0x29db00 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x29db00) {
            ctx->pc = 0x29DB04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29DB00u;
            // 0x29db04: 0xa3a000fe  sb          $zero, 0xFE($sp) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 29), 254), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29DB18u;
            goto label_29db18;
        }
    }
    ctx->pc = 0x29DB08u;
label_29db08:
    // 0x29db08: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x29db08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_29db0c:
    // 0x29db0c: 0x2405006d  addiu       $a1, $zero, 0x6D
    ctx->pc = 0x29db0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
label_29db10:
    // 0x29db10: 0x100000fc  b           . + 4 + (0xFC << 2)
    ctx->pc = 0x29DB10u;
    {
        const bool branch_taken_0x29db10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DB10u;
        // 0x29db14: 0x24060021  addiu       $a2, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29db10) {
            ctx->pc = 0x29DF04u;
            goto label_29df04;
        }
    }
    ctx->pc = 0x29DB18u;
label_29db18:
    // 0x29db18: 0x2413000a  addiu       $s3, $zero, 0xA
    ctx->pc = 0x29db18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x29db1c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29db1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_29db20:
    // 0x29db20: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29db20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29db24: 0xc0a150e  jal         func_285438
    ctx->pc = 0x29DB24u;
    SET_GPR_U32(ctx, 31, 0x29DB2Cu);
    ctx->pc = 0x29DB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DB24u;
    // 0x29db28: 0x240600fe  addiu       $a2, $zero, 0xFE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285438u, 0x29DB24u, 0x29DB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DB2Cu;
label_29db2c:
    // 0x29db2c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29db2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29db30: 0x1a00011a  blez        $s0, . + 4 + (0x11A << 2)
    ctx->pc = 0x29DB30u;
    {
        const bool branch_taken_0x29db30 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x29DB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DB30u;
        // 0x29db34: 0x3b01821  addu        $v1, $sp, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29db30) {
            ctx->pc = 0x29DF9Cu;
            goto label_29df9c;
        }
    }
    ctx->pc = 0x29DB38u;
    // 0x29db38: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x29db38u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29db3c: 0x28420021  slti        $v0, $v0, 0x21
    ctx->pc = 0x29db3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x29db40: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x29DB40u;
    {
        const bool branch_taken_0x29db40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DB40u;
        // 0x29db44: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29db40) {
            ctx->pc = 0x29DB70u;
            goto label_29db70;
        }
    }
    ctx->pc = 0x29DB48u;
    // 0x29db48: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x29db48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x29db4c: 0x0  nop
    ctx->pc = 0x29db4cu;
    // NOP
label_29db50:
    // 0x29db50: 0x6000007  bltz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29DB50u;
    {
        const bool branch_taken_0x29db50 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x29DB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DB50u;
        // 0x29db54: 0x3b01821  addu        $v1, $sp, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29db50) {
            ctx->pc = 0x29DB70u;
            goto label_29db70;
        }
    }
    ctx->pc = 0x29DB58u;
    // 0x29db58: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x29db58u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29db5c: 0x28420021  slti        $v0, $v0, 0x21
    ctx->pc = 0x29db5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x29db60: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x29DB60u;
    {
        const bool branch_taken_0x29db60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29db60) {
            ctx->pc = 0x29DB64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29DB60u;
            // 0x29db64: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29DB50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29db50;
        }
    }
    ctx->pc = 0x29DB68u;
    // 0x29db68: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29DB68u;
    {
        const bool branch_taken_0x29db68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DB68u;
        // 0x29db6c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29db68) {
            ctx->pc = 0x29DB74u;
            goto label_29db74;
        }
    }
    ctx->pc = 0x29DB70u;
label_29db70:
    // 0x29db70: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x29db70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_29db74:
    // 0x29db74: 0x24a5c6a0  addiu       $a1, $a1, -0x3960
    ctx->pc = 0x29db74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952608));
    // 0x29db78: 0x3b01021  addu        $v0, $sp, $s0
    ctx->pc = 0x29db78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
    // 0x29db7c: 0x21d1821  addu        $v1, $s0, $sp
    ctx->pc = 0x29db7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
    // 0x29db80: 0xa0530000  sb          $s3, 0x0($v0)
    ctx->pc = 0x29db80u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 19));
    // 0x29db84: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29db84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29db88: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x29db88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x29db8c: 0xc04a8f8  jal         func_12A3E0
    ctx->pc = 0x29DB8Cu;
    SET_GPR_U32(ctx, 31, 0x29DB94u);
    ctx->pc = 0x29DB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DB8Cu;
    // 0x29db90: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A3E0u, 0x29DB8Cu, 0x29DB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DB94u;
label_29db94:
    // 0x29db94: 0x5440ffe2  bnel        $v0, $zero, . + 4 + (-0x1E << 2)
    ctx->pc = 0x29DB94u;
    {
        const bool branch_taken_0x29db94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29db94) {
            ctx->pc = 0x29DB98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29DB94u;
            // 0x29db98: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29DB20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29db20;
        }
    }
    ctx->pc = 0x29DB9Cu;
    // 0x29db9c: 0x27b1000b  addiu       $s1, $sp, 0xB
    ctx->pc = 0x29db9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 11));
    // 0x29dba0: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x29DBA0u;
    SET_GPR_U32(ctx, 31, 0x29DBA8u);
    ctx->pc = 0x29DBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DBA0u;
    // 0x29dba4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x29DBA0u, 0x29DBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DBA8u;
label_29dba8:
    // 0x29dba8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29dba8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dbac: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x29dbacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x29dbb0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x29dbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x29dbb4: 0x26040005  addiu       $a0, $s0, 0x5
    ctx->pc = 0x29dbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
    // 0x29dbb8: 0x2445c6b0  addiu       $a1, $v0, -0x3950
    ctx->pc = 0x29dbb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952624));
    // 0x29dbbc: 0xc04a8f8  jal         func_12A3E0
    ctx->pc = 0x29DBBCu;
    SET_GPR_U32(ctx, 31, 0x29DBC4u);
    ctx->pc = 0x29DBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DBBCu;
    // 0x29dbc0: 0x3a42021  addu        $a0, $sp, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A3E0u, 0x29DBBCu, 0x29DBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DBC4u;
label_29dbc4:
    // 0x29dbc4: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x29DBC4u;
    {
        const bool branch_taken_0x29dbc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29DBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DBC4u;
        // 0x29dbc8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dbc4) {
            ctx->pc = 0x29DB20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29db20;
        }
    }
    ctx->pc = 0x29DBCCu;
    // 0x29dbcc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29dbccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dbd0: 0xc0a32e0  jal         func_28CB80
    ctx->pc = 0x29DBD0u;
    SET_GPR_U32(ctx, 31, 0x29DBD8u);
    ctx->pc = 0x29DBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DBD0u;
    // 0x29dbd4: 0x26050009  addiu       $a1, $s0, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CB80u, 0x29DBD0u, 0x29DBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DBD8u;
label_29dbd8:
    // 0x29dbd8: 0x104000f4  beqz        $v0, . + 4 + (0xF4 << 2)
    ctx->pc = 0x29DBD8u;
    {
        const bool branch_taken_0x29dbd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DBD8u;
        // 0x29dbdc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dbd8) {
            ctx->pc = 0x29DFACu;
            goto label_29dfac;
        }
    }
    ctx->pc = 0x29DBE0u;
    // 0x29dbe0: 0x8ec40004  lw          $a0, 0x4($s6)
    ctx->pc = 0x29dbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x29dbe4: 0xc04a966  jal         func_12A598
    ctx->pc = 0x29DBE4u;
    SET_GPR_U32(ctx, 31, 0x29DBECu);
    ctx->pc = 0x29DBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DBE4u;
    // 0x29dbe8: 0x2606fffa  addiu       $a2, $s0, -0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967290));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x29DBE4u, 0x29DBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DBECu;
label_29dbec:
    // 0x29dbec: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x29dbecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x29dbf0: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x29dbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x29dbf4: 0xa060fffa  sb          $zero, -0x6($v1)
    ctx->pc = 0x29dbf4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967290), (uint8_t)GPR_U32(ctx, 0));
    // 0x29dbf8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x29dbf8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dbfc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x29dbfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dc00: 0xc0a32e0  jal         func_28CB80
    ctx->pc = 0x29DC00u;
    SET_GPR_U32(ctx, 31, 0x29DC08u);
    ctx->pc = 0x29DC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DC00u;
    // 0x29dc04: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CB80u, 0x29DC00u, 0x29DC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DC08u;
label_29dc08:
    // 0x29dc08: 0x5440002d  bnel        $v0, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x29DC08u;
    {
        const bool branch_taken_0x29dc08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29dc08) {
            ctx->pc = 0x29DC0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29DC08u;
            // 0x29dc0c: 0x8ea20004  lw          $v0, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29DCC0u;
            goto label_29dcc0;
        }
    }
    ctx->pc = 0x29DC10u;
    // 0x29dc10: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x29dc10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x29dc14: 0x2405006d  addiu       $a1, $zero, 0x6D
    ctx->pc = 0x29dc14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    // 0x29dc18: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x29DC18u;
    {
        const bool branch_taken_0x29dc18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DC18u;
        // 0x29dc1c: 0x24060021  addiu       $a2, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dc18) {
            ctx->pc = 0x29DF04u;
            goto label_29df04;
        }
    }
    ctx->pc = 0x29DC20u;
label_29dc20:
    // 0x29dc20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29dc20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29dc24: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x29DC24u;
    {
        const bool branch_taken_0x29dc24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DC24u;
        // 0x29dc28: 0xafa30118  sw          $v1, 0x118($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dc24) {
            ctx->pc = 0x29DCE0u;
            goto label_29dce0;
        }
    }
    ctx->pc = 0x29DC2Cu;
    // 0x29dc2c: 0x0  nop
    ctx->pc = 0x29dc2cu;
    // NOP
label_29dc30:
    // 0x29dc30: 0x6020007  bltzl       $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29DC30u;
    {
        const bool branch_taken_0x29dc30 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x29dc30) {
            ctx->pc = 0x29DC34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29DC30u;
            // 0x29dc34: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29DC50u;
            goto label_29dc50;
        }
    }
    ctx->pc = 0x29DC38u;
    // 0x29dc38: 0x3b01821  addu        $v1, $sp, $s0
    ctx->pc = 0x29dc38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
label_29dc3c:
    // 0x29dc3c: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x29dc3cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29dc40: 0x28420021  slti        $v0, $v0, 0x21
    ctx->pc = 0x29dc40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x29dc44: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x29DC44u;
    {
        const bool branch_taken_0x29dc44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29dc44) {
            ctx->pc = 0x29DC48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29DC44u;
            // 0x29dc48: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29DC30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29dc30;
        }
    }
    ctx->pc = 0x29DC4Cu;
    // 0x29dc4c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x29dc4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_29dc50:
    // 0x29dc50: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x29dc50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x29dc54: 0x3b01021  addu        $v0, $sp, $s0
    ctx->pc = 0x29dc54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
    // 0x29dc58: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x29dc58u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x29dc5c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x29dc5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x29dc60: 0x3b01821  addu        $v1, $sp, $s0
    ctx->pc = 0x29dc60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
    // 0x29dc64: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x29dc64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x29dc68: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x29dc68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x29dc6c: 0x83a20000  lb          $v0, 0x0($sp)
    ctx->pc = 0x29dc6cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29dc70: 0x1043001b  beq         $v0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x29DC70u;
    {
        const bool branch_taken_0x29dc70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x29DC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DC70u;
        // 0x29dc74: 0x2708821  addu        $s1, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dc70) {
            ctx->pc = 0x29DCE0u;
            goto label_29dce0;
        }
    }
    ctx->pc = 0x29DC78u;
    // 0x29dc78: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x29dc78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dc7c: 0xc0a32e0  jal         func_28CB80
    ctx->pc = 0x29DC7Cu;
    SET_GPR_U32(ctx, 31, 0x29DC84u);
    ctx->pc = 0x29DC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DC7Cu;
    // 0x29dc80: 0x26250009  addiu       $a1, $s1, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CB80u, 0x29DC7Cu, 0x29DC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DC84u;
label_29dc84:
    // 0x29dc84: 0x104000c9  beqz        $v0, . + 4 + (0xC9 << 2)
    ctx->pc = 0x29DC84u;
    {
        const bool branch_taken_0x29dc84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DC84u;
        // 0x29dc88: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dc84) {
            ctx->pc = 0x29DFACu;
            goto label_29dfac;
        }
    }
    ctx->pc = 0x29DC8Cu;
    // 0x29dc8c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29dc8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dc90: 0x2445c6b8  addiu       $a1, $v0, -0x3948
    ctx->pc = 0x29dc90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952632));
    // 0x29dc94: 0xc04a8f8  jal         func_12A3E0
    ctx->pc = 0x29DC94u;
    SET_GPR_U32(ctx, 31, 0x29DC9Cu);
    ctx->pc = 0x29DC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DC94u;
    // 0x29dc98: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A3E0u, 0x29DC94u, 0x29DC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DC9Cu;
label_29dc9c:
    // 0x29dc9c: 0x1040ffe0  beqz        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x29DC9Cu;
    {
        const bool branch_taken_0x29dc9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DC9Cu;
        // 0x29dca0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dc9c) {
            ctx->pc = 0x29DC20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29dc20;
        }
    }
    ctx->pc = 0x29DCA4u;
    // 0x29dca4: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x29dca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x29dca8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29dca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dcac: 0xc04a966  jal         func_12A598
    ctx->pc = 0x29DCACu;
    SET_GPR_U32(ctx, 31, 0x29DCB4u);
    ctx->pc = 0x29DCB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DCACu;
    // 0x29dcb0: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x29DCACu, 0x29DCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DCB4u;
label_29dcb4:
    // 0x29dcb4: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x29dcb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dcb8: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x29dcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x29dcbc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x29dcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_29dcc0:
    // 0x29dcc0: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x29dcc0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x29dcc4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29dcc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dcc8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29dcc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dccc: 0xc0a150e  jal         func_285438
    ctx->pc = 0x29DCCCu;
    SET_GPR_U32(ctx, 31, 0x29DCD4u);
    ctx->pc = 0x29DCD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DCCCu;
    // 0x29dcd0: 0x240600fe  addiu       $a2, $zero, 0xFE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285438u, 0x29DCCCu, 0x29DCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DCD4u;
label_29dcd4:
    // 0x29dcd4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29dcd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dcd8: 0x1e00ffd8  bgtz        $s0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x29DCD8u;
    {
        const bool branch_taken_0x29dcd8 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x29DCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DCD8u;
        // 0x29dcdc: 0x3b01821  addu        $v1, $sp, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dcd8) {
            ctx->pc = 0x29DC3Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29dc3c;
        }
    }
    ctx->pc = 0x29DCE0u;
label_29dce0:
    // 0x29dce0: 0xafa00100  sw          $zero, 0x100($sp)
    ctx->pc = 0x29dce0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
    // 0x29dce4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29dce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dce8: 0xc0a32e0  jal         func_28CB80
    ctx->pc = 0x29DCE8u;
    SET_GPR_U32(ctx, 31, 0x29DCF0u);
    ctx->pc = 0x29DCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DCE8u;
    // 0x29dcec: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CB80u, 0x29DCE8u, 0x29DCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DCF0u;
label_29dcf0:
    // 0x29dcf0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x29DCF0u;
    {
        const bool branch_taken_0x29dcf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29dcf0) {
            ctx->pc = 0x29DCF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29DCF0u;
            // 0x29dcf4: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29DD08u;
            goto label_29dd08;
        }
    }
    ctx->pc = 0x29DCF8u;
    // 0x29dcf8: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x29dcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x29dcfc: 0x2405006d  addiu       $a1, $zero, 0x6D
    ctx->pc = 0x29dcfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    // 0x29dd00: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x29DD00u;
    {
        const bool branch_taken_0x29dd00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DD00u;
        // 0x29dd04: 0x24060021  addiu       $a2, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dd00) {
            ctx->pc = 0x29DF04u;
            goto label_29df04;
        }
    }
    ctx->pc = 0x29DD08u;
label_29dd08:
    // 0x29dd08: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x29dd08u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x29dd0c: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x29dd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x29dd10: 0x14600051  bnez        $v1, . + 4 + (0x51 << 2)
    ctx->pc = 0x29DD10u;
    {
        const bool branch_taken_0x29dd10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29DD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DD10u;
        // 0x29dd14: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dd10) {
            ctx->pc = 0x29DE58u;
            goto label_29de58;
        }
    }
    ctx->pc = 0x29DD18u;
    // 0x29dd18: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x29DD18u;
    {
        const bool branch_taken_0x29dd18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DD18u;
        // 0x29dd1c: 0x3c110040  lui         $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dd18) {
            ctx->pc = 0x29DE34u;
            goto label_29de34;
        }
    }
    ctx->pc = 0x29DD20u;
label_29dd20:
    // 0x29dd20: 0x6020007  bltzl       $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29DD20u;
    {
        const bool branch_taken_0x29dd20 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x29dd20) {
            ctx->pc = 0x29DD24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29DD20u;
            // 0x29dd24: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29DD40u;
            goto label_29dd40;
        }
    }
    ctx->pc = 0x29DD28u;
    // 0x29dd28: 0x3b01821  addu        $v1, $sp, $s0
    ctx->pc = 0x29dd28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
label_29dd2c:
    // 0x29dd2c: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x29dd2cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29dd30: 0x28420021  slti        $v0, $v0, 0x21
    ctx->pc = 0x29dd30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x29dd34: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x29DD34u;
    {
        const bool branch_taken_0x29dd34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29dd34) {
            ctx->pc = 0x29DD38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29DD34u;
            // 0x29dd38: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29DD20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29dd20;
        }
    }
    ctx->pc = 0x29DD3Cu;
    // 0x29dd3c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x29dd3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_29dd40:
    // 0x29dd40: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x29dd40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x29dd44: 0x3b01021  addu        $v0, $sp, $s0
    ctx->pc = 0x29dd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
    // 0x29dd48: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x29dd48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29dd4c: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x29dd4cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x29dd50: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x29dd50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x29dd54: 0x3a020041  xori        $v0, $s0, 0x41
    ctx->pc = 0x29dd54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)65);
    // 0x29dd58: 0x3b01821  addu        $v1, $sp, $s0
    ctx->pc = 0x29dd58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
    // 0x29dd5c: 0xa2f00b  movn        $fp, $a1, $v0
    ctx->pc = 0x29dd5cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 5));
    // 0x29dd60: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x29dd60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x29dd64: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29dd64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dd68: 0x2625c6b8  addiu       $a1, $s1, -0x3948
    ctx->pc = 0x29dd68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294952632));
    // 0x29dd6c: 0xc04a8f8  jal         func_12A3E0
    ctx->pc = 0x29DD6Cu;
    SET_GPR_U32(ctx, 31, 0x29DD74u);
    ctx->pc = 0x29DD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DD6Cu;
    // 0x29dd70: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A3E0u, 0x29DD6Cu, 0x29DD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DD74u;
label_29dd74:
    // 0x29dd74: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x29DD74u;
    {
        const bool branch_taken_0x29dd74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DD74u;
        // 0x29dd78: 0x2a020042  slti        $v0, $s0, 0x42 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)66) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dd74) {
            ctx->pc = 0x29DE68u;
            goto label_29de68;
        }
    }
    ctx->pc = 0x29DD7Cu;
    // 0x29dd7c: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x29DD7Cu;
    {
        const bool branch_taken_0x29dd7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DD7Cu;
        // 0x29dd80: 0x8fa50100  lw          $a1, 0x100($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dd7c) {
            ctx->pc = 0x29DE68u;
            goto label_29de68;
        }
    }
    ctx->pc = 0x29DD84u;
    // 0x29dd84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29dd84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dd88: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x29dd88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x29dd8c: 0xc0a32e0  jal         func_28CB80
    ctx->pc = 0x29DD8Cu;
    SET_GPR_U32(ctx, 31, 0x29DD94u);
    ctx->pc = 0x29DD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DD8Cu;
    // 0x29dd90: 0x24a50009  addiu       $a1, $a1, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CB80u, 0x29DD8Cu, 0x29DD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DD94u;
label_29dd94:
    // 0x29dd94: 0x10400085  beqz        $v0, . + 4 + (0x85 << 2)
    ctx->pc = 0x29DD94u;
    {
        const bool branch_taken_0x29dd94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DD94u;
        // 0x29dd98: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dd94) {
            ctx->pc = 0x29DFACu;
            goto label_29dfac;
        }
    }
    ctx->pc = 0x29DD9Cu;
    // 0x29dd9c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x29dd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x29dda0: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x29dda0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x29dda4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x29dda4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dda8: 0xc04a966  jal         func_12A598
    ctx->pc = 0x29DDA8u;
    SET_GPR_U32(ctx, 31, 0x29DDB0u);
    ctx->pc = 0x29DDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DDA8u;
    // 0x29ddac: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x29DDA8u, 0x29DDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DDB0u;
label_29ddb0:
    // 0x29ddb0: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x29ddb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x29ddb4: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x29ddb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x29ddb8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x29ddb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x29ddbc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x29ddbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x29ddc0: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x29ddc0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x29ddc4: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x29ddc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x29ddc8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x29ddc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x29ddcc: 0x13c00019  beqz        $fp, . + 4 + (0x19 << 2)
    ctx->pc = 0x29DDCCu;
    {
        const bool branch_taken_0x29ddcc = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DDCCu;
        // 0x29ddd0: 0xafa20100  sw          $v0, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ddcc) {
            ctx->pc = 0x29DE34u;
            goto label_29de34;
        }
    }
    ctx->pc = 0x29DDD4u;
    // 0x29ddd4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29ddd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ddd8: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x29ddd8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x29dddc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29dddcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dde0: 0xc0a150e  jal         func_285438
    ctx->pc = 0x29DDE0u;
    SET_GPR_U32(ctx, 31, 0x29DDE8u);
    ctx->pc = 0x29DDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DDE0u;
    // 0x29dde4: 0x240600fe  addiu       $a2, $zero, 0xFE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285438u, 0x29DDE0u, 0x29DDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DDE8u;
label_29dde8:
    // 0x29dde8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29dde8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ddec: 0x1a00001e  blez        $s0, . + 4 + (0x1E << 2)
    ctx->pc = 0x29DDECu;
    {
        const bool branch_taken_0x29ddec = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x29DDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DDECu;
        // 0x29ddf0: 0x3b01821  addu        $v1, $sp, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ddec) {
            ctx->pc = 0x29DE68u;
            goto label_29de68;
        }
    }
    ctx->pc = 0x29DDF4u;
    // 0x29ddf4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x29DDF4u;
    {
        const bool branch_taken_0x29ddf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DDF4u;
        // 0x29ddf8: 0x80620000  lb          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ddf4) {
            ctx->pc = 0x29DE0Cu;
            goto label_29de0c;
        }
    }
    ctx->pc = 0x29DDFCu;
    // 0x29ddfc: 0x0  nop
    ctx->pc = 0x29ddfcu;
    // NOP
label_29de00:
    // 0x29de00: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29DE00u;
    {
        const bool branch_taken_0x29de00 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x29DE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DE00u;
        // 0x29de04: 0x3b01821  addu        $v1, $sp, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29de00) {
            ctx->pc = 0x29DE18u;
            goto label_29de18;
        }
    }
    ctx->pc = 0x29DE08u;
    // 0x29de08: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x29de08u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_29de0c:
    // 0x29de0c: 0x28420021  slti        $v0, $v0, 0x21
    ctx->pc = 0x29de0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x29de10: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x29DE10u;
    {
        const bool branch_taken_0x29de10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29de10) {
            ctx->pc = 0x29DE14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29DE10u;
            // 0x29de14: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29DE00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29de00;
        }
    }
    ctx->pc = 0x29DE18u;
label_29de18:
    // 0x29de18: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x29de18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x29de1c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x29de1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x29de20: 0x3b01821  addu        $v1, $sp, $s0
    ctx->pc = 0x29de20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
    // 0x29de24: 0x21d2021  addu        $a0, $s0, $sp
    ctx->pc = 0x29de24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
    // 0x29de28: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x29de28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x29de2c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x29DE2Cu;
    {
        const bool branch_taken_0x29de2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DE2Cu;
        // 0x29de30: 0xa0800001  sb          $zero, 0x1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29de2c) {
            ctx->pc = 0x29DE68u;
            goto label_29de68;
        }
    }
    ctx->pc = 0x29DE34u;
label_29de34:
    // 0x29de34: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29de34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29de38: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29de38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29de3c: 0xc0a150e  jal         func_285438
    ctx->pc = 0x29DE3Cu;
    SET_GPR_U32(ctx, 31, 0x29DE44u);
    ctx->pc = 0x29DE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DE3Cu;
    // 0x29de40: 0x240600fe  addiu       $a2, $zero, 0xFE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285438u, 0x29DE3Cu, 0x29DE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DE44u;
label_29de44:
    // 0x29de44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29de44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29de48: 0x1e00ffb8  bgtz        $s0, . + 4 + (-0x48 << 2)
    ctx->pc = 0x29DE48u;
    {
        const bool branch_taken_0x29de48 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x29DE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DE48u;
        // 0x29de4c: 0x3b01821  addu        $v1, $sp, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29de48) {
            ctx->pc = 0x29DD2Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29dd2c;
        }
    }
    ctx->pc = 0x29DE50u;
    // 0x29de50: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x29DE50u;
    {
        const bool branch_taken_0x29de50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29de50) {
            ctx->pc = 0x29DE68u;
            goto label_29de68;
        }
    }
    ctx->pc = 0x29DE58u;
label_29de58:
    // 0x29de58: 0xafb30100  sw          $s3, 0x100($sp)
    ctx->pc = 0x29de58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 19));
    // 0x29de5c: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x29de5cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29de60: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x29de60u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x29de64: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x29de64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29de68:
    // 0x29de68: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x29DE68u;
    SET_GPR_U32(ctx, 31, 0x29DE70u);
    ctx->pc = 0x29DE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DE68u;
    // 0x29de6c: 0x8ec40004  lw          $a0, 0x4($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x29DE68u, 0x29DE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DE70u;
label_29de70:
    // 0x29de70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29de70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29de74: 0x2625c6b8  addiu       $a1, $s1, -0x3948
    ctx->pc = 0x29de74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294952632));
    // 0x29de78: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29de78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29de7c: 0xc04a8f8  jal         func_12A3E0
    ctx->pc = 0x29DE7Cu;
    SET_GPR_U32(ctx, 31, 0x29DE84u);
    ctx->pc = 0x29DE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DE7Cu;
    // 0x29de80: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A3E0u, 0x29DE7Cu, 0x29DE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DE84u;
label_29de84:
    // 0x29de84: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x29DE84u;
    {
        const bool branch_taken_0x29de84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29DE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DE84u;
        // 0x29de88: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29de84) {
            ctx->pc = 0x29DEC4u;
            goto label_29dec4;
        }
    }
    ctx->pc = 0x29DE8Cu;
    // 0x29de8c: 0x8ec40004  lw          $a0, 0x4($s6)
    ctx->pc = 0x29de8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x29de90: 0x37a50009  ori         $a1, $sp, 0x9
    ctx->pc = 0x29de90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)9);
    // 0x29de94: 0xc04a8f8  jal         func_12A3E0
    ctx->pc = 0x29DE94u;
    SET_GPR_U32(ctx, 31, 0x29DE9Cu);
    ctx->pc = 0x29DE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DE94u;
    // 0x29de98: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A3E0u, 0x29DE94u, 0x29DE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DE9Cu;
label_29de9c:
    // 0x29de9c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x29DE9Cu;
    {
        const bool branch_taken_0x29de9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29DEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DE9Cu;
        // 0x29dea0: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29de9c) {
            ctx->pc = 0x29DEC4u;
            goto label_29dec4;
        }
    }
    ctx->pc = 0x29DEA4u;
    // 0x29dea4: 0x26040009  addiu       $a0, $s0, 0x9
    ctx->pc = 0x29dea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 9));
    // 0x29dea8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x29dea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x29deac: 0x2445c6b0  addiu       $a1, $v0, -0x3950
    ctx->pc = 0x29deacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952624));
    // 0x29deb0: 0x3a42021  addu        $a0, $sp, $a0
    ctx->pc = 0x29deb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x29deb4: 0xc04a8f8  jal         func_12A3E0
    ctx->pc = 0x29DEB4u;
    SET_GPR_U32(ctx, 31, 0x29DEBCu);
    ctx->pc = 0x29DEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DEB4u;
    // 0x29deb8: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A3E0u, 0x29DEB4u, 0x29DEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DEBCu;
label_29debc:
    // 0x29debc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29DEBCu;
    {
        const bool branch_taken_0x29debc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DEBCu;
        // 0x29dec0: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29debc) {
            ctx->pc = 0x29DED0u;
            goto label_29ded0;
        }
    }
    ctx->pc = 0x29DEC4u;
label_29dec4:
    // 0x29dec4: 0x2405006d  addiu       $a1, $zero, 0x6D
    ctx->pc = 0x29dec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    // 0x29dec8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x29DEC8u;
    {
        const bool branch_taken_0x29dec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DEC8u;
        // 0x29decc: 0x24060066  addiu       $a2, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dec8) {
            ctx->pc = 0x29DF04u;
            goto label_29df04;
        }
    }
    ctx->pc = 0x29DED0u;
label_29ded0:
    // 0x29ded0: 0xc0a54fc  jal         func_2953F0
    ctx->pc = 0x29DED0u;
    SET_GPR_U32(ctx, 31, 0x29DED8u);
    ctx->pc = 0x29DED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DED0u;
    // 0x29ded4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2953F0u, 0x29DED0u, 0x29DED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DED8u;
label_29ded8:
    // 0x29ded8: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x29ded8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x29dedc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x29dedcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dee0: 0x8fa80100  lw          $t0, 0x100($sp)
    ctx->pc = 0x29dee0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x29dee4: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x29dee4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x29dee8: 0xc0a5502  jal         func_295408
    ctx->pc = 0x29DEE8u;
    SET_GPR_U32(ctx, 31, 0x29DEF0u);
    ctx->pc = 0x29DEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DEE8u;
    // 0x29deec: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295408u, 0x29DEE8u, 0x29DEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DEF0u;
label_29def0:
    // 0x29def0: 0x4430009  bgezl       $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x29DEF0u;
    {
        const bool branch_taken_0x29def0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x29def0) {
            ctx->pc = 0x29DEF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29DEF0u;
            // 0x29def4: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29DF18u;
            goto label_29df18;
        }
    }
    ctx->pc = 0x29DEF8u;
    // 0x29def8: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x29def8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x29defc: 0x2405006d  addiu       $a1, $zero, 0x6D
    ctx->pc = 0x29defcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    // 0x29df00: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x29df00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_29df04:
    // 0x29df04: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29df04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29df08: 0xc0a5648  jal         func_295920
    ctx->pc = 0x29DF08u;
    SET_GPR_U32(ctx, 31, 0x29DF10u);
    ctx->pc = 0x29DF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DF08u;
    // 0x29df0c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x29DF08u, 0x29DF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DF10u;
label_29df10:
    // 0x29df10: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x29DF10u;
    {
        const bool branch_taken_0x29df10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29df10) {
            ctx->pc = 0x29DFE4u;
            goto label_29dfe4;
        }
    }
    ctx->pc = 0x29DF18u;
label_29df18:
    // 0x29df18: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x29df18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29df1c: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x29df1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x29df20: 0x27a60104  addiu       $a2, $sp, 0x104
    ctx->pc = 0x29df20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x29df24: 0xc0a55ee  jal         func_2957B8
    ctx->pc = 0x29DF24u;
    SET_GPR_U32(ctx, 31, 0x29DF2Cu);
    ctx->pc = 0x29DF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DF24u;
    // 0x29df28: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2957B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2957B8u, 0x29DF24u, 0x29DF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DF2Cu;
label_29df2c:
    // 0x29df2c: 0x4400027  bltz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x29DF2Cu;
    {
        const bool branch_taken_0x29df2c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x29DF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DF2Cu;
        // 0x29df30: 0x8fa20100  lw          $v0, 0x100($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29df2c) {
            ctx->pc = 0x29DFCCu;
            goto label_29dfcc;
        }
    }
    ctx->pc = 0x29DF34u;
    // 0x29df34: 0x8fa30104  lw          $v1, 0x104($sp)
    ctx->pc = 0x29df34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x29df38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29df38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29df3c: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x29DF3Cu;
    {
        const bool branch_taken_0x29df3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DF3Cu;
        // 0x29df40: 0xafa20100  sw          $v0, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29df3c) {
            ctx->pc = 0x29DFE4u;
            goto label_29dfe4;
        }
    }
    ctx->pc = 0x29DF44u;
    // 0x29df44: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29df44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29df48: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x29df48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x29df4c: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x29df4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x29df50: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29df50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29df54: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x29df54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x29df58: 0x8fa3010c  lw          $v1, 0x10C($sp)
    ctx->pc = 0x29df58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x29df5c: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x29df5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x29df60: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x29df60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x29df64: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x29df64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x29df68: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x29df68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x29df6c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x29df6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x29df70: 0x8fa30114  lw          $v1, 0x114($sp)
    ctx->pc = 0x29df70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
    // 0x29df74: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x29DF74u;
    SET_GPR_U32(ctx, 31, 0x29DF7Cu);
    ctx->pc = 0x29DF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DF74u;
    // 0x29df78: 0xfc650000  sd          $a1, 0x0($v1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x29DF74u, 0x29DF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DF7Cu;
label_29df7c:
    // 0x29df7c: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x29DF7Cu;
    SET_GPR_U32(ctx, 31, 0x29DF84u);
    ctx->pc = 0x29DF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DF7Cu;
    // 0x29df80: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x29DF7Cu, 0x29DF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DF84u;
label_29df84:
    // 0x29df84: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x29DF84u;
    SET_GPR_U32(ctx, 31, 0x29DF8Cu);
    ctx->pc = 0x29DF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DF84u;
    // 0x29df88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x29DF84u, 0x29DF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DF8Cu;
label_29df8c:
    // 0x29df8c: 0xc0a5420  jal         func_295080
    ctx->pc = 0x29DF8Cu;
    SET_GPR_U32(ctx, 31, 0x29DF94u);
    ctx->pc = 0x29DF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DF8Cu;
    // 0x29df90: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295080u, 0x29DF8Cu, 0x29DF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DF94u;
label_29df94:
    // 0x29df94: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x29DF94u;
    {
        const bool branch_taken_0x29df94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DF94u;
        // 0x29df98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29df94) {
            ctx->pc = 0x29E020u;
            goto label_29e020;
        }
    }
    ctx->pc = 0x29DF9Cu;
label_29df9c:
    // 0x29df9c: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x29df9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x29dfa0: 0x2405006d  addiu       $a1, $zero, 0x6D
    ctx->pc = 0x29dfa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    // 0x29dfa4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x29DFA4u;
    {
        const bool branch_taken_0x29dfa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DFA4u;
        // 0x29dfa8: 0x2406006c  addiu       $a2, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dfa4) {
            ctx->pc = 0x29DFB8u;
            goto label_29dfb8;
        }
    }
    ctx->pc = 0x29DFACu;
label_29dfac:
    // 0x29dfac: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x29dfacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x29dfb0: 0x2405006d  addiu       $a1, $zero, 0x6D
    ctx->pc = 0x29dfb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    // 0x29dfb4: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x29dfb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_29dfb8:
    // 0x29dfb8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29dfb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dfbc: 0xc0a5648  jal         func_295920
    ctx->pc = 0x29DFBCu;
    SET_GPR_U32(ctx, 31, 0x29DFC4u);
    ctx->pc = 0x29DFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DFBCu;
    // 0x29dfc0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x29DFBCu, 0x29DFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DFC4u;
label_29dfc4:
    // 0x29dfc4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x29DFC4u;
    {
        const bool branch_taken_0x29dfc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29dfc4) {
            ctx->pc = 0x29DFE4u;
            goto label_29dfe4;
        }
    }
    ctx->pc = 0x29DFCCu;
label_29dfcc:
    // 0x29dfcc: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x29dfccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x29dfd0: 0x2405006d  addiu       $a1, $zero, 0x6D
    ctx->pc = 0x29dfd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    // 0x29dfd4: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x29dfd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x29dfd8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29dfd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dfdc: 0xc0a5648  jal         func_295920
    ctx->pc = 0x29DFDCu;
    SET_GPR_U32(ctx, 31, 0x29DFE4u);
    ctx->pc = 0x29DFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DFDCu;
    // 0x29dfe0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x29DFDCu, 0x29DFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DFE4u;
label_29dfe4:
    // 0x29dfe4: 0x12e00003  beqz        $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x29DFE4u;
    {
        const bool branch_taken_0x29dfe4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x29dfe4) {
            ctx->pc = 0x29DFF4u;
            goto label_29dff4;
        }
    }
    ctx->pc = 0x29DFECu;
    // 0x29dfec: 0xc0a5420  jal         func_295080
    ctx->pc = 0x29DFECu;
    SET_GPR_U32(ctx, 31, 0x29DFF4u);
    ctx->pc = 0x29DFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DFECu;
    // 0x29dff0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295080u, 0x29DFECu, 0x29DFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DFF4u;
label_29dff4:
    // 0x29dff4: 0x12c00005  beqz        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x29DFF4u;
    {
        const bool branch_taken_0x29dff4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x29dff4) {
            ctx->pc = 0x29E00Cu;
            goto label_29e00c;
        }
    }
    ctx->pc = 0x29DFFCu;
    // 0x29dffc: 0xc0a32ca  jal         func_28CB28
    ctx->pc = 0x29DFFCu;
    SET_GPR_U32(ctx, 31, 0x29E004u);
    ctx->pc = 0x29E000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DFFCu;
    // 0x29e000: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CB28u, 0x29DFFCu, 0x29E004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E004u;
label_29e004:
    // 0x29e004: 0xc0a32ca  jal         func_28CB28
    ctx->pc = 0x29E004u;
    SET_GPR_U32(ctx, 31, 0x29E00Cu);
    ctx->pc = 0x29E008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E004u;
    // 0x29e008: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CB28u, 0x29E004u, 0x29E00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E00Cu;
label_29e00c:
    // 0x29e00c: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x29E00Cu;
    {
        const bool branch_taken_0x29e00c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E00Cu;
        // 0x29e010: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e00c) {
            ctx->pc = 0x29E020u;
            goto label_29e020;
        }
    }
    ctx->pc = 0x29E014u;
    // 0x29e014: 0xc0a32ca  jal         func_28CB28
    ctx->pc = 0x29E014u;
    SET_GPR_U32(ctx, 31, 0x29E01Cu);
    ctx->pc = 0x29E018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E014u;
    // 0x29e018: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CB28u, 0x29E014u, 0x29E01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E01Cu;
label_29e01c:
    // 0x29e01c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29e01cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29e020:
    // 0x29e020: 0xdfbf01b0  ld          $ra, 0x1B0($sp)
    ctx->pc = 0x29e020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x29e024: 0xdfbe01a0  ld          $fp, 0x1A0($sp)
    ctx->pc = 0x29e024u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x29e028: 0xdfb70190  ld          $s7, 0x190($sp)
    ctx->pc = 0x29e028u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x29e02c: 0xdfb60180  ld          $s6, 0x180($sp)
    ctx->pc = 0x29e02cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x29e030: 0xdfb50170  ld          $s5, 0x170($sp)
    ctx->pc = 0x29e030u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x29e034: 0xdfb40160  ld          $s4, 0x160($sp)
    ctx->pc = 0x29e034u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x29e038: 0xdfb30150  ld          $s3, 0x150($sp)
    ctx->pc = 0x29e038u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x29e03c: 0xdfb20140  ld          $s2, 0x140($sp)
    ctx->pc = 0x29e03cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x29e040: 0xdfb10130  ld          $s1, 0x130($sp)
    ctx->pc = 0x29e040u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x29e044: 0xdfb00120  ld          $s0, 0x120($sp)
    ctx->pc = 0x29e044u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x29e048: 0x3e00008  jr          $ra
    ctx->pc = 0x29E048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E048u;
        // 0x29e04c: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E050u;
}
