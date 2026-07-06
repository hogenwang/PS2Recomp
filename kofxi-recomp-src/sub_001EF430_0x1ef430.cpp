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

// Function: sub_001EF430
// Address: 0x1ef430 - 0x1ef4e0
void sub_001EF430_0x1ef430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EF430_0x1ef430");
#endif

    switch (ctx->pc) {
        case 0x1ef470u: goto label_1ef470;
        case 0x1ef484u: goto label_1ef484;
        default: break;
    }

    ctx->pc = 0x1ef430u;

    // 0x1ef430: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ef430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1ef434: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1ef434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1ef438: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ef438u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef43c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1ef43cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1ef440: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ef440u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef444: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1ef444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1ef448: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ef448u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef44c: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x1ef44cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x1ef450: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1ef450u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef454: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x1ef454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x1ef458: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x1ef458u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef45c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1ef45cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x1ef460: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1ef460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1ef464: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x1ef464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x1ef468: 0x8c931fd4  lw          $s3, 0x1FD4($a0)
    ctx->pc = 0x1ef468u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8148)));
    // 0x1ef46c: 0x8e740000  lw          $s4, 0x0($s3)
    ctx->pc = 0x1ef46cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1ef470:
    // 0x1ef470: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ef470u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef474: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ef474u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1ef478: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1ef478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef47c: 0xc0760f2  jal         func_1D83C8
    ctx->pc = 0x1EF47Cu;
    SET_GPR_U32(ctx, 31, 0x1EF484u);
    ctx->pc = 0x1EF480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF47Cu;
    // 0x1ef480: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D83C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D83C8u, 0x1EF47Cu, 0x1EF484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF484u;
label_1ef484:
    // 0x1ef484: 0x2a060003  slti        $a2, $s0, 0x3
    ctx->pc = 0x1ef484u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1ef488: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x1ef488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ef48c: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x1ef48cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1ef490: 0x92102a  slt         $v0, $a0, $s2
    ctx->pc = 0x1ef490u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1ef494: 0xb1182a  slt         $v1, $a1, $s1
    ctx->pc = 0x1ef494u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1ef498: 0x82900a  movz        $s2, $a0, $v0
    ctx->pc = 0x1ef498u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 4));
    // 0x1ef49c: 0x14c0fff4  bnez        $a2, . + 4 + (-0xC << 2)
    ctx->pc = 0x1EF49Cu;
    {
        const bool branch_taken_0x1ef49c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF49Cu;
        // 0x1ef4a0: 0xa3880a  movz        $s1, $a1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef49c) {
            ctx->pc = 0x1EF470u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ef470;
        }
    }
    ctx->pc = 0x1EF4A4u;
    // 0x1ef4a4: 0xae710004  sw          $s1, 0x4($s3)
    ctx->pc = 0x1ef4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 17));
    // 0x1ef4a8: 0xae720008  sw          $s2, 0x8($s3)
    ctx->pc = 0x1ef4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 18));
    // 0x1ef4ac: 0xaeb20000  sw          $s2, 0x0($s5)
    ctx->pc = 0x1ef4acu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 18));
    // 0x1ef4b0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1ef4b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ef4b4: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1ef4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1ef4b8: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1ef4b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef4bc: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x1ef4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x1ef4c0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1ef4c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ef4c4: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1ef4c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ef4c8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1ef4c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ef4cc: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x1ef4ccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ef4d0: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x1ef4d0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ef4d4: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1ef4d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ef4d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF4D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF4D8u;
        // 0x1ef4dc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF4D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EF4E0u;
}
