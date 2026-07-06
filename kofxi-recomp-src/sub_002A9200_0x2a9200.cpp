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

// Function: sub_002A9200
// Address: 0x2a9200 - 0x2a9298
void sub_002A9200_0x2a9200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9200_0x2a9200");
#endif

    switch (ctx->pc) {
        case 0x2a9240u: goto label_2a9240;
        case 0x2a9268u: goto label_2a9268;
        default: break;
    }

    ctx->pc = 0x2a9200u;

    // 0x2a9200: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2a9200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2a9204: 0x39080002  xori        $t0, $t0, 0x2
    ctx->pc = 0x2a9204u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ (uint64_t)(uint16_t)2);
    // 0x2a9208: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2a9208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2a920c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2a920cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2a9210: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2a9210u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9214: 0x24100800  addiu       $s0, $zero, 0x800
    ctx->pc = 0x2a9214u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2a9218: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2a9218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2a921c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2a921cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2a9220: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2a9220u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9224: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2a9224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2a9228: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2a9228u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a922c: 0x8800b  movn        $s0, $zero, $t0
    ctx->pc = 0x2a922cu;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x2a9230: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2a9230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9234: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2a9234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2a9238: 0xc0aa588  jal         func_2A9620
    ctx->pc = 0x2A9238u;
    SET_GPR_U32(ctx, 31, 0x2A9240u);
    ctx->pc = 0x2A923Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9238u;
    // 0x2a923c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9620u, 0x2A9238u, 0x2A9240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9240u;
label_2a9240:
    // 0x2a9240: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2A9240u;
    {
        const bool branch_taken_0x2a9240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9240u;
        // 0x2a9244: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9240) {
            ctx->pc = 0x2A9270u;
            goto label_2a9270;
        }
    }
    ctx->pc = 0x2A9248u;
    // 0x2a9248: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x2a9248u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x2a924c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2a924cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9250: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2a9250u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9254: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x2a9254u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9258: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x2a9258u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a925c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2a925cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9260: 0xc0a80e8  jal         func_2A03A0
    ctx->pc = 0x2A9260u;
    SET_GPR_U32(ctx, 31, 0x2A9268u);
    ctx->pc = 0x2A9264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9260u;
    // 0x2a9264: 0x34e7ffff  ori         $a3, $a3, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A03A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A03A0u, 0x2A9260u, 0x2A9268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9268u;
label_2a9268:
    // 0x2a9268: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2a9268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a926c: 0x62880a  movz        $s1, $v1, $v0
    ctx->pc = 0x2a926cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
label_2a9270:
    // 0x2a9270: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2a9270u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9274: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2a9274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a9278: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2a9278u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a927c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2a927cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a9280: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2a9280u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a9284: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2a9284u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a9288: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2a9288u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a928c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A928Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A928Cu;
        // 0x2a9290: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A928Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9294u;
    // 0x2a9294: 0x0  nop
    ctx->pc = 0x2a9294u;
    // NOP
}
