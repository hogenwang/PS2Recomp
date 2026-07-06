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

// Function: sub_00198200
// Address: 0x198200 - 0x1982c0
void sub_00198200_0x198200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00198200_0x198200");
#endif

    switch (ctx->pc) {
        case 0x198244u: goto label_198244;
        case 0x198274u: goto label_198274;
        case 0x198280u: goto label_198280;
        default: break;
    }

    ctx->pc = 0x198200u;

    // 0x198200: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x198200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x198204: 0x2407003c  addiu       $a3, $zero, 0x3C
    ctx->pc = 0x198204u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x198208: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x198208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x19820c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19820cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198210: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x198210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x198214: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x198214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x198218: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x198218u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19821c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19821cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x198220: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x198220u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198224: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x198224u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198228: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x198228u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x19822c: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x19822cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x198230: 0x2484ca40  addiu       $a0, $a0, -0x35C0
    ctx->pc = 0x198230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953536));
    // 0x198234: 0x24a5e910  addiu       $a1, $a1, -0x16F0
    ctx->pc = 0x198234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961424));
    // 0x198238: 0x2406003f  addiu       $a2, $zero, 0x3F
    ctx->pc = 0x198238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x19823c: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x19823Cu;
    SET_GPR_U32(ctx, 31, 0x198244u);
    ctx->pc = 0x198240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19823Cu;
    // 0x198240: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155B50u, 0x19823Cu, 0x198244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198244u;
label_198244:
    // 0x198244: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x198244u;
    {
        const bool branch_taken_0x198244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x198244) {
            ctx->pc = 0x198248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x198244u;
            // 0x198248: 0x8c500010  lw          $s0, 0x10($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x198258u;
            goto label_198258;
        }
    }
    ctx->pc = 0x19824Cu;
    // 0x19824c: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x19824cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x198250: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x198250u;
    {
        const bool branch_taken_0x198250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198250u;
        // 0x198254: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198250) {
            ctx->pc = 0x19829Cu;
            goto label_19829c;
        }
    }
    ctx->pc = 0x198258u;
label_198258:
    // 0x198258: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x198258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19825c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x19825cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x198260: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x198260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x198264: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x198264u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x198268: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x198268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x19826c: 0xc067d64  jal         func_19F590
    ctx->pc = 0x19826Cu;
    SET_GPR_U32(ctx, 31, 0x198274u);
    ctx->pc = 0x198270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19826Cu;
    // 0x198270: 0xa202002c  sb          $v0, 0x2C($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 44), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F590u, 0x19826Cu, 0x198274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198274u;
label_198274:
    // 0x198274: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x198274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198278: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x198278u;
    SET_GPR_U32(ctx, 31, 0x198280u);
    ctx->pc = 0x19827Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198278u;
    // 0x19827c: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129F70u, 0x198278u, 0x198280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198280u;
label_198280:
    // 0x198280: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x198280u;
    {
        const bool branch_taken_0x198280 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x198284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198280u;
        // 0x198284: 0xae110024  sw          $s1, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198280) {
            ctx->pc = 0x198298u;
            goto label_198298;
        }
    }
    ctx->pc = 0x198288u;
    // 0x198288: 0xae120028  sw          $s2, 0x28($s0)
    ctx->pc = 0x198288u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 18));
    // 0x19828c: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x19828cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x198290: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x198290u;
    {
        const bool branch_taken_0x198290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198290u;
        // 0x198294: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198290) {
            ctx->pc = 0x19829Cu;
            goto label_19829c;
        }
    }
    ctx->pc = 0x198298u;
label_198298:
    // 0x198298: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x198298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_19829c:
    // 0x19829c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19829cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1982a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1982a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1982a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1982a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1982a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1982a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1982ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1982acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1982b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1982B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1982B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1982B0u;
        // 0x1982b4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1982B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1982B8u;
    // 0x1982b8: 0x0  nop
    ctx->pc = 0x1982b8u;
    // NOP
    // 0x1982bc: 0x0  nop
    ctx->pc = 0x1982bcu;
    // NOP
}
