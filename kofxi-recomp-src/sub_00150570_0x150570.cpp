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

// Function: sub_00150570
// Address: 0x150570 - 0x1507a0
void sub_00150570_0x150570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150570_0x150570");
#endif

    switch (ctx->pc) {
        case 0x150598u: goto label_150598;
        case 0x1505a8u: goto label_1505a8;
        case 0x1505d8u: goto label_1505d8;
        case 0x150608u: goto label_150608;
        case 0x150638u: goto label_150638;
        case 0x150668u: goto label_150668;
        case 0x150698u: goto label_150698;
        case 0x1506c8u: goto label_1506c8;
        case 0x1506f8u: goto label_1506f8;
        case 0x150728u: goto label_150728;
        case 0x150758u: goto label_150758;
        default: break;
    }

    ctx->pc = 0x150570u;

    // 0x150570: 0x3c070036  lui         $a3, 0x36
    ctx->pc = 0x150570u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)54 << 16));
    // 0x150574: 0x3c060093  lui         $a2, 0x93
    ctx->pc = 0x150574u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)147 << 16));
    // 0x150578: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x150578u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x15057c: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x15057cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x150580: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x150580u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150584: 0x24e7e560  addiu       $a3, $a3, -0x1AA0
    ctx->pc = 0x150584u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294960480));
    // 0x150588: 0x24c6ecd0  addiu       $a2, $a2, -0x1330
    ctx->pc = 0x150588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962384));
    // 0x15058c: 0x24a5e5e0  addiu       $a1, $a1, -0x1A20
    ctx->pc = 0x15058cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960608));
    // 0x150590: 0x2484ec50  addiu       $a0, $a0, -0x13B0
    ctx->pc = 0x150590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962256));
    // 0x150594: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x150594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_150598:
    // 0x150598: 0x60582d  daddu       $t3, $v1, $zero
    ctx->pc = 0x150598u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15059c: 0xe0682d  daddu       $t5, $a3, $zero
    ctx->pc = 0x15059cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1505a0: 0xc0602d  daddu       $t4, $a2, $zero
    ctx->pc = 0x1505a0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1505a4: 0x0  nop
    ctx->pc = 0x1505a4u;
    // NOP
label_1505a8:
    // 0x1505a8: 0x85aa0000  lh          $t2, 0x0($t5)
    ctx->pc = 0x1505a8u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x1505ac: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x1505acu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x1505b0: 0x85a90002  lh          $t1, 0x2($t5)
    ctx->pc = 0x1505b0u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 2)));
    // 0x1505b4: 0xa58a0000  sh          $t2, 0x0($t4)
    ctx->pc = 0x1505b4u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x1505b8: 0xa5890002  sh          $t1, 0x2($t4)
    ctx->pc = 0x1505b8u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 2), (uint16_t)GPR_U32(ctx, 9));
    // 0x1505bc: 0x25ad0004  addiu       $t5, $t5, 0x4
    ctx->pc = 0x1505bcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
    // 0x1505c0: 0x1d60fff9  bgtz        $t3, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1505C0u;
    {
        const bool branch_taken_0x1505c0 = (GPR_S32(ctx, 11) > 0);
        ctx->pc = 0x1505C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1505C0u;
        // 0x1505c4: 0x258c0004  addiu       $t4, $t4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1505c0) {
            ctx->pc = 0x1505A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1505a8;
        }
    }
    ctx->pc = 0x1505C8u;
    // 0x1505c8: 0x60582d  daddu       $t3, $v1, $zero
    ctx->pc = 0x1505c8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1505cc: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x1505ccu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1505d0: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x1505d0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1505d4: 0x0  nop
    ctx->pc = 0x1505d4u;
    // NOP
