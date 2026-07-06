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

// Function: sub_002DCFA8
// Address: 0x2dcfa8 - 0x2dd150
void sub_002DCFA8_0x2dcfa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DCFA8_0x2dcfa8");
#endif

    switch (ctx->pc) {
        case 0x2dcffcu: goto label_2dcffc;
        case 0x2dd014u: goto label_2dd014;
        case 0x2dd038u: goto label_2dd038;
        case 0x2dd040u: goto label_2dd040;
        case 0x2dd050u: goto label_2dd050;
        case 0x2dd060u: goto label_2dd060;
        case 0x2dd080u: goto label_2dd080;
        case 0x2dd08cu: goto label_2dd08c;
        case 0x2dd0a0u: goto label_2dd0a0;
        case 0x2dd0b8u: goto label_2dd0b8;
        case 0x2dd0c8u: goto label_2dd0c8;
        case 0x2dd0e0u: goto label_2dd0e0;
        case 0x2dd130u: goto label_2dd130;
        default: break;
    }

    ctx->pc = 0x2dcfa8u;

    // 0x2dcfa8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2dcfa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2dcfac: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2dcfacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2dcfb0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2dcfb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcfb4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2dcfb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2dcfb8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2dcfb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcfbc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2dcfbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2dcfc0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2dcfc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcfc4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2dcfc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2dcfc8: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x2dcfc8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2dcfcc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2dcfccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2dcfd0: 0x3c03002e  lui         $v1, 0x2E
    ctx->pc = 0x2dcfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)46 << 16));
    // 0x2dcfd4: 0x2463d01c  addiu       $v1, $v1, -0x2FE4
    ctx->pc = 0x2dcfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955036));
    // 0x2dcfd8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2dcfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2dcfdc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DCFDCu;
    {
        const bool branch_taken_0x2dcfdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dcfdc) {
            ctx->pc = 0x2DCFFCu;
            goto label_2dcffc;
        }
    }
    ctx->pc = 0x2DCFE4u;
    // 0x2dcfe4: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2dcfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2dcfe8: 0x2484d030  addiu       $a0, $a0, -0x2FD0
    ctx->pc = 0x2dcfe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955056));
    // 0x2dcfec: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x2dcfecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2dcff0: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2dcff0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2dcff4: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2DCFF4u;
    SET_GPR_U32(ctx, 31, 0x2DCFFCu);
    ctx->pc = 0x2DCFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCFF4u;
    // 0x2dcff8: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FC0u, 0x2DCFF4u, 0x2DCFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCFFCu;
label_2dcffc:
    // 0x2dcffc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2DCFFCu;
    {
        const bool branch_taken_0x2dcffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dcffc) {
            ctx->pc = 0x2DD030u;
            goto label_2dd030;
        }
    }
    ctx->pc = 0x2DD004u;
    // 0x2dd004: 0x255fe638  addiu       $ra, $t2, -0x19C8
    ctx->pc = 0x2dd004u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 10), 4294960696));
    // 0x2dd008: 0xffb276ba  sd          $s2, 0x76BA($sp)
    ctx->pc = 0x2dd008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 30394), GPR_U64(ctx, 18));
    // 0x2dd00c: 0xc0c97db  jal         func_325F6C
    ctx->pc = 0x2DD00Cu;
    SET_GPR_U32(ctx, 31, 0x2DD014u);
    ctx->pc = 0x2DD010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD00Cu;
    // 0x2dd010: 0xdce5695f  ld          $a1, 0x695F($a3) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 7), 26975)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325F6Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325F6Cu, 0x2DD00Cu, 0x2DD014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD014u;
label_2dd014:
    // 0x2dd014: 0x8e39c76d  lw          $t9, -0x3893($s1)
    ctx->pc = 0x2dd014u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952813)));
    // 0x2dd018: 0x2616ab60  addiu       $s6, $s0, -0x54A0
    ctx->pc = 0x2dd018u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945632));
    // 0x2dd01c: 0x0  nop
    ctx->pc = 0x2dd01cu;
    // NOP
    // 0x2dd020: 0x505c4517  beql        $v0, $gp, . + 4 + (0x4517 << 2)
    ctx->pc = 0x2DD020u;
    {
        const bool branch_taken_0x2dd020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 28));
        if (branch_taken_0x2dd020) {
            ctx->pc = 0x2DD024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD020u;
            // 0x2dd024: 0xc712fe4e  lwc1        $f18, -0x1B2($t8) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294966862)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE480u;
            return;
        }
    }
    ctx->pc = 0x2DD028u;
    // 0x2dd028: 0x505c45a7  beql        $v0, $gp, . + 4 + (0x45A7 << 2)
    ctx->pc = 0x2DD028u;
    {
        const bool branch_taken_0x2dd028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 28));
        if (branch_taken_0x2dd028) {
            ctx->pc = 0x2EE6C8u;
            return;
        }
    }
    ctx->pc = 0x2DD030u;
