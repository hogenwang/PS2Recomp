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

// Function: sub_001CDC78
// Address: 0x1cdc78 - 0x1cdd20
void sub_001CDC78_0x1cdc78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CDC78_0x1cdc78");
#endif

    switch (ctx->pc) {
        case 0x1cdc78u: goto label_1cdc78;
        case 0x1cdc7cu: goto label_1cdc7c;
        case 0x1cdc80u: goto label_1cdc80;
        case 0x1cdc84u: goto label_1cdc84;
        case 0x1cdc88u: goto label_1cdc88;
        case 0x1cdc8cu: goto label_1cdc8c;
        case 0x1cdc90u: goto label_1cdc90;
        case 0x1cdc94u: goto label_1cdc94;
        case 0x1cdc98u: goto label_1cdc98;
        case 0x1cdc9cu: goto label_1cdc9c;
        case 0x1cdca0u: goto label_1cdca0;
        case 0x1cdca4u: goto label_1cdca4;
        case 0x1cdca8u: goto label_1cdca8;
        case 0x1cdcacu: goto label_1cdcac;
        case 0x1cdcb0u: goto label_1cdcb0;
        case 0x1cdcb4u: goto label_1cdcb4;
        case 0x1cdcb8u: goto label_1cdcb8;
        case 0x1cdcbcu: goto label_1cdcbc;
        case 0x1cdcc0u: goto label_1cdcc0;
        case 0x1cdcc4u: goto label_1cdcc4;
        case 0x1cdcc8u: goto label_1cdcc8;
        case 0x1cdcccu: goto label_1cdccc;
        case 0x1cdcd0u: goto label_1cdcd0;
        case 0x1cdcd4u: goto label_1cdcd4;
        case 0x1cdcd8u: goto label_1cdcd8;
        case 0x1cdcdcu: goto label_1cdcdc;
        case 0x1cdce0u: goto label_1cdce0;
        case 0x1cdce4u: goto label_1cdce4;
        case 0x1cdce8u: goto label_1cdce8;
        case 0x1cdcecu: goto label_1cdcec;
        case 0x1cdcf0u: goto label_1cdcf0;
        case 0x1cdcf4u: goto label_1cdcf4;
        case 0x1cdcf8u: goto label_1cdcf8;
        case 0x1cdcfcu: goto label_1cdcfc;
        case 0x1cdd00u: goto label_1cdd00;
        case 0x1cdd04u: goto label_1cdd04;
        case 0x1cdd08u: goto label_1cdd08;
        case 0x1cdd0cu: goto label_1cdd0c;
        case 0x1cdd10u: goto label_1cdd10;
        case 0x1cdd14u: goto label_1cdd14;
        case 0x1cdd18u: goto label_1cdd18;
        case 0x1cdd1cu: goto label_1cdd1c;
        default: break;
    }

    ctx->pc = 0x1cdc78u;

label_1cdc78:
    // 0x1cdc78: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1cdc78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1cdc7c:
    // 0x1cdc7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cdc7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1cdc80:
    // 0x1cdc80: 0x3c100039  lui         $s0, 0x39
    ctx->pc = 0x1cdc80u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)57 << 16));
label_1cdc84:
    // 0x1cdc84: 0x2610e5a8  addiu       $s0, $s0, -0x1A58
    ctx->pc = 0x1cdc84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294960552));
label_1cdc88:
    // 0x1cdc88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cdc88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1cdc8c:
    // 0x1cdc8c: 0xffa50048  sd          $a1, 0x48($sp)
    ctx->pc = 0x1cdc8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 5));
label_1cdc90:
    // 0x1cdc90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cdc90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cdc94:
    // 0x1cdc94: 0xffa60050  sd          $a2, 0x50($sp)
    ctx->pc = 0x1cdc94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 6));
label_1cdc98:
    // 0x1cdc98: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1cdc98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1cdc9c:
    // 0x1cdc9c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cdc9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cdca0:
    // 0x1cdca0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cdca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cdca4:
    // 0x1cdca4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cdca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1cdca8:
    // 0x1cdca8: 0xffa70058  sd          $a3, 0x58($sp)
    ctx->pc = 0x1cdca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 7));
label_1cdcac:
    // 0x1cdcac: 0xffa80060  sd          $t0, 0x60($sp)
    ctx->pc = 0x1cdcacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 8));
label_1cdcb0:
    // 0x1cdcb0: 0xffa90068  sd          $t1, 0x68($sp)
    ctx->pc = 0x1cdcb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 9));
label_1cdcb4:
    // 0x1cdcb4: 0xffaa0070  sd          $t2, 0x70($sp)
    ctx->pc = 0x1cdcb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 10));
label_1cdcb8:
    // 0x1cdcb8: 0xffab0078  sd          $t3, 0x78($sp)
    ctx->pc = 0x1cdcb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 11));
