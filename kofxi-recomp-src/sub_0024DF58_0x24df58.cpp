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

// Function: sub_0024DF58
// Address: 0x24df58 - 0x24e0c0
void sub_0024DF58_0x24df58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024DF58_0x24df58");
#endif

    switch (ctx->pc) {
        case 0x24df6cu: goto label_24df6c;
        case 0x24df7cu: goto label_24df7c;
        case 0x24df9cu: goto label_24df9c;
        case 0x24dfacu: goto label_24dfac;
        case 0x24e058u: goto label_24e058;
        case 0x24e088u: goto label_24e088;
        case 0x24e0a4u: goto label_24e0a4;
        default: break;
    }

    ctx->pc = 0x24df58u;

    // 0x24df58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x24df58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24df5c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x24df5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x24df60: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x24df60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x24df64: 0xc08c84a  jal         func_232128
    ctx->pc = 0x24DF64u;
    SET_GPR_U32(ctx, 31, 0x24DF6Cu);
    ctx->pc = 0x24DF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DF64u;
    // 0x24df68: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232128u, 0x24DF64u, 0x24DF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DF6Cu;
label_24df6c:
    // 0x24df6c: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x24df6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x24df70: 0x34a55180  ori         $a1, $a1, 0x5180
    ctx->pc = 0x24df70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)20864);
    // 0x24df74: 0xc048382  jal         func_120E08
    ctx->pc = 0x24DF74u;
    SET_GPR_U32(ctx, 31, 0x24DF7Cu);
    ctx->pc = 0x24DF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DF74u;
    // 0x24df78: 0xdfa40000  ld          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120E08u, 0x24DF74u, 0x24DF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DF7Cu;
label_24df7c:
    // 0x24df7c: 0x28178  dsll        $s0, $v0, 5
    ctx->pc = 0x24df7cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << 5);
    // 0x24df80: 0xdfa40008  ld          $a0, 0x8($sp)
    ctx->pc = 0x24df80u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24df84: 0x202802f  dsubu       $s0, $s0, $v0
    ctx->pc = 0x24df84u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) - GPR_U64(ctx, 2));
    // 0x24df88: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x24df88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x24df8c: 0x1080b8  dsll        $s0, $s0, 2
    ctx->pc = 0x24df8cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 2);
    // 0x24df90: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x24df90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x24df94: 0xc04818c  jal         func_120630
    ctx->pc = 0x24DF94u;
    SET_GPR_U32(ctx, 31, 0x24DF9Cu);
    ctx->pc = 0x24DF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DF94u;
    // 0x24df98: 0x1080f8  dsll        $s0, $s0, 3 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 3);
    ctx->in_delay_slot = false;
    ctx->pc = 0x120630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120630u, 0x24DF94u, 0x24DF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DF9Cu;
label_24df9c:
    // 0x24df9c: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x24df9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x24dfa0: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x24dfa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x24dfa4: 0xc08a254  jal         func_228950
    ctx->pc = 0x24DFA4u;
    SET_GPR_U32(ctx, 31, 0x24DFACu);
    ctx->pc = 0x24DFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DFA4u;
    // 0x24dfa8: 0x4203f  dsra32      $a0, $a0, 0 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228950u, 0x24DFA4u, 0x24DFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DFACu;
label_24dfac:
    // 0x24dfac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x24dfacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24dfb0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x24dfb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24dfb4: 0x3e00008  jr          $ra
    ctx->pc = 0x24DFB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24DFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DFB4u;
        // 0x24dfb8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24DFB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24DFBCu;
    // 0x24dfbc: 0x0  nop
    ctx->pc = 0x24dfbcu;
    // NOP
    // 0x24dfc0: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x24dfc0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24dfc4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x24dfc4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24dfc8: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x24dfc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24dfcc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x24dfccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x24dfd0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x24dfd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x24dfd4: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x24dfd4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24dfd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24dfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24dfdc: 0x11420003  beq         $t2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24DFDCu;
    {
        const bool branch_taken_0x24dfdc = (GPR_U64(ctx, 10) == GPR_U64(ctx, 2));
        ctx->pc = 0x24DFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DFDCu;
        // 0x24dfe0: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dfdc) {
            ctx->pc = 0x24DFECu;
            goto label_24dfec;
        }
    }
    ctx->pc = 0x24DFE4u;
    // 0x24dfe4: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x24DFE4u;
    {
        const bool branch_taken_0x24dfe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DFE4u;
        // 0x24dfe8: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dfe4) {
            ctx->pc = 0x24E0ACu;
            goto label_24e0ac;
        }
    }
    ctx->pc = 0x24DFECu;
label_24dfec:
    // 0x24dfec: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x24dfecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24dff0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x24dff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24dff4: 0x10820011  beq         $a0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x24DFF4u;
    {
        const bool branch_taken_0x24dff4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x24DFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DFF4u;
        // 0x24dff8: 0x28820004  slti        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dff4) {
            ctx->pc = 0x24E03Cu;
            goto label_24e03c;
        }
    }
    ctx->pc = 0x24DFFCu;
    // 0x24dffc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24DFFCu;
    {
        const bool branch_taken_0x24dffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DFFCu;
        // 0x24e000: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dffc) {
            ctx->pc = 0x24E014u;
            goto label_24e014;
        }
    }
    ctx->pc = 0x24E004u;
    // 0x24e004: 0x108a0009  beq         $a0, $t2, . + 4 + (0x9 << 2)
    ctx->pc = 0x24E004u;
    {
        const bool branch_taken_0x24e004 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 10));
        ctx->pc = 0x24E008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E004u;
        // 0x24e008: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e004) {
            ctx->pc = 0x24E02Cu;
            goto label_24e02c;
        }
    }
    ctx->pc = 0x24E00Cu;
    // 0x24e00c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x24E00Cu;
    {
        const bool branch_taken_0x24e00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E00Cu;
        // 0x24e010: 0x2403006d  addiu       $v1, $zero, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e00c) {
            ctx->pc = 0x24E0A8u;
            goto label_24e0a8;
        }
    }
    ctx->pc = 0x24E014u;