label_2dd030:
    // 0x2dd030: 0xc0440ea  jal         func_1103A8
    ctx->pc = 0x2DD030u;
    SET_GPR_U32(ctx, 31, 0x2DD038u);
    ctx->pc = 0x2DD034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD030u;
    // 0x2dd034: 0x11edc303  beq         $t7, $t5, . + 4 + (-0x3CFD << 2) (Delay Slot)
    // Likely branch instruction at 0x2DD034 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x1103A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1103A8u, 0x2DD030u, 0x2DD038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD038u;
label_2dd038:
    // 0x2dd038: 0xc045426  jal         func_115098
    ctx->pc = 0x2DD038u;
    SET_GPR_U32(ctx, 31, 0x2DD040u);
    ctx->pc = 0x2DD03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD038u;
    // 0x2dd03c: 0x114dd783  beq         $t2, $t5, . + 4 + (-0x287D << 2) (Delay Slot)
    // Likely branch instruction at 0x2DD03C - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x115098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115098u, 0x2DD038u, 0x2DD040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD040u;
label_2dd040:
    // 0x2dd040: 0x1cddb82  .word       0x01CDDB82                   # srl         $k1, $t5, 14 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2dd040u;
    SET_GPR_S32(ctx, 27, (int32_t)SRL32(GPR_U32(ctx, 13), 14));
    // 0x2dd044: 0x114dd783  beq         $t2, $t5, . + 4 + (-0x287D << 2)
    ctx->pc = 0x2DD044u;
    {
        const bool branch_taken_0x2dd044 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 13));
        ctx->pc = 0x2DD048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD044u;
        // 0x2dd048: 0xc0b738e  jal         func_2DCE38 (Delay Slot)
        // JAL 0x2DCE38 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd044) {
            ctx->pc = 0x2D2E54u;
            return;
        }
    }
    ctx->pc = 0x2DD04Cu;
    // 0x2dd04c: 0x99edc303  lwr         $t5, -0x3CFD($t7)
    ctx->pc = 0x2dd04cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 4294951683); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 13) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 13) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 13, merged64); }
label_2dd050:
    // 0x2dd050: 0x12dcb82  .word       0x012DCB82                   # srl         $t9, $t5, 14 # 01200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2dd050u;
    SET_GPR_S32(ctx, 25, (int32_t)SRL32(GPR_U32(ctx, 13), 14));
    // 0x2dd054: 0x114dd783  beq         $t2, $t5, . + 4 + (-0x287D << 2)
    ctx->pc = 0x2DD054u;
    {
        const bool branch_taken_0x2dd054 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 13));
        ctx->pc = 0x2DD058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD054u;
        // 0x2dd058: 0xc045448  jal         func_115120 (Delay Slot)
        // JAL 0x115120 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd054) {
            ctx->pc = 0x2D2E64u;
            return;
        }
    }
    ctx->pc = 0x2DD05Cu;
    // 0x2dd05c: 0x19edc302  .word       0x19EDC302                   # blez        $t7, . + 4 + (-0x3CFE << 2) # 000D0000 <InstrIdType: CPU_NORMAL>
label_2dd060:
    if (ctx->pc == 0x2DD060u) {
        ctx->pc = 0x2DD060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD05Cu;
        // 0x2dd060: 0x11edc182  beq         $t7, $t5, . + 4 + (-0x3E7E << 2) (Delay Slot)
        // Likely branch instruction at 0x2DD060 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD064u;
        goto label_fallthrough_0x2dd05c;
    }
    ctx->pc = 0x2DD05Cu;
    {
        const bool branch_taken_0x2dd05c = (GPR_S32(ctx, 15) <= 0);
        ctx->pc = 0x2DD060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD05Cu;
        // 0x2dd060: 0x11edc182  beq         $t7, $t5, . + 4 + (-0x3E7E << 2) (Delay Slot)
        // Likely branch instruction at 0x2DD060 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd05c) {
            ctx->pc = 0x2CDC68u;
            return;
        }
    }