label_1505d8:
    // 0x1505d8: 0x85aa0000  lh          $t2, 0x0($t5)
    ctx->pc = 0x1505d8u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x1505dc: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x1505dcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x1505e0: 0x85a90002  lh          $t1, 0x2($t5)
    ctx->pc = 0x1505e0u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 2)));
    // 0x1505e4: 0xa58a0000  sh          $t2, 0x0($t4)
    ctx->pc = 0x1505e4u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x1505e8: 0xa5890002  sh          $t1, 0x2($t4)
    ctx->pc = 0x1505e8u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 2), (uint16_t)GPR_U32(ctx, 9));
    // 0x1505ec: 0x25ad0004  addiu       $t5, $t5, 0x4
    ctx->pc = 0x1505ecu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
    // 0x1505f0: 0x1d60fff9  bgtz        $t3, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1505F0u;
    {
        const bool branch_taken_0x1505f0 = (GPR_S32(ctx, 11) > 0);
        ctx->pc = 0x1505F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1505F0u;
        // 0x1505f4: 0x258c0004  addiu       $t4, $t4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1505f0) {
            ctx->pc = 0x1505D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1505d8;
        }
    }
    ctx->pc = 0x1505F8u;
    // 0x1505f8: 0x24ed000c  addiu       $t5, $a3, 0xC
    ctx->pc = 0x1505f8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
    // 0x1505fc: 0x24cc000c  addiu       $t4, $a2, 0xC
    ctx->pc = 0x1505fcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x150600: 0x60582d  daddu       $t3, $v1, $zero
    ctx->pc = 0x150600u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150604: 0x0  nop
    ctx->pc = 0x150604u;
    // NOP
label_150608:
    // 0x150608: 0x85aa0000  lh          $t2, 0x0($t5)
    ctx->pc = 0x150608u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x15060c: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x15060cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x150610: 0x85a90002  lh          $t1, 0x2($t5)
    ctx->pc = 0x150610u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 2)));
    // 0x150614: 0xa58a0000  sh          $t2, 0x0($t4)
    ctx->pc = 0x150614u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x150618: 0xa5890002  sh          $t1, 0x2($t4)
    ctx->pc = 0x150618u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 2), (uint16_t)GPR_U32(ctx, 9));
    // 0x15061c: 0x25ad0004  addiu       $t5, $t5, 0x4
    ctx->pc = 0x15061cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
    // 0x150620: 0x1d60fff9  bgtz        $t3, . + 4 + (-0x7 << 2)
    ctx->pc = 0x150620u;
    {
        const bool branch_taken_0x150620 = (GPR_S32(ctx, 11) > 0);
        ctx->pc = 0x150624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150620u;
        // 0x150624: 0x258c0004  addiu       $t4, $t4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150620) {
            ctx->pc = 0x150608u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_150608;
        }
    }
    ctx->pc = 0x150628u;
    // 0x150628: 0x24ad000c  addiu       $t5, $a1, 0xC
    ctx->pc = 0x150628u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x15062c: 0x248c000c  addiu       $t4, $a0, 0xC
    ctx->pc = 0x15062cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x150630: 0x60582d  daddu       $t3, $v1, $zero
    ctx->pc = 0x150630u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150634: 0x0  nop
    ctx->pc = 0x150634u;
    // NOP
