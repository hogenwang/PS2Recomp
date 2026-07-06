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

// Function: sub_001DDE48
// Address: 0x1dde48 - 0x1ddfa8
void sub_001DDE48_0x1dde48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DDE48_0x1dde48");
#endif

    switch (ctx->pc) {
        case 0x1ddee0u: goto label_1ddee0;
        default: break;
    }

    ctx->pc = 0x1dde48u;

label_1dde48:
    // 0x1dde48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dde48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1dde4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dde4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dde50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dde50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dde54: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dde54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dde58: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1dde58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1dde5c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1dde5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1dde60: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1dde60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1dde64: 0x8e05037c  lw          $a1, 0x37C($s0)
    ctx->pc = 0x1dde64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 892)));
    // 0x1dde68: 0x54a0000b  bnel        $a1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1DDE68u;
    {
        const bool branch_taken_0x1dde68 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dde68) {
            ctx->pc = 0x1DDE6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DDE68u;
            // 0x1dde6c: 0x8e030018  lw          $v1, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DDE98u;
            goto label_1dde98;
        }
    }
    ctx->pc = 0x1DDE70u;
    // 0x1dde70: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1dde70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1dde74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dde74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dde78: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dde78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dde7c: 0x2484c558  addiu       $a0, $a0, -0x3AA8
    ctx->pc = 0x1dde7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952280));
    // 0x1dde80: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1dde80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dde84: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1dde84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dde88: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1dde88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dde8c: 0x8079afa  j           func_1E6BE8
    ctx->pc = 0x1DDE8Cu;
    ctx->pc = 0x1DDE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDE8Cu;
    // 0x1dde90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    sub_001E6BE8_0x1e6be8(rdram, ctx, runtime); return;
    ctx->pc = 0x1DDE94u;
    // 0x1dde94: 0x0  nop
    ctx->pc = 0x1dde94u;
    // NOP
label_1dde98:
    // 0x1dde98: 0x8cb30008  lw          $s3, 0x8($a1)
    ctx->pc = 0x1dde98u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1dde9c: 0x24720004  addiu       $s2, $v1, 0x4
    ctx->pc = 0x1dde9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1ddea0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1ddea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1ddea4: 0x2531818  mult        $v1, $s2, $s3
    ctx->pc = 0x1ddea4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1ddea8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1ddea8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1ddeac: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1DDEACu;
    {
        const bool branch_taken_0x1ddeac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDEACu;
        // 0x1ddeb0: 0x8cb10000  lw          $s1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddeac) {
            ctx->pc = 0x1DDED8u;
            goto label_1dded8;
        }
    }
    ctx->pc = 0x1DDEB4u;
    // 0x1ddeb4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1ddeb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1ddeb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ddeb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ddebc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ddebcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ddec0: 0x2484c590  addiu       $a0, $a0, -0x3A70
    ctx->pc = 0x1ddec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952336));
    // 0x1ddec4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ddec4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ddec8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1ddec8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ddecc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ddeccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dded0: 0x8079afa  j           func_1E6BE8
    ctx->pc = 0x1DDED0u;
    ctx->pc = 0x1DDED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDED0u;
    // 0x1dded4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    sub_001E6BE8_0x1e6be8(rdram, ctx, runtime); return;
    ctx->pc = 0x1DDED8u;
label_1dded8:
    // 0x1dded8: 0xc0782a4  jal         func_1E0A90
    ctx->pc = 0x1DDED8u;
    SET_GPR_U32(ctx, 31, 0x1DDEE0u);
    ctx->pc = 0x1E0A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0A90u, 0x1DDED8u, 0x1DDEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDEE0u;