label_fallthrough_0x2dd05c:
    ctx->pc = 0x2DD064u;
    // 0x2dd064: 0x192d8f83  .word       0x192D8F83                   # blez        $t1, . + 4 + (-0x707D << 2) # 000D0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2DD064u;
    {
        const bool branch_taken_0x2dd064 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x2DD068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD064u;
        // 0x2dd068: 0x11edc303  beq         $t7, $t5, . + 4 + (-0x3CFD << 2) (Delay Slot)
        // Likely branch instruction at 0x2DD068 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd064) {
            ctx->pc = 0x2C0E74u;
            return;
        }
    }
    ctx->pc = 0x2DD06Cu;
    // 0x2dd06c: 0xcd4b7781  pref        0x0B, 0x7781($t2)
    ctx->pc = 0x2dd06cu;
    // PREF instruction (ignored)
    // 0x2dd070: 0xcd677781  pref        0x07, 0x7781($t3)
    ctx->pc = 0x2dd070u;
    // PREF instruction (ignored)
    // 0x2dd074: 0xcd4f6781  pref        0x0F, 0x6781($t2)
    ctx->pc = 0x2dd074u;
    // PREF instruction (ignored)
    // 0x2dd078: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x2DD078u;
    SET_GPR_U32(ctx, 31, 0x2DD080u);
    ctx->pc = 0x2DD07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD078u;
    // 0x2dd07c: 0x8d6f6781  lw          $t7, 0x6781($t3) (Delay Slot)
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 26497)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x2DD078u, 0x2DD080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD080u;
label_2dd080:
    // 0x2dd080: 0x9dedc301  lwu         $t5, -0x3CFF($t7)
    ctx->pc = 0x2dd080u;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 15), 4294951681)));
    // 0x2dd084: 0xc043ee2  jal         func_10FB88
    ctx->pc = 0x2DD084u;
    SET_GPR_U32(ctx, 31, 0x2DD08Cu);
    ctx->pc = 0x2DD088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD084u;
    // 0x2dd088: 0x1595383  .word       0x01595383                   # sra         $t2, $t9, 14 # 01400000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 25), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FB88u, 0x2DD084u, 0x2DD08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD08Cu;
label_2dd08c:
    // 0x2dd08c: 0x110d9782  beq         $t0, $t5, . + 4 + (-0x687E << 2)
    ctx->pc = 0x2DD08Cu;
    {
        const bool branch_taken_0x2dd08c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 13));
        ctx->pc = 0x2DD090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD08Cu;
        // 0x2dd090: 0x114dd783  beq         $t2, $t5, . + 4 + (-0x287D << 2) (Delay Slot)
        // Likely branch instruction at 0x2DD090 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd08c) {
            ctx->pc = 0x2C2E98u;
            return;
        }
    }
    ctx->pc = 0x2DD094u;
    // 0x2dd094: 0x114dd783  beq         $t2, $t5, . + 4 + (-0x287D << 2)
    ctx->pc = 0x2DD094u;
    {
        const bool branch_taken_0x2dd094 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 13));
        ctx->pc = 0x2DD098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD094u;
        // 0x2dd098: 0xc043400  jal         func_10D000 (Delay Slot)
        // JAL 0x10D000 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd094) {
            ctx->pc = 0x2D2EA4u;
            return;
        }
    }
    ctx->pc = 0x2DD09Cu;
    // 0x2dd09c: 0x11edc302  beq         $t7, $t5, . + 4 + (-0x3CFE << 2)
label_2dd0a0:
    if (ctx->pc == 0x2DD0A0u) {
        ctx->pc = 0x2DD0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD09Cu;
        // 0x2dd0a0: 0x2a9c07e  .word       0x02A9C07E                   # dsrl32      $t8, $t1, 1 # 02A00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 24, GPR_U64(ctx, 9) >> (32 + 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD0A4u;
        goto label_fallthrough_0x2dd09c;
    }
    ctx->pc = 0x2DD09Cu;
    {
        const bool branch_taken_0x2dd09c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 13));
        ctx->pc = 0x2DD0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD09Cu;
        // 0x2dd0a0: 0x2a9c07e  .word       0x02A9C07E                   # dsrl32      $t8, $t1, 1 # 02A00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 24, GPR_U64(ctx, 9) >> (32 + 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd09c) {
            ctx->pc = 0x2CDCA8u;
            return;
        }
    }
