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

// Function: sub_00271898
// Address: 0x271898 - 0x2719e0
void sub_00271898_0x271898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00271898_0x271898");
#endif

    switch (ctx->pc) {
        case 0x27190cu: goto label_27190c;
        case 0x271924u: goto label_271924;
        case 0x271938u: goto label_271938;
        default: break;
    }

    ctx->pc = 0x271898u;

    // 0x271898: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x271898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x27189c: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x27189cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x2718a0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2718a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2718a4: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2718a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2718a8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2718a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2718ac: 0x90aa0005  lbu         $t2, 0x5($a1)
    ctx->pc = 0x2718acu;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x2718b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2718b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2718b4: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x2718b4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2718b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2718b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2718bc: 0x90ae0002  lbu         $t6, 0x2($a1)
    ctx->pc = 0x2718bcu;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2718c0: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x2718c0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x2718c4: 0x90ad0001  lbu         $t5, 0x1($a1)
    ctx->pc = 0x2718c4u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x2718c8: 0x63638  dsll        $a2, $a2, 24
    ctx->pc = 0x2718c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 24);
    // 0x2718cc: 0x90a70004  lbu         $a3, 0x4($a1)
    ctx->pc = 0x2718ccu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2718d0: 0xe7238  dsll        $t6, $t6, 8
    ctx->pc = 0x2718d0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << 8);
    // 0x2718d4: 0x90af0006  lbu         $t7, 0x6($a1)
    ctx->pc = 0x2718d4u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x2718d8: 0xd6c38  dsll        $t5, $t5, 16
    ctx->pc = 0x2718d8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 16);
    // 0x2718dc: 0x90ac0003  lbu         $t4, 0x3($a1)
    ctx->pc = 0x2718dcu;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x2718e0: 0x73e38  dsll        $a3, $a3, 24
    ctx->pc = 0x2718e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 24);
    // 0x2718e4: 0x90ab0007  lbu         $t3, 0x7($a1)
    ctx->pc = 0x2718e4u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 7)));
    // 0x2718e8: 0xf7a38  dsll        $t7, $t7, 8
    ctx->pc = 0x2718e8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << 8);
    // 0x2718ec: 0x1cd7025  or          $t6, $t6, $t5
    ctx->pc = 0x2718ecu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x2718f0: 0x1ea7825  or          $t7, $t7, $t2
    ctx->pc = 0x2718f0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 10));
    // 0x2718f4: 0xcc3025  or          $a2, $a2, $t4
    ctx->pc = 0x2718f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 12));
    // 0x2718f8: 0xeb3825  or          $a3, $a3, $t3
    ctx->pc = 0x2718f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 11));
    // 0x2718fc: 0xce3025  or          $a2, $a2, $t6
    ctx->pc = 0x2718fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 14));
    // 0x271900: 0xef3825  or          $a3, $a3, $t7
    ctx->pc = 0x271900u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 15));
    // 0x271904: 0xc09c40e  jal         func_271038
    ctx->pc = 0x271904u;
    SET_GPR_U32(ctx, 31, 0x27190Cu);
    ctx->pc = 0x271908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271904u;
    // 0x271908: 0x27a50008  addiu       $a1, $sp, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271038u, 0x271904u, 0x27190Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27190Cu;
label_27190c:
    // 0x27190c: 0xdfa60000  ld          $a2, 0x0($sp)
    ctx->pc = 0x27190cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x271910: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x271910u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271914: 0xdfa70008  ld          $a3, 0x8($sp)
    ctx->pc = 0x271914u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x271918: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x271918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x27191c: 0xc09c5ae  jal         func_2716B8
    ctx->pc = 0x27191Cu;
    SET_GPR_U32(ctx, 31, 0x271924u);
    ctx->pc = 0x271920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27191Cu;
    // 0x271920: 0x27a50018  addiu       $a1, $sp, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2716B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2716B8u, 0x27191Cu, 0x271924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271924u;
label_271924:
    // 0x271924: 0xdfa60018  ld          $a2, 0x18($sp)
    ctx->pc = 0x271924u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x271928: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x271928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27192c: 0xdfa70010  ld          $a3, 0x10($sp)
    ctx->pc = 0x27192cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x271930: 0xc09c44c  jal         func_271130
    ctx->pc = 0x271930u;
    SET_GPR_U32(ctx, 31, 0x271938u);
    ctx->pc = 0x271934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271930u;
    // 0x271934: 0x27a50028  addiu       $a1, $sp, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271130u, 0x271930u, 0x271938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271938u;