label_24e014:
    // 0x24e014: 0x10820016  beq         $a0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x24E014u;
    {
        const bool branch_taken_0x24e014 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x24E018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E014u;
        // 0x24e018: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e014) {
            ctx->pc = 0x24E070u;
            goto label_24e070;
        }
    }
    ctx->pc = 0x24E01Cu;
    // 0x24e01c: 0x1082001c  beq         $a0, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x24E01Cu;
    {
        const bool branch_taken_0x24e01c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x24E020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E01Cu;
        // 0x24e020: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e01c) {
            ctx->pc = 0x24E090u;
            goto label_24e090;
        }
    }
    ctx->pc = 0x24E024u;
    // 0x24e024: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x24E024u;
    {
        const bool branch_taken_0x24e024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E024u;
        // 0x24e028: 0x2403006d  addiu       $v1, $zero, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e024) {
            ctx->pc = 0x24E0A8u;
            goto label_24e0a8;
        }
    }
    ctx->pc = 0x24E02Cu;
label_24e02c:
    // 0x24e02c: 0x3c08003a  lui         $t0, 0x3A
    ctx->pc = 0x24e02cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)58 << 16));
    // 0x24e030: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x24e030u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e034: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x24E034u;
    {
        const bool branch_taken_0x24e034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E034u;
        // 0x24e038: 0x25080db8  addiu       $t0, $t0, 0xDB8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e034) {
            ctx->pc = 0x24E080u;
            goto label_24e080;
        }
    }
    ctx->pc = 0x24E03Cu;
label_24e03c:
    // 0x24e03c: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x24e03cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x24e040: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x24e040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e044: 0x8e020dbc  lw          $v0, 0xDBC($s0)
    ctx->pc = 0x24e044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3516)));
    // 0x24e048: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x24e048u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e04c: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x24e04cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e050: 0xc08c724  jal         func_231C90
    ctx->pc = 0x24E050u;
    SET_GPR_U32(ctx, 31, 0x24E058u);
    ctx->pc = 0x24E054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E050u;
    // 0x24e054: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231C90u, 0x24E050u, 0x24E058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E058u;
label_24e058:
    // 0x24e058: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x24e058u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e05c: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x24E05Cu;
    {
        const bool branch_taken_0x24e05c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24E060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E05Cu;
        // 0x24e060: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e05c) {
            ctx->pc = 0x24E0ACu;
            goto label_24e0ac;
        }
    }
    ctx->pc = 0x24E064u;
    // 0x24e064: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x24e064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24e068: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x24E068u;
    {
        const bool branch_taken_0x24e068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E068u;
        // 0x24e06c: 0xae020dbc  sw          $v0, 0xDBC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3516), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e068) {
            ctx->pc = 0x24E0A8u;
            goto label_24e0a8;
        }
    }
    ctx->pc = 0x24E070u;
label_24e070:
    // 0x24e070: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x24e070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e074: 0x3c08003a  lui         $t0, 0x3A
    ctx->pc = 0x24e074u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)58 << 16));
    // 0x24e078: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x24e078u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e07c: 0x25080388  addiu       $t0, $t0, 0x388
    ctx->pc = 0x24e07cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 904));
label_24e080:
    // 0x24e080: 0xc08c724  jal         func_231C90
    ctx->pc = 0x24E080u;
    SET_GPR_U32(ctx, 31, 0x24E088u);
    ctx->pc = 0x231C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231C90u, 0x24E080u, 0x24E088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E088u;
label_24e088:
    // 0x24e088: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x24E088u;
    {
        const bool branch_taken_0x24e088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E088u;
        // 0x24e08c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e088) {
            ctx->pc = 0x24E0A8u;
            goto label_24e0a8;
        }
    }
    ctx->pc = 0x24E090u;
label_24e090:
    // 0x24e090: 0x3c07003a  lui         $a3, 0x3A
    ctx->pc = 0x24e090u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)58 << 16));
    // 0x24e094: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x24e094u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e098: 0x24e70e98  addiu       $a3, $a3, 0xE98
    ctx->pc = 0x24e098u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3736));
    // 0x24e09c: 0xc08c832  jal         func_2320C8
    ctx->pc = 0x24E09Cu;
    SET_GPR_U32(ctx, 31, 0x24E0A4u);
    ctx->pc = 0x24E0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E09Cu;
    // 0x24e0a0: 0x24080170  addiu       $t0, $zero, 0x170 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2320C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2320C8u, 0x24E09Cu, 0x24E0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E0A4u;
label_24e0a4:
    // 0x24e0a4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x24e0a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24e0a8:
    // 0x24e0a8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x24e0a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_24e0ac:
    // 0x24e0ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x24e0acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24e0b0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x24e0b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24e0b4: 0x3e00008  jr          $ra
    ctx->pc = 0x24E0B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24E0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E0B4u;
        // 0x24e0b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E0B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24E0BCu;
    // 0x24e0bc: 0x0  nop
    ctx->pc = 0x24e0bcu;
    // NOP
    if (ctx->pc == 0x24e0bcu) { ctx->pc = 0x24e0c0u; }
}