label_fallthrough_0x2dd09c:
    ctx->pc = 0x2DD0A4u;
    // 0x2dd0a4: 0x11edc343  beq         $t7, $t5, . + 4 + (-0x3CBD << 2)
    ctx->pc = 0x2DD0A4u;
    {
        const bool branch_taken_0x2dd0a4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 13));
        ctx->pc = 0x2DD0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD0A4u;
        // 0x2dd0a8: 0x19edc303  .word       0x19EDC303                   # blez        $t7, . + 4 + (-0x3CFD << 2) # 000D0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2DD0A8 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd0a4) {
            ctx->pc = 0x2CDDB4u;
            return;
        }
    }
    ctx->pc = 0x2DD0ACu;
    // 0x2dd0ac: 0x11edc323  beq         $t7, $t5, . + 4 + (-0x3CDD << 2)
    ctx->pc = 0x2DD0ACu;
    {
        const bool branch_taken_0x2dd0ac = (GPR_U64(ctx, 15) == GPR_U64(ctx, 13));
        ctx->pc = 0x2DD0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD0ACu;
        // 0x2dd0b0: 0xc045760  jal         func_115D80 (Delay Slot)
        // JAL 0x115D80 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd0ac) {
            ctx->pc = 0x2CDD3Cu;
            return;
        }
    }
    ctx->pc = 0x2DD0B4u;
    // 0x2dd0b4: 0x42a1487f  .word       0x42A1487F                   # INVALID     $s5, $at, 0x487F # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2dd0b4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x2DD0B4 raw=0x42A1487F");
label_2dd0b8:
    // 0x2dd0b8: 0x14dc382  .word       0x014DC382                   # srl         $t8, $t5, 14 # 01400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2dd0b8u;
    SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 13), 14));
    // 0x2dd0bc: 0x114dd783  beq         $t2, $t5, . + 4 + (-0x287D << 2)
    ctx->pc = 0x2DD0BCu;
    {
        const bool branch_taken_0x2dd0bc = (GPR_U64(ctx, 10) == GPR_U64(ctx, 13));
        ctx->pc = 0x2DD0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD0BCu;
        // 0x2dd0c0: 0xc0454a2  jal         func_115288 (Delay Slot)
        // JAL 0x115288 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd0bc) {
            ctx->pc = 0x2D2ECCu;
            return;
        }
    }
    ctx->pc = 0x2DD0C4u;
    // 0x2dd0c4: 0x19edc303  .word       0x19EDC303                   # blez        $t7, . + 4 + (-0x3CFD << 2) # 000D0000 <InstrIdType: CPU_NORMAL>
label_2dd0c8:
    if (ctx->pc == 0x2DD0C8u) {
        ctx->pc = 0x2DD0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD0C4u;
        // 0x2dd0c8: 0x11457782  beq         $t2, $a1, . + 4 + (0x7782 << 2) (Delay Slot)
        // Likely branch instruction at 0x2DD0C8 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD0CCu;
        goto label_fallthrough_0x2dd0c4;
    }
    ctx->pc = 0x2DD0C4u;
    {
        const bool branch_taken_0x2dd0c4 = (GPR_S32(ctx, 15) <= 0);
        ctx->pc = 0x2DD0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD0C4u;
        // 0x2dd0c8: 0x11457782  beq         $t2, $a1, . + 4 + (0x7782 << 2) (Delay Slot)
        // Likely branch instruction at 0x2DD0C8 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd0c4) {
            ctx->pc = 0x2CDCD4u;
            return;
        }
    }
label_fallthrough_0x2dd0c4:
    ctx->pc = 0x2DD0CCu;
    // 0x2dd0cc: 0x1165dde3  beq         $t3, $a1, . + 4 + (-0x221D << 2)
    ctx->pc = 0x2DD0CCu;
    {
        const bool branch_taken_0x2dd0cc = (GPR_U64(ctx, 11) == GPR_U64(ctx, 5));
        ctx->pc = 0x2DD0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD0CCu;
        // 0x2dd0d0: 0x194d9b83  .word       0x194D9B83                   # blez        $t2, . + 4 + (-0x647D << 2) # 000D0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2DD0D0 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd0cc) {
            ctx->pc = 0x2D485Cu;
            return;
        }
    }
    ctx->pc = 0x2DD0D4u;
    // 0x2dd0d4: 0x114dd783  beq         $t2, $t5, . + 4 + (-0x287D << 2)
    ctx->pc = 0x2DD0D4u;
    {
        const bool branch_taken_0x2dd0d4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 13));
        ctx->pc = 0x2DD0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD0D4u;
        // 0x2dd0d8: 0xc0454a2  jal         func_115288 (Delay Slot)
        // JAL 0x115288 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd0d4) {
            ctx->pc = 0x2D2EE4u;
            return;
        }
    }
    ctx->pc = 0x2DD0DCu;
    // 0x2dd0dc: 0x19edc303  .word       0x19EDC303                   # blez        $t7, . + 4 + (-0x3CFD << 2) # 000D0000 <InstrIdType: CPU_NORMAL>
