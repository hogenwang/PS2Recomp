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

// Function: sub_002C68E8
// Address: 0x2c68e8 - 0x2c6978
void sub_002C68E8_0x2c68e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C68E8_0x2c68e8");
#endif

    switch (ctx->pc) {
        case 0x2c6920u: goto label_2c6920;
        case 0x2c693cu: goto label_2c693c;
        default: break;
    }

    ctx->pc = 0x2c68e8u;

    // 0x2c68e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c68e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c68ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c68ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c68f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c68f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c68f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2c68f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2c68f8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2c68f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c68fc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2c68fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2c6900: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2c6900u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6904: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2c6904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2c6908: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2c6908u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c690c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c690cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c6910: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C6910u;
    {
        const bool branch_taken_0x2c6910 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C6914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6910u;
        // 0x2c6914: 0x2404002c  addiu       $a0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6910) {
            ctx->pc = 0x2C692Cu;
            goto label_2c692c;
        }
    }
    ctx->pc = 0x2C6918u;
    // 0x2c6918: 0xc0b60b8  jal         func_2D82E0
    ctx->pc = 0x2C6918u;
    SET_GPR_U32(ctx, 31, 0x2C6920u);
    ctx->pc = 0x2D82E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D82E0u, 0x2C6918u, 0x2C6920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6920u;
label_2c6920:
    // 0x2c6920: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c6920u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6924: 0x5200000d  beql        $s0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2C6924u;
    {
        const bool branch_taken_0x2c6924 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6924) {
            ctx->pc = 0x2C6928u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C6924u;
            // 0x2c6928: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C695Cu;
            goto label_2c695c;
        }
    }
    ctx->pc = 0x2C692Cu;
label_2c692c:
    // 0x2c692c: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x2c692cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x2c6930: 0x2604001c  addiu       $a0, $s0, 0x1C
    ctx->pc = 0x2c6930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x2c6934: 0xc0b5f28  jal         func_2D7CA0
    ctx->pc = 0x2C6934u;
    SET_GPR_U32(ctx, 31, 0x2C693Cu);
    ctx->pc = 0x2C6938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6934u;
    // 0x2c6938: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7CA0u, 0x2C6934u, 0x2C693Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C693Cu;
label_2c693c:
    // 0x2c693c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2c693cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x2c6940: 0x24426b40  addiu       $v0, $v0, 0x6B40
    ctx->pc = 0x2c6940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27456));
    // 0x2c6944: 0xae120010  sw          $s2, 0x10($s0)
    ctx->pc = 0x2c6944u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 18));
    // 0x2c6948: 0xae130014  sw          $s3, 0x14($s0)
    ctx->pc = 0x2c6948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 19));
    // 0x2c694c: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x2c694cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x2c6950: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x2c6950u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x2c6954: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c6954u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6958: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c6958u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c695c:
    // 0x2c695c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c695cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c6960: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2c6960u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c6964: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2c6964u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c6968: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c6968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c696c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C696Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C696Cu;
        // 0x2c6970: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C696Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C6974u;
    // 0x2c6974: 0x0  nop
    ctx->pc = 0x2c6974u;
    // NOP
    if (ctx->pc == 0x2c6974u) { ctx->pc = 0x2c6978u; }
}