label_150638:
    // 0x150638: 0x85aa0000  lh          $t2, 0x0($t5)
    ctx->pc = 0x150638u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x15063c: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x15063cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x150640: 0x85a90002  lh          $t1, 0x2($t5)
    ctx->pc = 0x150640u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 2)));
    // 0x150644: 0xa58a0000  sh          $t2, 0x0($t4)
    ctx->pc = 0x150644u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x150648: 0xa5890002  sh          $t1, 0x2($t4)
    ctx->pc = 0x150648u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 2), (uint16_t)GPR_U32(ctx, 9));
    // 0x15064c: 0x25ad0004  addiu       $t5, $t5, 0x4
    ctx->pc = 0x15064cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
    // 0x150650: 0x1d60fff9  bgtz        $t3, . + 4 + (-0x7 << 2)
    ctx->pc = 0x150650u;
    {
        const bool branch_taken_0x150650 = (GPR_S32(ctx, 11) > 0);
        ctx->pc = 0x150654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150650u;
        // 0x150654: 0x258c0004  addiu       $t4, $t4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150650) {
            ctx->pc = 0x150638u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_150638;
        }
    }
    ctx->pc = 0x150658u;
    // 0x150658: 0x24ed0018  addiu       $t5, $a3, 0x18
    ctx->pc = 0x150658u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
    // 0x15065c: 0x24cc0018  addiu       $t4, $a2, 0x18
    ctx->pc = 0x15065cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
    // 0x150660: 0x60582d  daddu       $t3, $v1, $zero
    ctx->pc = 0x150660u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150664: 0x0  nop
    ctx->pc = 0x150664u;
    // NOP
label_150668:
    // 0x150668: 0x85aa0000  lh          $t2, 0x0($t5)
    ctx->pc = 0x150668u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x15066c: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x15066cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x150670: 0x85a90002  lh          $t1, 0x2($t5)
    ctx->pc = 0x150670u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 2)));
    // 0x150674: 0xa58a0000  sh          $t2, 0x0($t4)
    ctx->pc = 0x150674u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x150678: 0xa5890002  sh          $t1, 0x2($t4)
    ctx->pc = 0x150678u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 2), (uint16_t)GPR_U32(ctx, 9));
    // 0x15067c: 0x25ad0004  addiu       $t5, $t5, 0x4
    ctx->pc = 0x15067cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
    // 0x150680: 0x1d60fff9  bgtz        $t3, . + 4 + (-0x7 << 2)
    ctx->pc = 0x150680u;
    {
        const bool branch_taken_0x150680 = (GPR_S32(ctx, 11) > 0);
        ctx->pc = 0x150684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150680u;
        // 0x150684: 0x258c0004  addiu       $t4, $t4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150680) {
            ctx->pc = 0x150668u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_150668;
        }
    }
    ctx->pc = 0x150688u;
    // 0x150688: 0x24ad0018  addiu       $t5, $a1, 0x18
    ctx->pc = 0x150688u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x15068c: 0x248c0018  addiu       $t4, $a0, 0x18
    ctx->pc = 0x15068cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x150690: 0x60582d  daddu       $t3, $v1, $zero
    ctx->pc = 0x150690u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150694: 0x0  nop
    ctx->pc = 0x150694u;
    // NOP
label_150698:
    // 0x150698: 0x85aa0000  lh          $t2, 0x0($t5)
    ctx->pc = 0x150698u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x15069c: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x15069cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x1506a0: 0x85a90002  lh          $t1, 0x2($t5)
    ctx->pc = 0x1506a0u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 2)));
    // 0x1506a4: 0xa58a0000  sh          $t2, 0x0($t4)
    ctx->pc = 0x1506a4u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x1506a8: 0xa5890002  sh          $t1, 0x2($t4)
    ctx->pc = 0x1506a8u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 2), (uint16_t)GPR_U32(ctx, 9));
    // 0x1506ac: 0x25ad0004  addiu       $t5, $t5, 0x4
    ctx->pc = 0x1506acu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
    // 0x1506b0: 0x1d60fff9  bgtz        $t3, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1506B0u;
    {
        const bool branch_taken_0x1506b0 = (GPR_S32(ctx, 11) > 0);
        ctx->pc = 0x1506B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1506B0u;
        // 0x1506b4: 0x258c0004  addiu       $t4, $t4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1506b0) {
            ctx->pc = 0x150698u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_150698;
        }
    }
    ctx->pc = 0x1506B8u;
    // 0x1506b8: 0x24ed0024  addiu       $t5, $a3, 0x24
    ctx->pc = 0x1506b8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 7), 36));
    // 0x1506bc: 0x24cc0024  addiu       $t4, $a2, 0x24
    ctx->pc = 0x1506bcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 36));
    // 0x1506c0: 0x60582d  daddu       $t3, $v1, $zero
    ctx->pc = 0x1506c0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1506c4: 0x0  nop
    ctx->pc = 0x1506c4u;
    // NOP