label_2dd0e0:
    if (ctx->pc == 0x2DD0E0u) {
        ctx->pc = 0x2DD0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD0DCu;
        // 0x2dd0e0: 0x1000000b  b           . + 4 + (0xB << 2) (Delay Slot)
        // Likely branch instruction at 0x2DD0E0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD0E4u;
        goto label_fallthrough_0x2dd0dc;
    }
    ctx->pc = 0x2DD0DCu;
    {
        const bool branch_taken_0x2dd0dc = (GPR_S32(ctx, 15) <= 0);
        ctx->pc = 0x2DD0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD0DCu;
        // 0x2dd0e0: 0x1000000b  b           . + 4 + (0xB << 2) (Delay Slot)
        // Likely branch instruction at 0x2DD0E0 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd0dc) {
            ctx->pc = 0x2CDCECu;
            return;
        }
    }
label_fallthrough_0x2dd0dc:
    ctx->pc = 0x2DD0E4u;
    // 0x2dd0e4: 0x0  nop
    ctx->pc = 0x2dd0e4u;
    // NOP
    // 0x2dd0e8: 0x263b020  add         $s6, $s3, $v1
    ctx->pc = 0x2dd0e8u;
    {     int32_t rs_val = GPR_S32(ctx, 19);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x2dd0ec: 0xdeca86c7  ld          $t2, -0x7939($s6)
    ctx->pc = 0x2dd0ecu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 22), 4294936263)));
    // 0x2dd0f0: 0x11f0820  add         $at, $t0, $ra
    ctx->pc = 0x2dd0f0u;
    {     int32_t rs_val = GPR_S32(ctx, 8);     int32_t rt_val = GPR_S32(ctx, 31);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
    // 0x2dd0f4: 0xff87390a  sd          $a3, 0x390A($gp)
    ctx->pc = 0x2dd0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 14602), GPR_U64(ctx, 7));
    // 0x2dd0f8: 0xa13616b1  sb          $s6, 0x16B1($t1)
    ctx->pc = 0x2dd0f8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 5809), (uint8_t)GPR_U32(ctx, 22));
    // 0x2dd0fc: 0x8f1111cd  lw          $s1, 0x11CD($t8)
    ctx->pc = 0x2dd0fcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 4557)));
    // 0x2dd100: 0x5057154c  beql        $v0, $s7, . + 4 + (0x154C << 2)
    ctx->pc = 0x2DD100u;
    {
        const bool branch_taken_0x2dd100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        if (branch_taken_0x2dd100) {
            ctx->pc = 0x2DD104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD100u;
            // 0x2dd104: 0xc712fe4f  lwc1        $f18, -0x1B1($t8) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294966863)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2634u;
            return;
        }
    }
    ctx->pc = 0x2DD108u;
    // 0x2dd108: 0x505715fc  beql        $v0, $s7, . + 4 + (0x15FC << 2)
    ctx->pc = 0x2DD108u;
    {
        const bool branch_taken_0x2dd108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        if (branch_taken_0x2dd108) {
            ctx->pc = 0x2E28FCu;
            return;
        }
    }
    ctx->pc = 0x2DD110u;
label_2dd110:
    // 0x2dd110: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x2dd110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x2dd114: 0x2442d100  addiu       $v0, $v0, -0x2F00
    ctx->pc = 0x2dd114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955264));
    // 0x2dd118: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2dd118u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2dd11c: 0x2484d0e0  addiu       $a0, $a0, -0x2F20
    ctx->pc = 0x2dd11cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955232));
    // 0x2dd120: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2dd120u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2dd124: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2dd124u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2dd128: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2DD128u;
    SET_GPR_U32(ctx, 31, 0x2DD130u);
    ctx->pc = 0x2DD12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD128u;
    // 0x2dd12c: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FC0u, 0x2DD128u, 0x2DD130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD130u;
label_2dd130:
    // 0x2dd130: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2dd130u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd134: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2dd134u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dd138: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2dd138u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2dd13c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2dd13cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dd140: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2dd140u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2dd144: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2dd144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dd148: 0x3e00008  jr          $ra
    ctx->pc = 0x2DD148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD148u;
        // 0x2dd14c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DD150u;
}
