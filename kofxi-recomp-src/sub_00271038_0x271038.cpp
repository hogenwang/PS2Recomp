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

// Function: sub_00271038
// Address: 0x271038 - 0x271130
void sub_00271038_0x271038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00271038_0x271038");
#endif

    switch (ctx->pc) {
        case 0x2710f8u: goto label_2710f8;
        case 0x271104u: goto label_271104;
        default: break;
    }

    ctx->pc = 0x271038u;

    // 0x271038: 0x7793a  dsrl        $t7, $a3, 4
    ctx->pc = 0x271038u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 7) >> 4);
    // 0x27103c: 0x3c0e0f0f  lui         $t6, 0xF0F
    ctx->pc = 0x27103cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)3855 << 16));
    // 0x271040: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x271040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x271044: 0x1e67826  xor         $t7, $t7, $a2
    ctx->pc = 0x271044u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) ^ GPR_U64(ctx, 6));
    // 0x271048: 0x35ce0f0f  ori         $t6, $t6, 0xF0F
    ctx->pc = 0x271048u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)3855);
    // 0x27104c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27104cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x271050: 0x1ee7824  and         $t7, $t7, $t6
    ctx->pc = 0x271050u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 14));
    // 0x271054: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x271054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x271058: 0xf6938  dsll        $t5, $t7, 4
    ctx->pc = 0x271058u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 15) << 4);
    // 0x27105c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x27105cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x271060: 0xcf3026  xor         $a2, $a2, $t7
    ctx->pc = 0x271060u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 15));
    // 0x271064: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x271064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x271068: 0xed8026  xor         $s0, $a3, $t5
    ctx->pc = 0x271068u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 13));
    // 0x27106c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x27106cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x271070: 0x67c3a  dsrl        $t7, $a2, 16
    ctx->pc = 0x271070u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 6) >> 16);
    // 0x271074: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x271074u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271078: 0x1f07826  xor         $t7, $t7, $s0
    ctx->pc = 0x271078u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) ^ GPR_U64(ctx, 16));
    // 0x27107c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x27107cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271080: 0x31efffff  andi        $t7, $t7, 0xFFFF
    ctx->pc = 0x271080u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)65535);
    // 0x271084: 0xf7438  dsll        $t6, $t7, 16
    ctx->pc = 0x271084u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 15) << 16);
    // 0x271088: 0x20f8026  xor         $s0, $s0, $t7
    ctx->pc = 0x271088u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 15));
    // 0x27108c: 0xce3026  xor         $a2, $a2, $t6
    ctx->pc = 0x27108cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 14));
    // 0x271090: 0x1078ba  dsrl        $t7, $s0, 2
    ctx->pc = 0x271090u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 16) >> 2);
    // 0x271094: 0x3c0e3333  lui         $t6, 0x3333
    ctx->pc = 0x271094u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)13107 << 16));
    // 0x271098: 0x1e67826  xor         $t7, $t7, $a2
    ctx->pc = 0x271098u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) ^ GPR_U64(ctx, 6));
    // 0x27109c: 0x35ce3333  ori         $t6, $t6, 0x3333
    ctx->pc = 0x27109cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)13107);
    // 0x2710a0: 0x1ee7824  and         $t7, $t7, $t6
    ctx->pc = 0x2710a0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 14));
    // 0x2710a4: 0xf68b8  dsll        $t5, $t7, 2
    ctx->pc = 0x2710a4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 15) << 2);
    // 0x2710a8: 0xcf3026  xor         $a2, $a2, $t7
    ctx->pc = 0x2710a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 15));
    // 0x2710ac: 0x20d8026  xor         $s0, $s0, $t5
    ctx->pc = 0x2710acu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 13));
    // 0x2710b0: 0x67a3a  dsrl        $t7, $a2, 8
    ctx->pc = 0x2710b0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 6) >> 8);
    // 0x2710b4: 0x3c0e00ff  lui         $t6, 0xFF
    ctx->pc = 0x2710b4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)255 << 16));
    // 0x2710b8: 0x1f07826  xor         $t7, $t7, $s0
    ctx->pc = 0x2710b8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) ^ GPR_U64(ctx, 16));
    // 0x2710bc: 0x35ce00ff  ori         $t6, $t6, 0xFF
    ctx->pc = 0x2710bcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)255);
    // 0x2710c0: 0x1ee7824  and         $t7, $t7, $t6
    ctx->pc = 0x2710c0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 14));
    // 0x2710c4: 0xf6a38  dsll        $t5, $t7, 8
    ctx->pc = 0x2710c4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 15) << 8);
    // 0x2710c8: 0x20f8026  xor         $s0, $s0, $t7
    ctx->pc = 0x2710c8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 15));
    // 0x2710cc: 0xcd3026  xor         $a2, $a2, $t5
    ctx->pc = 0x2710ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 13));
    // 0x2710d0: 0x10787a  dsrl        $t7, $s0, 1
    ctx->pc = 0x2710d0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 16) >> 1);
    // 0x2710d4: 0x3c0e5555  lui         $t6, 0x5555
    ctx->pc = 0x2710d4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)21845 << 16));
    // 0x2710d8: 0x1e67826  xor         $t7, $t7, $a2
    ctx->pc = 0x2710d8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) ^ GPR_U64(ctx, 6));
    // 0x2710dc: 0x35ce5555  ori         $t6, $t6, 0x5555
    ctx->pc = 0x2710dcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)21845);
    // 0x2710e0: 0x1ee7824  and         $t7, $t7, $t6
    ctx->pc = 0x2710e0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 14));
    // 0x2710e4: 0xf6878  dsll        $t5, $t7, 1
    ctx->pc = 0x2710e4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 15) << 1);
    // 0x2710e8: 0xcf3026  xor         $a2, $a2, $t7
    ctx->pc = 0x2710e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 15));
    // 0x2710ec: 0x20d8026  xor         $s0, $s0, $t5
    ctx->pc = 0x2710ecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 13));
    // 0x2710f0: 0xc09c38e  jal         func_270E38
    ctx->pc = 0x2710F0u;
    SET_GPR_U32(ctx, 31, 0x2710F8u);
    ctx->pc = 0x2710F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2710F0u;
    // 0x2710f4: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270E38u, 0x2710F0u, 0x2710F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2710F8u;
label_2710f8:
    // 0x2710f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2710f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2710fc: 0xc09c38e  jal         func_270E38
    ctx->pc = 0x2710FCu;
    SET_GPR_U32(ctx, 31, 0x271104u);
    ctx->pc = 0x271100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2710FCu;
    // 0x271100: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270E38u, 0x2710FCu, 0x271104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271104u;
label_271104:
    // 0x271104: 0xfe620000  sd          $v0, 0x0($s3)
    ctx->pc = 0x271104u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 2));
    // 0x271108: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x271108u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27110c: 0xfe510000  sd          $s1, 0x0($s2)
    ctx->pc = 0x27110cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 17));
    // 0x271110: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x271110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271114: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x271114u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x271118: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x271118u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27111c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x27111cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x271120: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x271120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x271124: 0x3e00008  jr          $ra
    ctx->pc = 0x271124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x271128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271124u;
        // 0x271128: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27112Cu;
    // 0x27112c: 0x0  nop
    ctx->pc = 0x27112cu;
    // NOP
}
