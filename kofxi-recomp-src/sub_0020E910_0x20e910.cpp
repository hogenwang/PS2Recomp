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

// Function: sub_0020E910
// Address: 0x20e910 - 0x20e990
void sub_0020E910_0x20e910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020E910_0x20e910");
#endif

    switch (ctx->pc) {
        case 0x20e944u: goto label_20e944;
        case 0x20e958u: goto label_20e958;
        default: break;
    }

    ctx->pc = 0x20e910u;

    // 0x20e910: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x20e910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x20e914: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x20e914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x20e918: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x20e918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x20e91c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x20e91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x20e920: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x20e920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x20e924: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x20e924u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e928: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20e928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20e92c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x20e92cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e930: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20e930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20e934: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x20e934u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e938: 0x94c40000  lhu         $a0, 0x0($a2)
    ctx->pc = 0x20e938u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x20e93c: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x20E93Cu;
    {
        const bool branch_taken_0x20e93c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x20E940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E93Cu;
        // 0x20e940: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e93c) {
            ctx->pc = 0x20E970u;
            goto label_20e970;
        }
    }
    ctx->pc = 0x20E944u;
label_20e944:
    // 0x20e944: 0x2133026  xor         $a2, $s0, $s3
    ctx->pc = 0x20e944u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 19));
    // 0x20e948: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20e948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e94c: 0x2cc60001  sltiu       $a2, $a2, 0x1
    ctx->pc = 0x20e94cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x20e950: 0xc083a08  jal         func_20E820
    ctx->pc = 0x20E950u;
    SET_GPR_U32(ctx, 31, 0x20E958u);
    ctx->pc = 0x20E954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E950u;
    // 0x20e954: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E820u, 0x20E950u, 0x20E958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E958u;
label_20e958:
    // 0x20e958: 0x26310014  addiu       $s1, $s1, 0x14
    ctx->pc = 0x20e958u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x20e95c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x20e95cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x20e960: 0x96240000  lhu         $a0, 0x0($s1)
    ctx->pc = 0x20e960u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x20e964: 0x1483fff7  bne         $a0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x20E964u;
    {
        const bool branch_taken_0x20e964 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x20E968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E964u;
        // 0x20e968: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e964) {
            ctx->pc = 0x20E944u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20e944;
        }
    }
    ctx->pc = 0x20E96Cu;
    // 0x20e96c: 0x0  nop
    ctx->pc = 0x20e96cu;
    // NOP
label_20e970:
    // 0x20e970: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x20e970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20e974: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x20e974u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20e978: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x20e978u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20e97c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20e97cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20e980: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20e980u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20e984: 0x3e00008  jr          $ra
    ctx->pc = 0x20E984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E984u;
        // 0x20e988: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20E98Cu;
    // 0x20e98c: 0x0  nop
    ctx->pc = 0x20e98cu;
    // NOP
}
