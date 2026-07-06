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

// Function: sub_001985D0
// Address: 0x1985d0 - 0x1986b0
void sub_001985D0_0x1985d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001985D0_0x1985d0");
#endif

    switch (ctx->pc) {
        case 0x198618u: goto label_198618;
        case 0x19863cu: goto label_19863c;
        case 0x19865cu: goto label_19865c;
        default: break;
    }

    ctx->pc = 0x1985d0u;

    // 0x1985d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1985d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1985d4: 0x2402ffe0  addiu       $v0, $zero, -0x20
    ctx->pc = 0x1985d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x1985d8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1985d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1985dc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1985dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1985e0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1985e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1985e4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1985e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1985e8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1985e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1985ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1985ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1985f0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1985f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1985f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1985f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1985f8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1985f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1985fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1985fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x198600: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x198600u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x198604: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x198604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x198608: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x198608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19860c: 0x62a824  and         $s5, $v1, $v0
    ctx->pc = 0x19860cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x198610: 0xc06949c  jal         func_1A5270
    ctx->pc = 0x198610u;
    SET_GPR_U32(ctx, 31, 0x198618u);
    ctx->pc = 0x198614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198610u;
    // 0x198614: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5270u, 0x198610u, 0x198618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198618u;
label_198618:
    // 0x198618: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x198618u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19861c: 0x5220001a  beql        $s1, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x19861Cu;
    {
        const bool branch_taken_0x19861c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x19861c) {
            ctx->pc = 0x198620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19861Cu;
            // 0x198620: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x198688u;
            goto label_198688;
        }
    }
    ctx->pc = 0x198624u;
    // 0x198624: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x198624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x198628: 0x153142  srl         $a2, $s5, 5
    ctx->pc = 0x198628u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 21), 5));
    // 0x19862c: 0xa040d4b0  sb          $zero, -0x2B50($v0)
    ctx->pc = 0x19862cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294956208), (uint8_t)GPR_U32(ctx, 0));
    // 0x198630: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x198630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198634: 0xc067d70  jal         func_19F5C0
    ctx->pc = 0x198634u;
    SET_GPR_U32(ctx, 31, 0x19863Cu);
    ctx->pc = 0x198638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198634u;
    // 0x198638: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F5C0u, 0x198634u, 0x19863Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19863Cu;
label_19863c:
    // 0x19863c: 0x3c04001a  lui         $a0, 0x1A
    ctx->pc = 0x19863cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)26 << 16));
    // 0x198640: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x198640u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x198644: 0x248486e0  addiu       $a0, $a0, -0x7920
    ctx->pc = 0x198644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936288));
    // 0x198648: 0x24a5e988  addiu       $a1, $a1, -0x1678
    ctx->pc = 0x198648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961544));
    // 0x19864c: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x19864cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x198650: 0x2407001c  addiu       $a3, $zero, 0x1C
    ctx->pc = 0x198650u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x198654: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x198654u;
    SET_GPR_U32(ctx, 31, 0x19865Cu);
    ctx->pc = 0x198658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198654u;
    // 0x198658: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155B50u, 0x198654u, 0x19865Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19865Cu;
label_19865c:
    // 0x19865c: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x19865cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x198660: 0x26430004  addiu       $v1, $s2, 0x4
    ctx->pc = 0x198660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x198664: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x198664u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x198668: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x198668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19866c: 0xac900004  sw          $s0, 0x4($a0)
    ctx->pc = 0x19866cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 16));
    // 0x198670: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x198670u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x198674: 0xac91000c  sw          $s1, 0xC($a0)
    ctx->pc = 0x198674u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 17));
    // 0x198678: 0xac940010  sw          $s4, 0x10($a0)
    ctx->pc = 0x198678u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 20));
    // 0x19867c: 0xac930018  sw          $s3, 0x18($a0)
    ctx->pc = 0x19867cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 19));
    // 0x198680: 0xa040af65  sb          $zero, -0x509B($v0)
    ctx->pc = 0x198680u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294946661), (uint8_t)GPR_U32(ctx, 0));
    // 0x198684: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x198684u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_198688:
    // 0x198688: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x198688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19868c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x19868cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x198690: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x198690u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x198694: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x198694u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x198698: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x198698u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19869c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19869cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1986a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1986a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1986a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1986A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1986A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1986A4u;
        // 0x1986a8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1986A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1986ACu;
    // 0x1986ac: 0x0  nop
    ctx->pc = 0x1986acu;
    // NOP
}