label_1ddee0:
    // 0x1ddee0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ddee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ddee4: 0x5443000c  bnel        $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1DDEE4u;
    {
        const bool branch_taken_0x1ddee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ddee4) {
            ctx->pc = 0x1DDEE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DDEE4u;
            // 0x1ddee8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DDF18u;
            goto label_1ddf18;
        }
    }
    ctx->pc = 0x1DDEECu;
    // 0x1ddeec: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x1ddeecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1ddef0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ddef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddef4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1ddef4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddef8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ddef8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ddefc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1ddefcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddf00: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1ddf00u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ddf04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ddf04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ddf08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ddf08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ddf0c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ddf0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ddf10: 0x807c03c  j           func_1F00F0
    ctx->pc = 0x1DDF10u;
    ctx->pc = 0x1DDF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDF10u;
    // 0x1ddf14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F00F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F00F0u, 0x1DDF10u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DDF18u;
label_1ddf18:
    // 0x1ddf18: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ddf18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ddf1c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ddf1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ddf20: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1ddf20u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ddf24: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ddf24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ddf28: 0x3e00008  jr          $ra
    ctx->pc = 0x1DDF28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DDF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDF28u;
        // 0x1ddf2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDF28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DDF30u;
    // 0x1ddf30: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1ddf30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddf34: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ddf34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ddf38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ddf38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ddf3c: 0x25030370  addiu       $v1, $t0, 0x370
    ctx->pc = 0x1ddf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 880));
    // 0x1ddf40: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DDF40u;
    {
        const bool branch_taken_0x1ddf40 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DDF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDF40u;
        // 0x1ddf44: 0x25020364  addiu       $v0, $t0, 0x364 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 868));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddf40) {
            ctx->pc = 0x1DDF60u;
            goto label_1ddf60;
        }
    }
    ctx->pc = 0x1DDF48u;
    // 0x1ddf48: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1ddf48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x1ddf4c: 0xad02037c  sw          $v0, 0x37C($t0)
    ctx->pc = 0x1ddf4cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 892), GPR_U32(ctx, 2));
    // 0x1ddf50: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1ddf50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1ddf54: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1DDF54u;
    {
        const bool branch_taken_0x1ddf54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDF54u;
        // 0x1ddf58: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddf54) {
            ctx->pc = 0x1DDF9Cu;
            goto label_1ddf9c;
        }
    }
    ctx->pc = 0x1DDF5Cu;
    // 0x1ddf5c: 0x0  nop
    ctx->pc = 0x1ddf5cu;
    // NOP
label_1ddf60:
    // 0x1ddf60: 0x8d020018  lw          $v0, 0x18($t0)
    ctx->pc = 0x1ddf60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x1ddf64: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1ddf64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1ddf68: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x1ddf68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1ddf6c: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x1ddf6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1ddf70: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DDF70u;
    {
        const bool branch_taken_0x1ddf70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddf70) {
            ctx->pc = 0x1DDF74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DDF70u;
            // 0x1ddf74: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DDF90u;
            goto label_1ddf90;
        }
    }
    ctx->pc = 0x1DDF78u;
    // 0x1ddf78: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1ddf78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1ddf7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ddf7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ddf80: 0x2484c5d0  addiu       $a0, $a0, -0x3A30
    ctx->pc = 0x1ddf80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952400));
    // 0x1ddf84: 0x8079afa  j           func_1E6BE8
    ctx->pc = 0x1DDF84u;
    ctx->pc = 0x1DDF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDF84u;
    // 0x1ddf88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    sub_001E6BE8_0x1e6be8(rdram, ctx, runtime); return;
    ctx->pc = 0x1DDF8Cu;
    // 0x1ddf8c: 0x0  nop
    ctx->pc = 0x1ddf8cu;
    // NOP
label_1ddf90:
    // 0x1ddf90: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x1ddf90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
    // 0x1ddf94: 0xac670008  sw          $a3, 0x8($v1)
    ctx->pc = 0x1ddf94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
    // 0x1ddf98: 0xad03037c  sw          $v1, 0x37C($t0)
    ctx->pc = 0x1ddf98u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 892), GPR_U32(ctx, 3));
label_1ddf9c:
    // 0x1ddf9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ddf9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ddfa0: 0x8077792  j           func_1DDE48
    ctx->pc = 0x1DDFA0u;
    ctx->pc = 0x1DDFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDFA0u;
    // 0x1ddfa4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DDE48u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_1dde48;
    ctx->pc = 0x1DDFA8u;
}