label_1506c8:
    // 0x1506c8: 0x85aa0000  lh          $t2, 0x0($t5)
    ctx->pc = 0x1506c8u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x1506cc: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x1506ccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x1506d0: 0x85a90002  lh          $t1, 0x2($t5)
    ctx->pc = 0x1506d0u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 2)));
    // 0x1506d4: 0xa58a0000  sh          $t2, 0x0($t4)
    ctx->pc = 0x1506d4u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x1506d8: 0xa5890002  sh          $t1, 0x2($t4)
    ctx->pc = 0x1506d8u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 2), (uint16_t)GPR_U32(ctx, 9));
    // 0x1506dc: 0x25ad0004  addiu       $t5, $t5, 0x4
    ctx->pc = 0x1506dcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
    // 0x1506e0: 0x1d60fff9  bgtz        $t3, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1506E0u;
    {
        const bool branch_taken_0x1506e0 = (GPR_S32(ctx, 11) > 0);
        ctx->pc = 0x1506E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1506E0u;
        // 0x1506e4: 0x258c0004  addiu       $t4, $t4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1506e0) {
            ctx->pc = 0x1506C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1506c8;
        }
    }
    ctx->pc = 0x1506E8u;
    // 0x1506e8: 0x24ad0024  addiu       $t5, $a1, 0x24
    ctx->pc = 0x1506e8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 5), 36));
    // 0x1506ec: 0x248c0024  addiu       $t4, $a0, 0x24
    ctx->pc = 0x1506ecu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x1506f0: 0x60582d  daddu       $t3, $v1, $zero
    ctx->pc = 0x1506f0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1506f4: 0x0  nop
    ctx->pc = 0x1506f4u;
    // NOP
label_1506f8:
    // 0x1506f8: 0x85aa0000  lh          $t2, 0x0($t5)
    ctx->pc = 0x1506f8u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x1506fc: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x1506fcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x150700: 0x85a90002  lh          $t1, 0x2($t5)
    ctx->pc = 0x150700u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 2)));
    // 0x150704: 0xa58a0000  sh          $t2, 0x0($t4)
    ctx->pc = 0x150704u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x150708: 0xa5890002  sh          $t1, 0x2($t4)
    ctx->pc = 0x150708u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 2), (uint16_t)GPR_U32(ctx, 9));
    // 0x15070c: 0x25ad0004  addiu       $t5, $t5, 0x4
    ctx->pc = 0x15070cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
    // 0x150710: 0x1d60fff9  bgtz        $t3, . + 4 + (-0x7 << 2)
    ctx->pc = 0x150710u;
    {
        const bool branch_taken_0x150710 = (GPR_S32(ctx, 11) > 0);
        ctx->pc = 0x150714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150710u;
        // 0x150714: 0x258c0004  addiu       $t4, $t4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150710) {
            ctx->pc = 0x1506F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1506f8;
        }
    }
    ctx->pc = 0x150718u;
    // 0x150718: 0x24ed0030  addiu       $t5, $a3, 0x30
    ctx->pc = 0x150718u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x15071c: 0x24cc0030  addiu       $t4, $a2, 0x30
    ctx->pc = 0x15071cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x150720: 0x60582d  daddu       $t3, $v1, $zero
    ctx->pc = 0x150720u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150724: 0x0  nop
    ctx->pc = 0x150724u;
    // NOP
