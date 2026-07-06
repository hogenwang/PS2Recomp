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

// Function: sub_0019EF10
// Address: 0x19ef10 - 0x19f060
void sub_0019EF10_0x19ef10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019EF10_0x19ef10");
#endif

    switch (ctx->pc) {
        case 0x19efc8u: goto label_19efc8;
        default: break;
    }

    ctx->pc = 0x19ef10u;

    // 0x19ef10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19ef10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19ef14: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x19ef14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x19ef18: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x19ef18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x19ef1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19ef1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19ef20: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x19ef20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x19ef24: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19ef24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19ef28: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19ef28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19ef2c: 0x2442db50  addiu       $v0, $v0, -0x24B0
    ctx->pc = 0x19ef2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957904));
    // 0x19ef30: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x19ef30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x19ef34: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x19ef34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19ef38: 0x94a30022  lhu         $v1, 0x22($a1)
    ctx->pc = 0x19ef38u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 34)));
    // 0x19ef3c: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x19ef3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x19ef40: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x19EF40u;
    {
        const bool branch_taken_0x19ef40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19ef40) {
            ctx->pc = 0x19EF44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19EF40u;
            // 0x19ef44: 0x94a20020  lhu         $v0, 0x20($a1) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19EF98u;
            goto label_19ef98;
        }
    }
    ctx->pc = 0x19EF48u;
    // 0x19ef48: 0x94a20024  lhu         $v0, 0x24($a1)
    ctx->pc = 0x19ef48u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x19ef4c: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x19EF4Cu;
    {
        const bool branch_taken_0x19ef4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19ef4c) {
            ctx->pc = 0x19EF94u;
            goto label_19ef94;
        }
    }
    ctx->pc = 0x19EF54u;
    // 0x19ef54: 0x94a20026  lhu         $v0, 0x26($a1)
    ctx->pc = 0x19ef54u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 38)));
    // 0x19ef58: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x19EF58u;
    {
        const bool branch_taken_0x19ef58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19ef58) {
            ctx->pc = 0x19EF94u;
            goto label_19ef94;
        }
    }
    ctx->pc = 0x19EF60u;
    // 0x19ef60: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19ef60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19ef64: 0x8442da68  lh          $v0, -0x2598($v0)
    ctx->pc = 0x19ef64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957672)));
    // 0x19ef68: 0x28412a31  slti        $at, $v0, 0x2A31
    ctx->pc = 0x19ef68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10801) ? 1 : 0);
    // 0x19ef6c: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x19EF6Cu;
    {
        const bool branch_taken_0x19ef6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ef6c) {
            ctx->pc = 0x19EF94u;
            goto label_19ef94;
        }
    }
    ctx->pc = 0x19EF74u;
    // 0x19ef74: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19ef74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19ef78: 0x2442da90  addiu       $v0, $v0, -0x2570
    ctx->pc = 0x19ef78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957712));
    // 0x19ef7c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x19ef7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x19ef80: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x19ef80u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19ef84: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19EF84u;
    {
        const bool branch_taken_0x19ef84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19ef84) {
            ctx->pc = 0x19EF94u;
            goto label_19ef94;
        }
    }
    ctx->pc = 0x19EF8Cu;
    // 0x19ef8c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x19EF8Cu;
    {
        const bool branch_taken_0x19ef8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EF8Cu;
        // 0x19ef90: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ef8c) {
            ctx->pc = 0x19F048u;
            goto label_19f048;
        }
    }
    ctx->pc = 0x19EF94u;
label_19ef94:
    // 0x19ef94: 0x94a20020  lhu         $v0, 0x20($a1)
    ctx->pc = 0x19ef94u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 32)));
label_19ef98:
    // 0x19ef98: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x19ef98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19ef9c: 0x28420006  slti        $v0, $v0, 0x6
    ctx->pc = 0x19ef9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x19efa0: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x19EFA0u;
    {
        const bool branch_taken_0x19efa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19efa0) {
            ctx->pc = 0x19F008u;
            goto label_19f008;
        }
    }
    ctx->pc = 0x19EFA8u;
    // 0x19efa8: 0x94a20024  lhu         $v0, 0x24($a1)
    ctx->pc = 0x19efa8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x19efac: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x19EFACu;
    {
        const bool branch_taken_0x19efac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19efac) {
            ctx->pc = 0x19F008u;
            goto label_19f008;
        }
    }
    ctx->pc = 0x19EFB4u;
    // 0x19efb4: 0x94a20026  lhu         $v0, 0x26($a1)
    ctx->pc = 0x19efb4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 38)));
    // 0x19efb8: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x19EFB8u;
    {
        const bool branch_taken_0x19efb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19efb8) {
            ctx->pc = 0x19F008u;
            goto label_19f008;
        }
    }
    ctx->pc = 0x19EFC0u;
    // 0x19efc0: 0xc067c48  jal         func_19F120
    ctx->pc = 0x19EFC0u;
    SET_GPR_U32(ctx, 31, 0x19EFC8u);
    ctx->pc = 0x19F120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F120u, 0x19EFC0u, 0x19EFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EFC8u;