label_1cdcbc:
    // 0x1cdcbc: 0xe7ac0028  swc1        $f12, 0x28($sp)
    ctx->pc = 0x1cdcbcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1cdcc0:
    // 0x1cdcc0: 0xe7ad002c  swc1        $f13, 0x2C($sp)
    ctx->pc = 0x1cdcc0u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_1cdcc4:
    // 0x1cdcc4: 0xe7ae0030  swc1        $f14, 0x30($sp)
    ctx->pc = 0x1cdcc4u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1cdcc8:
    // 0x1cdcc8: 0xe7af0034  swc1        $f15, 0x34($sp)
    ctx->pc = 0x1cdcc8u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_1cdccc:
    // 0x1cdccc: 0xe7b00038  swc1        $f16, 0x38($sp)
    ctx->pc = 0x1cdcccu;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_1cdcd0:
    // 0x1cdcd0: 0xe7b1003c  swc1        $f17, 0x3C($sp)
    ctx->pc = 0x1cdcd0u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_1cdcd4:
    // 0x1cdcd4: 0xe7b20040  swc1        $f18, 0x40($sp)
    ctx->pc = 0x1cdcd4u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1cdcd8:
    // 0x1cdcd8: 0xc049cb6  jal         func_1272D8
label_1cdcdc:
    if (ctx->pc == 0x1CDCDCu) {
        ctx->pc = 0x1CDCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDCD8u;
        // 0x1cdcdc: 0xe7b30044  swc1        $f19, 0x44($sp) (Delay Slot)
        { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDCE0u;
        goto label_1cdce0;
    }
    ctx->pc = 0x1CDCD8u;
    SET_GPR_U32(ctx, 31, 0x1CDCE0u);
    ctx->pc = 0x1CDCDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDCD8u;
    // 0x1cdcdc: 0xe7b30044  swc1        $f19, 0x44($sp) (Delay Slot)
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x1CDCD8u, 0x1CDCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDCE0u;
label_1cdce0:
    // 0x1cdce0: 0x27a60048  addiu       $a2, $sp, 0x48
    ctx->pc = 0x1cdce0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_1cdce4:
    // 0x1cdce4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1cdce4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cdce8:
    // 0x1cdce8: 0xc04b984  jal         func_12E610
label_1cdcec:
    if (ctx->pc == 0x1CDCECu) {
        ctx->pc = 0x1CDCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDCE8u;
        // 0x1cdcec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDCF0u;
        goto label_1cdcf0;
    }
    ctx->pc = 0x1CDCE8u;
    SET_GPR_U32(ctx, 31, 0x1CDCF0u);
    ctx->pc = 0x1CDCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDCE8u;
    // 0x1cdcec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E610u, 0x1CDCE8u, 0x1CDCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDCF0u;
label_1cdcf0:
    // 0x1cdcf0: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1cdcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
label_1cdcf4:
    // 0x1cdcf4: 0x24427ff0  addiu       $v0, $v0, 0x7FF0
    ctx->pc = 0x1cdcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32752));
label_1cdcf8:
    // 0x1cdcf8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cdcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cdcfc:
    // 0x1cdcfc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1cdd00:
    if (ctx->pc == 0x1CDD00u) {
        ctx->pc = 0x1CDD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDCFCu;
        // 0x1cdd00: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDD04u;
        goto label_1cdd04;
    }
    ctx->pc = 0x1CDCFCu;
    {
        const bool branch_taken_0x1cdcfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDCFCu;
        // 0x1cdd00: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdcfc) {
            ctx->pc = 0x1CDD0Cu;
            goto label_1cdd0c;
        }
    }
    ctx->pc = 0x1CDD04u;
label_1cdd04:
    // 0x1cdd04: 0x60f809  jalr        $v1
label_1cdd08:
    if (ctx->pc == 0x1CDD08u) {
        ctx->pc = 0x1CDD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD04u;
        // 0x1cdd08: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDD0Cu;
        goto label_1cdd0c;
    }
    ctx->pc = 0x1CDD04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CDD0Cu);
        ctx->pc = 0x1CDD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD04u;
        // 0x1cdd08: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDD04u, 0x1CDD0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CDD0Cu;
label_1cdd0c:
    // 0x1cdd0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cdd0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cdd10:
    // 0x1cdd10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cdd10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1cdd14:
    // 0x1cdd14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cdd14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1cdd18:
    // 0x1cdd18: 0x3e00008  jr          $ra
label_1cdd1c:
    if (ctx->pc == 0x1CDD1Cu) {
        ctx->pc = 0x1CDD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD18u;
        // 0x1cdd1c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDD20u;
        goto label_fallthrough_0x1cdd18;
    }
    ctx->pc = 0x1CDD18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD18u;
        // 0x1cdd1c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDD18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1cdd18:
    ctx->pc = 0x1CDD20u;
}