label_150728:
    // 0x150728: 0x85aa0000  lh          $t2, 0x0($t5)
    ctx->pc = 0x150728u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x15072c: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x15072cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x150730: 0x85a90002  lh          $t1, 0x2($t5)
    ctx->pc = 0x150730u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 2)));
    // 0x150734: 0xa58a0000  sh          $t2, 0x0($t4)
    ctx->pc = 0x150734u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x150738: 0xa5890002  sh          $t1, 0x2($t4)
    ctx->pc = 0x150738u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 2), (uint16_t)GPR_U32(ctx, 9));
    // 0x15073c: 0x25ad0004  addiu       $t5, $t5, 0x4
    ctx->pc = 0x15073cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
    // 0x150740: 0x1d60fff9  bgtz        $t3, . + 4 + (-0x7 << 2)
    ctx->pc = 0x150740u;
    {
        const bool branch_taken_0x150740 = (GPR_S32(ctx, 11) > 0);
        ctx->pc = 0x150744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150740u;
        // 0x150744: 0x258c0004  addiu       $t4, $t4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150740) {
            ctx->pc = 0x150728u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_150728;
        }
    }
    ctx->pc = 0x150748u;
    // 0x150748: 0x24ad0030  addiu       $t5, $a1, 0x30
    ctx->pc = 0x150748u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x15074c: 0x248c0030  addiu       $t4, $a0, 0x30
    ctx->pc = 0x15074cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x150750: 0x60582d  daddu       $t3, $v1, $zero
    ctx->pc = 0x150750u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150754: 0x0  nop
    ctx->pc = 0x150754u;
    // NOP
label_150758:
    // 0x150758: 0x85aa0000  lh          $t2, 0x0($t5)
    ctx->pc = 0x150758u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x15075c: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x15075cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x150760: 0x85a90002  lh          $t1, 0x2($t5)
    ctx->pc = 0x150760u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 2)));
    // 0x150764: 0xa58a0000  sh          $t2, 0x0($t4)
    ctx->pc = 0x150764u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x150768: 0xa5890002  sh          $t1, 0x2($t4)
    ctx->pc = 0x150768u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 2), (uint16_t)GPR_U32(ctx, 9));
    // 0x15076c: 0x25ad0004  addiu       $t5, $t5, 0x4
    ctx->pc = 0x15076cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
    // 0x150770: 0x1d60fff9  bgtz        $t3, . + 4 + (-0x7 << 2)
    ctx->pc = 0x150770u;
    {
        const bool branch_taken_0x150770 = (GPR_S32(ctx, 11) > 0);
        ctx->pc = 0x150774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150770u;
        // 0x150774: 0x258c0004  addiu       $t4, $t4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150770) {
            ctx->pc = 0x150758u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_150758;
        }
    }
    ctx->pc = 0x150778u;
    // 0x150778: 0x25080005  addiu       $t0, $t0, 0x5
    ctx->pc = 0x150778u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 5));
    // 0x15077c: 0x24e7003c  addiu       $a3, $a3, 0x3C
    ctx->pc = 0x15077cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 60));
    // 0x150780: 0x2909000a  slti        $t1, $t0, 0xA
    ctx->pc = 0x150780u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x150784: 0x24c6003c  addiu       $a2, $a2, 0x3C
    ctx->pc = 0x150784u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 60));
    // 0x150788: 0x24a5003c  addiu       $a1, $a1, 0x3C
    ctx->pc = 0x150788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x15078c: 0x1520ff82  bnez        $t1, . + 4 + (-0x7E << 2)
    ctx->pc = 0x15078Cu;
    {
        const bool branch_taken_0x15078c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x150790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15078Cu;
        // 0x150790: 0x2484003c  addiu       $a0, $a0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15078c) {
            ctx->pc = 0x150598u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_150598;
        }
    }
    ctx->pc = 0x150794u;
    // 0x150794: 0x3e00008  jr          $ra
    ctx->pc = 0x150794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15079Cu;
    // 0x15079c: 0x0  nop
    ctx->pc = 0x15079cu;
    // NOP
    if (ctx->pc == 0x15079cu) { ctx->pc = 0x1507a0u; }
}
