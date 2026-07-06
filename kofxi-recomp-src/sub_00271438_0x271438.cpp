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

// Function: sub_00271438
// Address: 0x271438 - 0x271588
void sub_00271438_0x271438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00271438_0x271438");
#endif

    switch (ctx->pc) {
        case 0x27154cu: goto label_27154c;
        case 0x271558u: goto label_271558;
        default: break;
    }

    ctx->pc = 0x271438u;

    // 0x271438: 0x7793a  dsrl        $t7, $a3, 4
    ctx->pc = 0x271438u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 7) >> 4);
    // 0x27143c: 0x3c0e0f0f  lui         $t6, 0xF0F
    ctx->pc = 0x27143cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)3855 << 16));
    // 0x271440: 0x1e67826  xor         $t7, $t7, $a2
    ctx->pc = 0x271440u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) ^ GPR_U64(ctx, 6));
    // 0x271444: 0x35ce0f0f  ori         $t6, $t6, 0xF0F
    ctx->pc = 0x271444u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)3855);
    // 0x271448: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x271448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27144c: 0x1ee5024  and         $t2, $t7, $t6
    ctx->pc = 0x27144cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 15) & GPR_U64(ctx, 14));
    // 0x271450: 0xca3026  xor         $a2, $a2, $t2
    ctx->pc = 0x271450u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 10));
    // 0x271454: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x271454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x271458: 0xa7138  dsll        $t6, $t2, 4
    ctx->pc = 0x271458u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 10) << 4);
    // 0x27145c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x27145cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x271460: 0x67cb8  dsll        $t7, $a2, 18
    ctx->pc = 0x271460u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 6) << 18);
    // 0x271464: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x271464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x271468: 0x240d3333  addiu       $t5, $zero, 0x3333
    ctx->pc = 0x271468u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 13107));
    // 0x27146c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x27146cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x271470: 0xee9826  xor         $s3, $a3, $t6
    ctx->pc = 0x271470u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 14));
    // 0x271474: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x271474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x271478: 0xd6cb8  dsll        $t5, $t5, 18
    ctx->pc = 0x271478u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 18);
    // 0x27147c: 0x1e67826  xor         $t7, $t7, $a2
    ctx->pc = 0x27147cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) ^ GPR_U64(ctx, 6));
    // 0x271480: 0x1ed5024  and         $t2, $t7, $t5
    ctx->pc = 0x271480u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 15) & GPR_U64(ctx, 13));
    // 0x271484: 0x1374b8  dsll        $t6, $s3, 18
    ctx->pc = 0x271484u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 19) << 18);
    // 0x271488: 0x1d37026  xor         $t6, $t6, $s3
    ctx->pc = 0x271488u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) ^ GPR_U64(ctx, 19));
    // 0x27148c: 0xca6026  xor         $t4, $a2, $t2
    ctx->pc = 0x27148cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 10));
    // 0x271490: 0xa7cba  dsrl        $t7, $t2, 18
    ctx->pc = 0x271490u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 10) >> 18);
    // 0x271494: 0x3c0b5555  lui         $t3, 0x5555
    ctx->pc = 0x271494u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)21845 << 16));
    // 0x271498: 0x1cd5024  and         $t2, $t6, $t5
    ctx->pc = 0x271498u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 14) & GPR_U64(ctx, 13));
    // 0x27149c: 0x18f3026  xor         $a2, $t4, $t7
    ctx->pc = 0x27149cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 12) ^ GPR_U64(ctx, 15));
    // 0x2714a0: 0x26a6826  xor         $t5, $s3, $t2
    ctx->pc = 0x2714a0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 19) ^ GPR_U64(ctx, 10));
    // 0x2714a4: 0xa74ba  dsrl        $t6, $t2, 18
    ctx->pc = 0x2714a4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 10) >> 18);
    // 0x2714a8: 0x1ae9826  xor         $s3, $t5, $t6
    ctx->pc = 0x2714a8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 13) ^ GPR_U64(ctx, 14));
    // 0x2714ac: 0x356b5555  ori         $t3, $t3, 0x5555
    ctx->pc = 0x2714acu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)21845);
    // 0x2714b0: 0x13787a  dsrl        $t7, $s3, 1
    ctx->pc = 0x2714b0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 19) >> 1);
    // 0x2714b4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2714b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2714b8: 0x1e67826  xor         $t7, $t7, $a2
    ctx->pc = 0x2714b8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) ^ GPR_U64(ctx, 6));
    // 0x2714bc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2714bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2714c0: 0x1eb5024  and         $t2, $t7, $t3
    ctx->pc = 0x2714c0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 15) & GPR_U64(ctx, 11));
    // 0x2714c4: 0xa7078  dsll        $t6, $t2, 1
    ctx->pc = 0x2714c4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 10) << 1);
    // 0x2714c8: 0xca3026  xor         $a2, $a2, $t2
    ctx->pc = 0x2714c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 10));
    // 0x2714cc: 0x26e9826  xor         $s3, $s3, $t6
    ctx->pc = 0x2714ccu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) ^ GPR_U64(ctx, 14));
    // 0x2714d0: 0x67a3a  dsrl        $t7, $a2, 8
    ctx->pc = 0x2714d0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 6) >> 8);
    // 0x2714d4: 0x3c0e00ff  lui         $t6, 0xFF
    ctx->pc = 0x2714d4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)255 << 16));
    // 0x2714d8: 0x1f37826  xor         $t7, $t7, $s3
    ctx->pc = 0x2714d8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) ^ GPR_U64(ctx, 19));
    // 0x2714dc: 0x35ce00ff  ori         $t6, $t6, 0xFF
    ctx->pc = 0x2714dcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)255);
    // 0x2714e0: 0x1ee5024  and         $t2, $t7, $t6
    ctx->pc = 0x2714e0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 15) & GPR_U64(ctx, 14));
    // 0x2714e4: 0xa6a38  dsll        $t5, $t2, 8
    ctx->pc = 0x2714e4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 10) << 8);
    // 0x2714e8: 0x26a9826  xor         $s3, $s3, $t2
    ctx->pc = 0x2714e8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) ^ GPR_U64(ctx, 10));
    // 0x2714ec: 0xcd3026  xor         $a2, $a2, $t5
    ctx->pc = 0x2714ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 13));
    // 0x2714f0: 0x13787a  dsrl        $t7, $s3, 1
    ctx->pc = 0x2714f0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 19) >> 1);
    // 0x2714f4: 0x1e67826  xor         $t7, $t7, $a2
    ctx->pc = 0x2714f4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) ^ GPR_U64(ctx, 6));
    // 0x2714f8: 0x1eb5024  and         $t2, $t7, $t3
    ctx->pc = 0x2714f8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 15) & GPR_U64(ctx, 11));
    // 0x2714fc: 0xa7078  dsll        $t6, $t2, 1
    ctx->pc = 0x2714fcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 10) << 1);
    // 0x271500: 0x240f000f  addiu       $t7, $zero, 0xF
    ctx->pc = 0x271500u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x271504: 0xca3026  xor         $a2, $a2, $t2
    ctx->pc = 0x271504u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 10));
    // 0x271508: 0x26e9826  xor         $s3, $s3, $t6
    ctx->pc = 0x271508u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) ^ GPR_U64(ctx, 14));
    // 0x27150c: 0xf7f38  dsll        $t7, $t7, 28
    ctx->pc = 0x27150cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << 28);
    // 0x271510: 0x326d00ff  andi        $t5, $s3, 0xFF
    ctx->pc = 0x271510u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x271514: 0xcf7824  and         $t7, $a2, $t7
    ctx->pc = 0x271514u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 6) & GPR_U64(ctx, 15));
    // 0x271518: 0xd6c38  dsll        $t5, $t5, 16
    ctx->pc = 0x271518u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 16);
    // 0x27151c: 0xf793a  dsrl        $t7, $t7, 4
    ctx->pc = 0x27151cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> 4);
    // 0x271520: 0x13743a  dsrl        $t6, $s3, 16
    ctx->pc = 0x271520u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 19) >> 16);
    // 0x271524: 0x1af6825  or          $t5, $t5, $t7
    ctx->pc = 0x271524u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 15));
    // 0x271528: 0x326cff00  andi        $t4, $s3, 0xFF00
    ctx->pc = 0x271528u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65280);
    // 0x27152c: 0x3c0f0fff  lui         $t7, 0xFFF
    ctx->pc = 0x27152cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)4095 << 16));
    // 0x271530: 0x31ce00ff  andi        $t6, $t6, 0xFF
    ctx->pc = 0x271530u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)255);
    // 0x271534: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x271534u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x271538: 0x1cc7025  or          $t6, $t6, $t4
    ctx->pc = 0x271538u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 12));
    // 0x27153c: 0xcf3024  and         $a2, $a2, $t7
    ctx->pc = 0x27153cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 15));
    // 0x271540: 0x1ae9825  or          $s3, $t5, $t6
    ctx->pc = 0x271540u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 13) | GPR_U64(ctx, 14));
    // 0x271544: 0xc09c38e  jal         func_270E38
    ctx->pc = 0x271544u;
    SET_GPR_U32(ctx, 31, 0x27154Cu);
    ctx->pc = 0x271548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271544u;
    // 0x271548: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270E38u, 0x271544u, 0x27154Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27154Cu;
label_27154c:
    // 0x27154c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27154cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271550: 0xc09c38e  jal         func_270E38
    ctx->pc = 0x271550u;
    SET_GPR_U32(ctx, 31, 0x271558u);
    ctx->pc = 0x271554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271550u;
    // 0x271554: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270E38u, 0x271550u, 0x271558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271558u;
label_271558:
    // 0x271558: 0x10813a  dsrl        $s0, $s0, 4
    ctx->pc = 0x271558u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 4);
    // 0x27155c: 0xfe500000  sd          $s0, 0x0($s2)
    ctx->pc = 0x27155cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 16));
    // 0x271560: 0x2793a  dsrl        $t7, $v0, 4
    ctx->pc = 0x271560u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> 4);
    // 0x271564: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x271564u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x271568: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x271568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27156c: 0xfe2f0000  sd          $t7, 0x0($s1)
    ctx->pc = 0x27156cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 15));
    // 0x271570: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x271570u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x271574: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x271574u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x271578: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x271578u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27157c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x27157cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x271580: 0x3e00008  jr          $ra
    ctx->pc = 0x271580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x271584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271580u;
        // 0x271584: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x271588u;
}