label_271938:
    // 0x271938: 0xdfad0020  ld          $t5, 0x20($sp)
    ctx->pc = 0x271938u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27193c: 0x240c00ff  addiu       $t4, $zero, 0xFF
    ctx->pc = 0x27193cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x271940: 0xdfaf0028  ld          $t7, 0x28($sp)
    ctx->pc = 0x271940u;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x271944: 0xc6638  dsll        $t4, $t4, 24
    ctx->pc = 0x271944u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 24);
    // 0x271948: 0x3c0e00ff  lui         $t6, 0xFF
    ctx->pc = 0x271948u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)255 << 16));
    // 0x27194c: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x27194cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x271950: 0x1ac5024  and         $t2, $t5, $t4
    ctx->pc = 0x271950u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 13) & GPR_U64(ctx, 12));
    // 0x271954: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x271954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x271958: 0x1ae4824  and         $t1, $t5, $t6
    ctx->pc = 0x271958u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 13) & GPR_U64(ctx, 14));
    // 0x27195c: 0x1ec6024  and         $t4, $t7, $t4
    ctx->pc = 0x27195cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 15) & GPR_U64(ctx, 12));
    // 0x271960: 0x1ee7024  and         $t6, $t7, $t6
    ctx->pc = 0x271960u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 15) & GPR_U64(ctx, 14));
    // 0x271964: 0x31abff00  andi        $t3, $t5, 0xFF00
    ctx->pc = 0x271964u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)65280);
    // 0x271968: 0x31e8ff00  andi        $t0, $t7, 0xFF00
    ctx->pc = 0x271968u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)65280);
    // 0x27196c: 0xa563a  dsrl        $t2, $t2, 24
    ctx->pc = 0x27196cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) >> 24);
    // 0x271970: 0x94c3a  dsrl        $t1, $t1, 16
    ctx->pc = 0x271970u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> 16);
    // 0x271974: 0xb5a3a  dsrl        $t3, $t3, 8
    ctx->pc = 0x271974u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) >> 8);
    // 0x271978: 0x31ad00ff  andi        $t5, $t5, 0xFF
    ctx->pc = 0x271978u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)255);
    // 0x27197c: 0xc663a  dsrl        $t4, $t4, 24
    ctx->pc = 0x27197cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) >> 24);
    // 0x271980: 0xe743a  dsrl        $t6, $t6, 16
    ctx->pc = 0x271980u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> 16);
    // 0x271984: 0x8423a  dsrl        $t0, $t0, 8
    ctx->pc = 0x271984u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> 8);
    // 0x271988: 0x31ef00ff  andi        $t7, $t7, 0xFF
    ctx->pc = 0x271988u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)255);
    // 0x27198c: 0x314a00ff  andi        $t2, $t2, 0xFF
    ctx->pc = 0x27198cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x271990: 0x312900ff  andi        $t1, $t1, 0xFF
    ctx->pc = 0x271990u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x271994: 0xa20a0000  sb          $t2, 0x0($s0)
    ctx->pc = 0x271994u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 10));
    // 0x271998: 0x316b00ff  andi        $t3, $t3, 0xFF
    ctx->pc = 0x271998u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
    // 0x27199c: 0xa2090001  sb          $t1, 0x1($s0)
    ctx->pc = 0x27199cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 9));
    // 0x2719a0: 0x31ad00ff  andi        $t5, $t5, 0xFF
    ctx->pc = 0x2719a0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)255);
    // 0x2719a4: 0xa20b0002  sb          $t3, 0x2($s0)
    ctx->pc = 0x2719a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 11));
    // 0x2719a8: 0x318c00ff  andi        $t4, $t4, 0xFF
    ctx->pc = 0x2719a8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)255);
    // 0x2719ac: 0xa20d0003  sb          $t5, 0x3($s0)
    ctx->pc = 0x2719acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 13));
    // 0x2719b0: 0x31ce00ff  andi        $t6, $t6, 0xFF
    ctx->pc = 0x2719b0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)255);
    // 0x2719b4: 0xa20c0004  sb          $t4, 0x4($s0)
    ctx->pc = 0x2719b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 12));
    // 0x2719b8: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x2719b8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x2719bc: 0xa20e0005  sb          $t6, 0x5($s0)
    ctx->pc = 0x2719bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 14));
    // 0x2719c0: 0x31ef00ff  andi        $t7, $t7, 0xFF
    ctx->pc = 0x2719c0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)255);
    // 0x2719c4: 0xa2080006  sb          $t0, 0x6($s0)
    ctx->pc = 0x2719c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 8));
    // 0x2719c8: 0xa20f0007  sb          $t7, 0x7($s0)
    ctx->pc = 0x2719c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 15));
    // 0x2719cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2719ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2719d0: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2719d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2719d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2719D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2719D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2719D4u;
        // 0x2719d8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2719D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2719DCu;
    // 0x2719dc: 0x0  nop
    ctx->pc = 0x2719dcu;
    // NOP
}
