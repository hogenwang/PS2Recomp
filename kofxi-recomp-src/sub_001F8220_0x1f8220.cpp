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

// Function: sub_001F8220
// Address: 0x1f8220 - 0x1f8290
void sub_001F8220_0x1f8220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8220_0x1f8220");
#endif

    switch (ctx->pc) {
        case 0x1f8254u: goto label_1f8254;
        case 0x1f8274u: goto label_1f8274;
        default: break;
    }

    ctx->pc = 0x1f8220u;

    // 0x1f8220: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f8220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f8224: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1f8224u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8228: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1f8228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1f822c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x1f822cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1f8230: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1f8230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1f8234: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f8234u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8238: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f8238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f823c: 0x8c700a5c  lw          $s0, 0xA5C($v1)
    ctx->pc = 0x1f823cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2652)));
    // 0x1f8240: 0x1205000d  beq         $s0, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x1F8240u;
    {
        const bool branch_taken_0x1f8240 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x1F8244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8240u;
        // 0x1f8244: 0x8c710a60  lw          $s1, 0xA60($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2656)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8240) {
            ctx->pc = 0x1F8278u;
            goto label_1f8278;
        }
    }
    ctx->pc = 0x1F8248u;
    // 0x1f8248: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x1f8248u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1f824c: 0xc07ef96  jal         func_1FBE58
    ctx->pc = 0x1F824Cu;
    SET_GPR_U32(ctx, 31, 0x1F8254u);
    ctx->pc = 0x1F8250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F824Cu;
    // 0x1f8250: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE58u, 0x1F824Cu, 0x1F8254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8254u;
label_1f8254:
    // 0x1f8254: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f8254u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8258: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1f8258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f825c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1f825cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8260: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1f8260u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8264: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8264u;
    {
        const bool branch_taken_0x1f8264 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1F8268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8264u;
        // 0x1f8268: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8264) {
            ctx->pc = 0x1F8278u;
            goto label_1f8278;
        }
    }
    ctx->pc = 0x1F826Cu;
    // 0x1f826c: 0xc073fee  jal         func_1CFFB8
    ctx->pc = 0x1F826Cu;
    SET_GPR_U32(ctx, 31, 0x1F8274u);
    ctx->pc = 0x1F8270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F826Cu;
    // 0x1f8270: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFFB8u, 0x1F826Cu, 0x1F8274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8274u;
label_1f8274:
    // 0x1f8274: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1f8274u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1f8278:
    // 0x1f8278: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f8278u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f827c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1f827cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8280: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f8280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f8284: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8284u;
        // 0x1f8288: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8284u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F828Cu;
    // 0x1f828c: 0x0  nop
    ctx->pc = 0x1f828cu;
    // NOP
}