label_19efc8:
    // 0x19efc8: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x19efc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x19efcc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19efccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19efd0: 0x0  nop
    ctx->pc = 0x19efd0u;
    // NOP
    // 0x19efd4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19efd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19efd8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19efd8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x19efdc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x19efdcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x19efe0: 0x0  nop
    ctx->pc = 0x19efe0u;
    // NOP
    // 0x19efe4: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19EFE4u;
    {
        const bool branch_taken_0x19efe4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x19EFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EFE4u;
        // 0x19efe8: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19efe4) {
            ctx->pc = 0x19EFF8u;
            goto label_19eff8;
        }
    }
    ctx->pc = 0x19EFECu;
    // 0x19efec: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19EFECu;
    {
        const bool branch_taken_0x19efec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19efec) {
            ctx->pc = 0x19EFF8u;
            goto label_19eff8;
        }
    }
    ctx->pc = 0x19EFF4u;
    // 0x19eff4: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x19eff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_19eff8:
    // 0x19eff8: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x19EFF8u;
    {
        const bool branch_taken_0x19eff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19eff8) {
            ctx->pc = 0x19EFFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19EFF8u;
            // 0x19effc: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F048u;
            goto label_19f048;
        }
    }
    ctx->pc = 0x19F000u;
    // 0x19f000: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x19F000u;
    {
        const bool branch_taken_0x19f000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F000u;
        // 0x19f004: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f000) {
            ctx->pc = 0x19F048u;
            goto label_19f048;
        }
    }
    ctx->pc = 0x19F008u;
label_19f008:
    // 0x19f008: 0x5860000f  blezl       $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x19F008u;
    {
        const bool branch_taken_0x19f008 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x19f008) {
            ctx->pc = 0x19F00Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F008u;
            // 0x19f00c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F048u;
            goto label_19f048;
        }
    }
    ctx->pc = 0x19F010u;
    // 0x19f010: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19f010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19f014: 0x8442da68  lh          $v0, -0x2598($v0)
    ctx->pc = 0x19f014u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957672)));
    // 0x19f018: 0x28412a31  slti        $at, $v0, 0x2A31
    ctx->pc = 0x19f018u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10801) ? 1 : 0);
    // 0x19f01c: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x19F01Cu;
    {
        const bool branch_taken_0x19f01c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f01c) {
            ctx->pc = 0x19F044u;
            goto label_19f044;
        }
    }
    ctx->pc = 0x19F024u;
    // 0x19f024: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19f024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19f028: 0x2442da90  addiu       $v0, $v0, -0x2570
    ctx->pc = 0x19f028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957712));
    // 0x19f02c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x19f02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x19f030: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x19f030u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19f034: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19F034u;
    {
        const bool branch_taken_0x19f034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19f034) {
            ctx->pc = 0x19F044u;
            goto label_19f044;
        }
    }
    ctx->pc = 0x19F03Cu;
    // 0x19f03c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19F03Cu;
    {
        const bool branch_taken_0x19f03c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F03Cu;
        // 0x19f040: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f03c) {
            ctx->pc = 0x19F048u;
            goto label_19f048;
        }
    }
    ctx->pc = 0x19F044u;
label_19f044:
    // 0x19f044: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19f044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19f048:
    // 0x19f048: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19f048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f04c: 0x3e00008  jr          $ra
    ctx->pc = 0x19F04Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F04Cu;
        // 0x19f050: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F04Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F054u;
    // 0x19f054: 0x0  nop
    ctx->pc = 0x19f054u;
    // NOP
    // 0x19f058: 0x0  nop
    ctx->pc = 0x19f058u;
    // NOP
    // 0x19f05c: 0x0  nop
    ctx->pc = 0x19f05cu;
    // NOP
}
