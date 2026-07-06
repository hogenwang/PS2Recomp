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

// Function: sub_002C62D0
// Address: 0x2c62d0 - 0x2c6358
void sub_002C62D0_0x2c62d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C62D0_0x2c62d0");
#endif

    switch (ctx->pc) {
        case 0x2c6308u: goto label_2c6308;
        case 0x2c6324u: goto label_2c6324;
        default: break;
    }

    ctx->pc = 0x2c62d0u;

    // 0x2c62d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c62d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c62d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c62d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c62d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c62d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c62dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2c62dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2c62e0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2c62e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c62e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2c62e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2c62e8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2c62e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c62ec: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2c62ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2c62f0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2c62f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c62f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c62f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c62f8: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C62F8u;
    {
        const bool branch_taken_0x2c62f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C62FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C62F8u;
        // 0x2c62fc: 0x24040028  addiu       $a0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c62f8) {
            ctx->pc = 0x2C6314u;
            goto label_2c6314;
        }
    }
    ctx->pc = 0x2C6300u;
    // 0x2c6300: 0xc0b60b8  jal         func_2D82E0
    ctx->pc = 0x2C6300u;
    SET_GPR_U32(ctx, 31, 0x2C6308u);
    ctx->pc = 0x2D82E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D82E0u, 0x2C6300u, 0x2C6308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6308u;
label_2c6308:
    // 0x2c6308: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c6308u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c630c: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2C630Cu;
    {
        const bool branch_taken_0x2c630c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c630c) {
            ctx->pc = 0x2C6310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C630Cu;
            // 0x2c6310: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C6340u;
            goto label_2c6340;
        }
    }
    ctx->pc = 0x2C6314u;
label_2c6314:
    // 0x2c6314: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x2c6314u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x2c6318: 0x2604001c  addiu       $a0, $s0, 0x1C
    ctx->pc = 0x2c6318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x2c631c: 0xc0b5f28  jal         func_2D7CA0
    ctx->pc = 0x2C631Cu;
    SET_GPR_U32(ctx, 31, 0x2C6324u);
    ctx->pc = 0x2C6320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C631Cu;
    // 0x2c6320: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7CA0u, 0x2C631Cu, 0x2C6324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6324u;
label_2c6324:
    // 0x2c6324: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2c6324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x2c6328: 0x24426410  addiu       $v0, $v0, 0x6410
    ctx->pc = 0x2c6328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25616));
    // 0x2c632c: 0xae120010  sw          $s2, 0x10($s0)
    ctx->pc = 0x2c632cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 18));
    // 0x2c6330: 0xae130014  sw          $s3, 0x14($s0)
    ctx->pc = 0x2c6330u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 19));
    // 0x2c6334: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x2c6334u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x2c6338: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c6338u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c633c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c633cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c6340:
    // 0x2c6340: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c6340u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c6344: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2c6344u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c6348: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2c6348u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c634c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c634cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c6350: 0x3e00008  jr          $ra
    ctx->pc = 0x2C6350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6350u;
        // 0x2c6354: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C6350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C6358u;
}
