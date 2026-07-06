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

// Function: sub_002FEA80
// Address: 0x2fea80 - 0x2ff050
void sub_002FEA80_0x2fea80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FEA80_0x2fea80");
#endif

    switch (ctx->pc) {
        case 0x2feac0u: goto label_2feac0;
        case 0x2fead0u: goto label_2fead0;
        case 0x2feb24u: goto label_2feb24;
        case 0x2feb34u: goto label_2feb34;
        case 0x2feb84u: goto label_2feb84;
        case 0x2feb94u: goto label_2feb94;
        case 0x2fec20u: goto label_2fec20;
        case 0x2fec30u: goto label_2fec30;
        case 0x2fec3cu: goto label_2fec3c;
        case 0x2fec84u: goto label_2fec84;
        case 0x2fec88u: goto label_2fec88;
        case 0x2fec9cu: goto label_2fec9c;
        case 0x2fecacu: goto label_2fecac;
        case 0x2fecd8u: goto label_2fecd8;
        case 0x2fed2cu: goto label_2fed2c;
        case 0x2fed74u: goto label_2fed74;
        case 0x2fed88u: goto label_2fed88;
        case 0x2fedbcu: goto label_2fedbc;
        case 0x2fede0u: goto label_2fede0;
        case 0x2fedfcu: goto label_2fedfc;
        case 0x2fee34u: goto label_2fee34;
        case 0x2fee44u: goto label_2fee44;
        case 0x2fee64u: goto label_2fee64;
        case 0x2fee8cu: goto label_2fee8c;
        case 0x2feeb0u: goto label_2feeb0;
        case 0x2feec8u: goto label_2feec8;
        case 0x2feef4u: goto label_2feef4;
        case 0x2fef04u: goto label_2fef04;
        case 0x2fef20u: goto label_2fef20;
        case 0x2fef38u: goto label_2fef38;
        case 0x2fef78u: goto label_2fef78;
        case 0x2fef88u: goto label_2fef88;
        case 0x2fefacu: goto label_2fefac;
        case 0x2fefc8u: goto label_2fefc8;
        case 0x2fefd8u: goto label_2fefd8;
        case 0x2ff004u: goto label_2ff004;
        case 0x2ff028u: goto label_2ff028;
        case 0x2ff038u: goto label_2ff038;
        default: break;
    }

    ctx->pc = 0x2fea80u;

    // 0x2fea80: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2fea80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2fea84: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x2fea84u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x2fea88: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2fea88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2fea8c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2fea8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fea90: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2fea90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2fea94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fea94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fea98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fea98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2fea9c: 0x24c630e0  addiu       $a2, $a2, 0x30E0
    ctx->pc = 0x2fea9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12512));
    // 0x2feaa0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2feaa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2feaa4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2feaa4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2feaa8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2feaa8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2feaac: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x2feaacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2feab0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2feab0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2feab4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2feab4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2feab8: 0xc047c0a  jal         func_11F028
    ctx->pc = 0x2FEAB8u;
    SET_GPR_U32(ctx, 31, 0x2FEAC0u);
    ctx->pc = 0x2FEABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEAB8u;
    // 0x2feabc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F028u, 0x2FEAB8u, 0x2FEAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEAC0u;
label_2feac0:
    // 0x2feac0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2feac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2feac4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2feac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2feac8: 0xc047b46  jal         func_11ED18
    ctx->pc = 0x2FEAC8u;
    SET_GPR_U32(ctx, 31, 0x2FEAD0u);
    ctx->pc = 0x2FEACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEAC8u;
    // 0x2feacc: 0x27a600bc  addiu       $a2, $sp, 0xBC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ED18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ED18u, 0x2FEAC8u, 0x2FEAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEAD0u;
label_2fead0:
    // 0x2fead0: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x2fead0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x2fead4: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2FEAD4u;
    {
        const bool branch_taken_0x2fead4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2fead4) {
            ctx->pc = 0x2FEB04u;
            goto label_2feb04;
        }
    }
    ctx->pc = 0x2FEADCu;
    // 0x2feadc: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2feadcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2feae0: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2feae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2feae4: 0x344295b8  ori         $v0, $v0, 0x95B8
    ctx->pc = 0x2feae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38328);
    // 0x2feae8: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FEAE8u;
    {
        const bool branch_taken_0x2feae8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2feae8) {
            ctx->pc = 0x2FEAECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FEAE8u;
            // 0x2feaec: 0x246203ff  addiu       $v0, $v1, 0x3FF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1023));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FEAF8u;
            goto label_2feaf8;
        }
    }
    ctx->pc = 0x2FEAF0u;
    // 0x2feaf0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2feaf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2feaf4: 0x246203ff  addiu       $v0, $v1, 0x3FF
    ctx->pc = 0x2feaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1023));
label_2feaf8:
    // 0x2feaf8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2feaf8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2feafc: 0x21282  srl         $v0, $v0, 10
    ctx->pc = 0x2feafcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 10));
    // 0x2feb00: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x2feb00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_2feb04:
    // 0x2feb04: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x2feb04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x2feb08: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2feb08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2feb0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2feb0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2feb10: 0x24c63110  addiu       $a2, $a2, 0x3110
    ctx->pc = 0x2feb10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12560));
    // 0x2feb14: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2feb14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2feb18: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2feb18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2feb1c: 0xc047c0a  jal         func_11F028
    ctx->pc = 0x2FEB1Cu;
    SET_GPR_U32(ctx, 31, 0x2FEB24u);
    ctx->pc = 0x2FEB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEB1Cu;
    // 0x2feb20: 0x27a90040  addiu       $t1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F028u, 0x2FEB1Cu, 0x2FEB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEB24u;
label_2feb24:
    // 0x2feb24: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2feb24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2feb28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2feb28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2feb2c: 0xc047b46  jal         func_11ED18
    ctx->pc = 0x2FEB2Cu;
    SET_GPR_U32(ctx, 31, 0x2FEB34u);
    ctx->pc = 0x2FEB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEB2Cu;
    // 0x2feb30: 0x27a600bc  addiu       $a2, $sp, 0xBC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ED18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ED18u, 0x2FEB2Cu, 0x2FEB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEB34u;
label_2feb34:
    // 0x2feb34: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x2feb34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x2feb38: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2FEB38u;
    {
        const bool branch_taken_0x2feb38 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2feb38) {
            ctx->pc = 0x2FEB64u;
            goto label_2feb64;
        }
    }
    ctx->pc = 0x2FEB40u;
    // 0x2feb40: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2feb40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2feb44: 0x240203c4  addiu       $v0, $zero, 0x3C4
    ctx->pc = 0x2feb44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 964));
    // 0x2feb48: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FEB48u;
    {
        const bool branch_taken_0x2feb48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2feb48) {
            ctx->pc = 0x2FEB4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FEB48u;
            // 0x2feb4c: 0x246203ff  addiu       $v0, $v1, 0x3FF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1023));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FEB58u;
            goto label_2feb58;
        }
    }
    ctx->pc = 0x2FEB50u;
    // 0x2feb50: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2feb50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2feb54: 0x246203ff  addiu       $v0, $v1, 0x3FF
    ctx->pc = 0x2feb54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1023));
label_2feb58:
    // 0x2feb58: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2feb58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2feb5c: 0x21282  srl         $v0, $v0, 10
    ctx->pc = 0x2feb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 10));
    // 0x2feb60: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x2feb60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_2feb64:
    // 0x2feb64: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x2feb64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x2feb68: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2feb68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2feb6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2feb6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2feb70: 0x24c63130  addiu       $a2, $a2, 0x3130
    ctx->pc = 0x2feb70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12592));
    // 0x2feb74: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2feb74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2feb78: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2feb78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2feb7c: 0xc047c0a  jal         func_11F028
    ctx->pc = 0x2FEB7Cu;
    SET_GPR_U32(ctx, 31, 0x2FEB84u);
    ctx->pc = 0x2FEB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEB7Cu;
    // 0x2feb80: 0x27a90040  addiu       $t1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F028u, 0x2FEB7Cu, 0x2FEB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEB84u;
label_2feb84:
    // 0x2feb84: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2feb84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2feb88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2feb88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2feb8c: 0xc047b46  jal         func_11ED18
    ctx->pc = 0x2FEB8Cu;
    SET_GPR_U32(ctx, 31, 0x2FEB94u);
    ctx->pc = 0x2FEB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEB8Cu;
    // 0x2feb90: 0x27a600bc  addiu       $a2, $sp, 0xBC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ED18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ED18u, 0x2FEB8Cu, 0x2FEB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEB94u;
label_2feb94:
    // 0x2feb94: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x2feb94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x2feb98: 0x5840000b  blezl       $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2FEB98u;
    {
        const bool branch_taken_0x2feb98 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2feb98) {
            ctx->pc = 0x2FEB9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FEB98u;
            // 0x2feb9c: 0x2a210003  slti        $at, $s1, 0x3 (Delay Slot)
            SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FEBC8u;
            goto label_2febc8;
        }
    }
    ctx->pc = 0x2FEBA0u;
    // 0x2feba0: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2feba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2feba4: 0x3402c5f8  ori         $v0, $zero, 0xC5F8
    ctx->pc = 0x2feba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50680);
    // 0x2feba8: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FEBA8u;
    {
        const bool branch_taken_0x2feba8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2feba8) {
            ctx->pc = 0x2FEBACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FEBA8u;
            // 0x2febac: 0x246203ff  addiu       $v0, $v1, 0x3FF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1023));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FEBB8u;
            goto label_2febb8;
        }
    }
    ctx->pc = 0x2FEBB0u;
    // 0x2febb0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2febb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2febb4: 0x246203ff  addiu       $v0, $v1, 0x3FF
    ctx->pc = 0x2febb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1023));
label_2febb8:
    // 0x2febb8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2febb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2febbc: 0x21282  srl         $v0, $v0, 10
    ctx->pc = 0x2febbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 10));
    // 0x2febc0: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x2febc0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2febc4: 0x2a210003  slti        $at, $s1, 0x3
    ctx->pc = 0x2febc4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
label_2febc8:
    // 0x2febc8: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FEBC8u;
    {
        const bool branch_taken_0x2febc8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2febc8) {
            ctx->pc = 0x2FEBD8u;
            goto label_2febd8;
        }
    }
    ctx->pc = 0x2FEBD0u;
    // 0x2febd0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2FEBD0u;
    {
        const bool branch_taken_0x2febd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FEBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEBD0u;
        // 0x2febd4: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2febd0) {
            ctx->pc = 0x2FEBE4u;
            goto label_2febe4;
        }
    }
    ctx->pc = 0x2FEBD8u;
label_2febd8:
    // 0x2febd8: 0x52200003  beql        $s1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FEBD8u;
    {
        const bool branch_taken_0x2febd8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2febd8) {
            ctx->pc = 0x2FEBDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FEBD8u;
            // 0x2febdc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FEBE8u;
            goto label_2febe8;
        }
    }
    ctx->pc = 0x2FEBE0u;
    // 0x2febe0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2febe0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2febe4:
    // 0x2febe4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2febe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2febe8:
    // 0x2febe8: 0x16020002  bne         $s0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2FEBE8u;
    {
        const bool branch_taken_0x2febe8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2febe8) {
            ctx->pc = 0x2FEBF4u;
            goto label_2febf4;
        }
    }
    ctx->pc = 0x2FEBF0u;
    // 0x2febf0: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x2febf0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2febf4:
    // 0x2febf4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2febf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2febf8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2febf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2febfc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2febfcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fec00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fec00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fec04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fec04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fec08: 0x3e00008  jr          $ra
    ctx->pc = 0x2FEC08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FEC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEC08u;
        // 0x2fec0c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FEC08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FEC10u;
    // 0x2fec10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fec10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fec14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fec14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fec18: 0xc069184  jal         func_1A4610
    ctx->pc = 0x2FEC18u;
    SET_GPR_U32(ctx, 31, 0x2FEC20u);
    ctx->pc = 0x2FEC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEC18u;
    // 0x2fec1c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4610u, 0x2FEC18u, 0x2FEC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEC20u;
label_2fec20:
    // 0x2fec20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fec20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fec24: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x2fec24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x2fec28: 0xc0bf40c  jal         func_2FD030
    ctx->pc = 0x2FEC28u;
    SET_GPR_U32(ctx, 31, 0x2FEC30u);
    ctx->pc = 0x2FEC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEC28u;
    // 0x2fec2c: 0xac439728  sw          $v1, -0x68D8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294940456), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FD030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD030u, 0x2FEC28u, 0x2FEC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEC30u;
label_2fec30:
    // 0x2fec30: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x2fec30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x2fec34: 0xc0bf7e8  jal         func_2FDFA0
    ctx->pc = 0x2FEC34u;
    SET_GPR_U32(ctx, 31, 0x2FEC3Cu);
    ctx->pc = 0x2FEC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEC34u;
    // 0x2fec38: 0x2484ec50  addiu       $a0, $a0, -0x13B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDFA0u, 0x2FEC34u, 0x2FEC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEC3Cu;
label_2fec3c:
    // 0x2fec3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fec3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fec40: 0x3e00008  jr          $ra
    ctx->pc = 0x2FEC40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FEC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEC40u;
        // 0x2fec44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FEC40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FEC48u;
    // 0x2fec48: 0x0  nop
    ctx->pc = 0x2fec48u;
    // NOP
    // 0x2fec4c: 0x0  nop
    ctx->pc = 0x2fec4cu;
    // NOP
    // 0x2fec50: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x2fec50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x2fec54: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2fec54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2fec58: 0x24a5ec70  addiu       $a1, $a1, -0x1390
    ctx->pc = 0x2fec58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962288));
    // 0x2fec5c: 0x80bf89c  j           func_2FE270
    ctx->pc = 0x2FEC5Cu;
    ctx->pc = 0x2FEC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEC5Cu;
    // 0x2fec60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE270u;
    sub_002FE270_0x2fe270(rdram, ctx, runtime); return;
    ctx->pc = 0x2FEC64u;
    // 0x2fec64: 0x0  nop
    ctx->pc = 0x2fec64u;
    // NOP
    // 0x2fec68: 0x0  nop
    ctx->pc = 0x2fec68u;
    // NOP
    // 0x2fec6c: 0x0  nop
    ctx->pc = 0x2fec6cu;
    // NOP
    // 0x2fec70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fec70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2fec74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fec74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2fec78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fec78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2fec7c: 0xc0bf528  jal         func_2FD4A0
    ctx->pc = 0x2FEC7Cu;
    SET_GPR_U32(ctx, 31, 0x2FEC84u);
    ctx->pc = 0x2FEC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEC7Cu;
    // 0x2fec80: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FD4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD4A0u, 0x2FEC7Cu, 0x2FEC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEC84u;
label_2fec84:
    // 0x2fec84: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2fec84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fec88:
    // 0x2fec88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fec88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fec8c: 0x27a6002c  addiu       $a2, $sp, 0x2C
    ctx->pc = 0x2fec8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x2fec90: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2fec90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fec94: 0xc047b8e  jal         func_11EE38
    ctx->pc = 0x2FEC94u;
    SET_GPR_U32(ctx, 31, 0x2FEC9Cu);
    ctx->pc = 0x2FEC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEC94u;
    // 0x2fec98: 0x27a80028  addiu       $t0, $sp, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE38u, 0x2FEC94u, 0x2FEC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEC9Cu;
label_2fec9c:
    // 0x2fec9c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2fec9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2feca0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2feca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2feca4: 0xc047b46  jal         func_11ED18
    ctx->pc = 0x2FECA4u;
    SET_GPR_U32(ctx, 31, 0x2FECACu);
    ctx->pc = 0x2FECA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FECA4u;
    // 0x2feca8: 0x27a60024  addiu       $a2, $sp, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ED18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ED18u, 0x2FECA4u, 0x2FECACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FECACu;
label_2fecac:
    // 0x2fecac: 0x8fa5002c  lw          $a1, 0x2C($sp)
    ctx->pc = 0x2fecacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x2fecb0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2fecb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fecb4: 0x50a4000a  beql        $a1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2FECB4u;
    {
        const bool branch_taken_0x2fecb4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x2fecb4) {
            ctx->pc = 0x2FECB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FECB4u;
            // 0x2fecb8: 0x8fa30024  lw          $v1, 0x24($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FECE0u;
            goto label_2fece0;
        }
    }
    ctx->pc = 0x2FECBCu;
    // 0x2fecbc: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x2fecbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x2fecc0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fecc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fecc4: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x2fecc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x2fecc8: 0x24a5ec50  addiu       $a1, $a1, -0x13B0
    ctx->pc = 0x2fecc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962256));
    // 0x2feccc: 0xa0430c20  sb          $v1, 0xC20($v0)
    ctx->pc = 0x2fecccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3104), (uint8_t)GPR_U32(ctx, 3));
    // 0x2fecd0: 0xc0bf834  jal         func_2FE0D0
    ctx->pc = 0x2FECD0u;
    SET_GPR_U32(ctx, 31, 0x2FECD8u);
    ctx->pc = 0x2FECD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FECD0u;
    // 0x2fecd4: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE0D0u, 0x2FECD0u, 0x2FECD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FECD8u;
label_2fecd8:
    // 0x2fecd8: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x2FECD8u;
    {
        const bool branch_taken_0x2fecd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FECDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FECD8u;
        // 0x2fecdc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fecd8) {
            ctx->pc = 0x2FEE00u;
            goto label_2fee00;
        }
    }
    ctx->pc = 0x2FECE0u;
label_2fece0:
    // 0x2fece0: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x2fece0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2fece4: 0x1062002a  beq         $v1, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2FECE4u;
    {
        const bool branch_taken_0x2fece4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2fece4) {
            ctx->pc = 0x2FED90u;
            goto label_2fed90;
        }
    }
    ctx->pc = 0x2FECECu;
    // 0x2fecec: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2FECECu;
    {
        const bool branch_taken_0x2fecec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fecec) {
            ctx->pc = 0x2FED40u;
            goto label_2fed40;
        }
    }
    ctx->pc = 0x2FECF4u;
    // 0x2fecf4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2fecf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2fecf8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FECF8u;
    {
        const bool branch_taken_0x2fecf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2fecf8) {
            ctx->pc = 0x2FED08u;
            goto label_2fed08;
        }
    }
    ctx->pc = 0x2FED00u;
    // 0x2fed00: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x2FED00u;
    {
        const bool branch_taken_0x2fed00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FED04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FED00u;
        // 0x2fed04: 0x3c050030  lui         $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fed00) {
            ctx->pc = 0x2FEDF0u;
            goto label_2fedf0;
        }
    }
    ctx->pc = 0x2FED08u;
label_2fed08:
    // 0x2fed08: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x2fed08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x2fed0c: 0x90420c20  lbu         $v0, 0xC20($v0)
    ctx->pc = 0x2fed0cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3104)));
    // 0x2fed10: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2FED10u;
    {
        const bool branch_taken_0x2fed10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fed10) {
            ctx->pc = 0x2FED14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FED10u;
            // 0x2fed14: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FED34u;
            goto label_2fed34;
        }
    }
    ctx->pc = 0x2FED18u;
    // 0x2fed18: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x2fed18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x2fed1c: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x2fed1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2fed20: 0x24a5ec70  addiu       $a1, $a1, -0x1390
    ctx->pc = 0x2fed20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962288));
    // 0x2fed24: 0xc0bf89c  jal         func_2FE270
    ctx->pc = 0x2FED24u;
    SET_GPR_U32(ctx, 31, 0x2FED2Cu);
    ctx->pc = 0x2FED28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FED24u;
    // 0x2fed28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE270u, 0x2FED24u, 0x2FED2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FED2Cu;
label_2fed2c:
    // 0x2fed2c: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x2FED2Cu;
    {
        const bool branch_taken_0x2fed2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fed2c) {
            ctx->pc = 0x2FEDFCu;
            goto label_2fedfc;
        }
    }
    ctx->pc = 0x2FED34u;
label_2fed34:
    // 0x2fed34: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x2fed34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x2fed38: 0xa0430c20  sb          $v1, 0xC20($v0)
    ctx->pc = 0x2fed38u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3104), (uint8_t)GPR_U32(ctx, 3));
    // 0x2fed3c: 0x0  nop
    ctx->pc = 0x2fed3cu;
    // NOP
label_2fed40:
    // 0x2fed40: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2fed40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fed44: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2FED44u;
    {
        const bool branch_taken_0x2fed44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fed44) {
            ctx->pc = 0x2FED7Cu;
            goto label_2fed7c;
        }
    }
    ctx->pc = 0x2FED4Cu;
    // 0x2fed4c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2fed4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2fed50: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x2fed50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2fed54: 0x5440ffcc  bnel        $v0, $zero, . + 4 + (-0x34 << 2)
    ctx->pc = 0x2FED54u;
    {
        const bool branch_taken_0x2fed54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fed54) {
            ctx->pc = 0x2FED58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FED54u;
            // 0x2fed58: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FEC88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2fec88;
        }
    }
    ctx->pc = 0x2FED5Cu;
    // 0x2fed5c: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x2fed5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x2fed60: 0x3c060030  lui         $a2, 0x30
    ctx->pc = 0x2fed60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
    // 0x2fed64: 0x24a5ee10  addiu       $a1, $a1, -0x11F0
    ctx->pc = 0x2fed64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962704));
    // 0x2fed68: 0x24c6ec50  addiu       $a2, $a2, -0x13B0
    ctx->pc = 0x2fed68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962256));
    // 0x2fed6c: 0xc0bf89c  jal         func_2FE270
    ctx->pc = 0x2FED6Cu;
    SET_GPR_U32(ctx, 31, 0x2FED74u);
    ctx->pc = 0x2FED70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FED6Cu;
    // 0x2fed70: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE270u, 0x2FED6Cu, 0x2FED74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FED74u;
label_2fed74:
    // 0x2fed74: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2FED74u;
    {
        const bool branch_taken_0x2fed74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fed74) {
            ctx->pc = 0x2FEDFCu;
            goto label_2fedfc;
        }
    }
    ctx->pc = 0x2FED7Cu;
label_2fed7c:
    // 0x2fed7c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x2fed7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x2fed80: 0xc082674  jal         func_2099D0
    ctx->pc = 0x2FED80u;
    SET_GPR_U32(ctx, 31, 0x2FED88u);
    ctx->pc = 0x2FED84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FED80u;
    // 0x2fed84: 0x2484ef50  addiu       $a0, $a0, -0x10B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x2FED80u, 0x2FED88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FED88u;
label_2fed88:
    // 0x2fed88: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2FED88u;
    {
        const bool branch_taken_0x2fed88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fed88) {
            ctx->pc = 0x2FEDFCu;
            goto label_2fedfc;
        }
    }
    ctx->pc = 0x2FED90u;
label_2fed90:
    // 0x2fed90: 0x14a4000f  bne         $a1, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x2FED90u;
    {
        const bool branch_taken_0x2fed90 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x2fed90) {
            ctx->pc = 0x2FEDD0u;
            goto label_2fedd0;
        }
    }
    ctx->pc = 0x2FED98u;
    // 0x2fed98: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x2fed98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x2fed9c: 0x90420c20  lbu         $v0, 0xC20($v0)
    ctx->pc = 0x2fed9cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3104)));
    // 0x2feda0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2FEDA0u;
    {
        const bool branch_taken_0x2feda0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2feda0) {
            ctx->pc = 0x2FEDA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FEDA0u;
            // 0x2feda4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FEDC4u;
            goto label_2fedc4;
        }
    }
    ctx->pc = 0x2FEDA8u;
    // 0x2feda8: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x2feda8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x2fedac: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x2fedacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2fedb0: 0x24a5ec70  addiu       $a1, $a1, -0x1390
    ctx->pc = 0x2fedb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962288));
    // 0x2fedb4: 0xc0bf89c  jal         func_2FE270
    ctx->pc = 0x2FEDB4u;
    SET_GPR_U32(ctx, 31, 0x2FEDBCu);
    ctx->pc = 0x2FEDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEDB4u;
    // 0x2fedb8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE270u, 0x2FEDB4u, 0x2FEDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEDBCu;
label_2fedbc:
    // 0x2fedbc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2FEDBCu;
    {
        const bool branch_taken_0x2fedbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FEDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEDBCu;
        // 0x2fedc0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fedbc) {
            ctx->pc = 0x2FEDE4u;
            goto label_2fede4;
        }
    }
    ctx->pc = 0x2FEDC4u;
label_2fedc4:
    // 0x2fedc4: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x2fedc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x2fedc8: 0x1000ffae  b           . + 4 + (-0x52 << 2)
    ctx->pc = 0x2FEDC8u;
    {
        const bool branch_taken_0x2fedc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FEDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEDC8u;
        // 0x2fedcc: 0xa0430c20  sb          $v1, 0xC20($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 3104), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fedc8) {
            ctx->pc = 0x2FEC84u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2fec84;
        }
    }
    ctx->pc = 0x2FEDD0u;
label_2fedd0:
    // 0x2fedd0: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x2fedd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x2fedd4: 0x24a5ec50  addiu       $a1, $a1, -0x13B0
    ctx->pc = 0x2fedd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962256));
    // 0x2fedd8: 0xc0bf834  jal         func_2FE0D0
    ctx->pc = 0x2FEDD8u;
    SET_GPR_U32(ctx, 31, 0x2FEDE0u);
    ctx->pc = 0x2FEDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEDD8u;
    // 0x2feddc: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE0D0u, 0x2FEDD8u, 0x2FEDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEDE0u;
label_2fede0:
    // 0x2fede0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2fede0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fede4:
    // 0x2fede4: 0x3c0301cb  lui         $v1, 0x1CB
    ctx->pc = 0x2fede4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
    // 0x2fede8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2FEDE8u;
    {
        const bool branch_taken_0x2fede8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FEDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEDE8u;
        // 0x2fedec: 0xa0640c20  sb          $a0, 0xC20($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 3104), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fede8) {
            ctx->pc = 0x2FEDFCu;
            goto label_2fedfc;
        }
    }
    ctx->pc = 0x2FEDF0u;
label_2fedf0:
    // 0x2fedf0: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x2fedf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2fedf4: 0xc0bf834  jal         func_2FE0D0
    ctx->pc = 0x2FEDF4u;
    SET_GPR_U32(ctx, 31, 0x2FEDFCu);
    ctx->pc = 0x2FEDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEDF4u;
    // 0x2fedf8: 0x24a5ec50  addiu       $a1, $a1, -0x13B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE0D0u, 0x2FEDF4u, 0x2FEDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEDFCu;
label_2fedfc:
    // 0x2fedfc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fedfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2fee00:
    // 0x2fee00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fee00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fee04: 0x3e00008  jr          $ra
    ctx->pc = 0x2FEE04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FEE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEE04u;
        // 0x2fee08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FEE04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FEE0Cu;
    // 0x2fee0c: 0x0  nop
    ctx->pc = 0x2fee0cu;
    // NOP
    // 0x2fee10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fee10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fee14: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2fee14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fee18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fee18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fee1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fee1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fee20: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x2fee20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2fee24: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2fee24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fee28: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2fee28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fee2c: 0xc047b8e  jal         func_11EE38
    ctx->pc = 0x2FEE2Cu;
    SET_GPR_U32(ctx, 31, 0x2FEE34u);
    ctx->pc = 0x2FEE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEE2Cu;
    // 0x2fee30: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE38u, 0x2FEE2Cu, 0x2FEE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEE34u;
label_2fee34:
    // 0x2fee34: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2fee34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fee38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fee38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fee3c: 0xc047b46  jal         func_11ED18
    ctx->pc = 0x2FEE3Cu;
    SET_GPR_U32(ctx, 31, 0x2FEE44u);
    ctx->pc = 0x2FEE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEE3Cu;
    // 0x2fee40: 0x27a60018  addiu       $a2, $sp, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ED18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ED18u, 0x2FEE3Cu, 0x2FEE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEE44u;
label_2fee44:
    // 0x2fee44: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x2fee44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x2fee48: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2fee48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fee4c: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FEE4Cu;
    {
        const bool branch_taken_0x2fee4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2fee4c) {
            ctx->pc = 0x2FEE50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FEE4Cu;
            // 0x2fee50: 0x8fa30018  lw          $v1, 0x18($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FEE6Cu;
            goto label_2fee6c;
        }
    }
    ctx->pc = 0x2FEE54u;
    // 0x2fee54: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x2fee54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x2fee58: 0x24040021  addiu       $a0, $zero, 0x21
    ctx->pc = 0x2fee58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2fee5c: 0xc0bf834  jal         func_2FE0D0
    ctx->pc = 0x2FEE5Cu;
    SET_GPR_U32(ctx, 31, 0x2FEE64u);
    ctx->pc = 0x2FEE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEE5Cu;
    // 0x2fee60: 0x24a5ec50  addiu       $a1, $a1, -0x13B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE0D0u, 0x2FEE5Cu, 0x2FEE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEE64u;
label_2fee64:
    // 0x2fee64: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2FEE64u;
    {
        const bool branch_taken_0x2fee64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FEE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEE64u;
        // 0x2fee68: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fee64) {
            ctx->pc = 0x2FEECCu;
            goto label_2feecc;
        }
    }
    ctx->pc = 0x2FEE6Cu;
label_2fee6c:
    // 0x2fee6c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2fee6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2fee70: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2FEE70u;
    {
        const bool branch_taken_0x2fee70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2fee70) {
            ctx->pc = 0x2FEE74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FEE70u;
            // 0x2fee74: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FEE94u;
            goto label_2fee94;
        }
    }
    ctx->pc = 0x2FEE78u;
    // 0x2fee78: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x2fee78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x2fee7c: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x2fee7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2fee80: 0x24a5ec70  addiu       $a1, $a1, -0x1390
    ctx->pc = 0x2fee80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962288));
    // 0x2fee84: 0xc0bf89c  jal         func_2FE270
    ctx->pc = 0x2FEE84u;
    SET_GPR_U32(ctx, 31, 0x2FEE8Cu);
    ctx->pc = 0x2FEE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEE84u;
    // 0x2fee88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE270u, 0x2FEE84u, 0x2FEE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEE8Cu;
label_2fee8c:
    // 0x2fee8c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2FEE8Cu;
    {
        const bool branch_taken_0x2fee8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fee8c) {
            ctx->pc = 0x2FEEC8u;
            goto label_2feec8;
        }
    }
    ctx->pc = 0x2FEE94u;
label_2fee94:
    // 0x2fee94: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2FEE94u;
    {
        const bool branch_taken_0x2fee94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2fee94) {
            ctx->pc = 0x2FEEB8u;
            goto label_2feeb8;
        }
    }
    ctx->pc = 0x2FEE9Cu;
    // 0x2fee9c: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x2fee9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x2feea0: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x2feea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2feea4: 0x24a5ec70  addiu       $a1, $a1, -0x1390
    ctx->pc = 0x2feea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962288));
    // 0x2feea8: 0xc0bf89c  jal         func_2FE270
    ctx->pc = 0x2FEEA8u;
    SET_GPR_U32(ctx, 31, 0x2FEEB0u);
    ctx->pc = 0x2FEEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEEA8u;
    // 0x2feeac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE270u, 0x2FEEA8u, 0x2FEEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEEB0u;
label_2feeb0:
    // 0x2feeb0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2FEEB0u;
    {
        const bool branch_taken_0x2feeb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2feeb0) {
            ctx->pc = 0x2FEEC8u;
            goto label_2feec8;
        }
    }
    ctx->pc = 0x2FEEB8u;
label_2feeb8:
    // 0x2feeb8: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x2feeb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x2feebc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2feebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2feec0: 0xc0bf7fc  jal         func_2FDFF0
    ctx->pc = 0x2FEEC0u;
    SET_GPR_U32(ctx, 31, 0x2FEEC8u);
    ctx->pc = 0x2FEEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEEC0u;
    // 0x2feec4: 0x24a5eee0  addiu       $a1, $a1, -0x1120 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDFF0u, 0x2FEEC0u, 0x2FEEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEEC8u;
label_2feec8:
    // 0x2feec8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2feec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2feecc:
    // 0x2feecc: 0x3e00008  jr          $ra
    ctx->pc = 0x2FEECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FEED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEECCu;
        // 0x2feed0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FEECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FEED4u;
    // 0x2feed4: 0x0  nop
    ctx->pc = 0x2feed4u;
    // NOP
    // 0x2feed8: 0x0  nop
    ctx->pc = 0x2feed8u;
    // NOP
    // 0x2feedc: 0x0  nop
    ctx->pc = 0x2feedcu;
    // NOP
    // 0x2feee0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2feee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2feee4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2feee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2feee8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2feee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2feeec: 0xc047cd2  jal         func_11F348
    ctx->pc = 0x2FEEECu;
    SET_GPR_U32(ctx, 31, 0x2FEEF4u);
    ctx->pc = 0x2FEEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEEECu;
    // 0x2feef0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F348u, 0x2FEEECu, 0x2FEEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEEF4u;
label_2feef4:
    // 0x2feef4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2feef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2feef8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2feef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2feefc: 0xc047b46  jal         func_11ED18
    ctx->pc = 0x2FEEFCu;
    SET_GPR_U32(ctx, 31, 0x2FEF04u);
    ctx->pc = 0x2FEF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEEFCu;
    // 0x2fef00: 0x27a6001c  addiu       $a2, $sp, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ED18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ED18u, 0x2FEEFCu, 0x2FEF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEF04u;
label_2fef04:
    // 0x2fef04: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x2fef04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x2fef08: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FEF08u;
    {
        const bool branch_taken_0x2fef08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fef08) {
            ctx->pc = 0x2FEF28u;
            goto label_2fef28;
        }
    }
    ctx->pc = 0x2FEF10u;
    // 0x2fef10: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x2fef10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x2fef14: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2fef14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2fef18: 0xc0bf818  jal         func_2FE060
    ctx->pc = 0x2FEF18u;
    SET_GPR_U32(ctx, 31, 0x2FEF20u);
    ctx->pc = 0x2FEF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEF18u;
    // 0x2fef1c: 0x24a5f050  addiu       $a1, $a1, -0xFB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE060u, 0x2FEF18u, 0x2FEF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEF20u;
label_2fef20:
    // 0x2fef20: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2FEF20u;
    {
        const bool branch_taken_0x2fef20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FEF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEF20u;
        // 0x2fef24: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fef20) {
            ctx->pc = 0x2FEF3Cu;
            goto label_2fef3c;
        }
    }
    ctx->pc = 0x2FEF28u;
label_2fef28:
    // 0x2fef28: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x2fef28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x2fef2c: 0x24040016  addiu       $a0, $zero, 0x16
    ctx->pc = 0x2fef2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2fef30: 0xc0bf834  jal         func_2FE0D0
    ctx->pc = 0x2FEF30u;
    SET_GPR_U32(ctx, 31, 0x2FEF38u);
    ctx->pc = 0x2FEF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEF30u;
    // 0x2fef34: 0x24a5ec50  addiu       $a1, $a1, -0x13B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE0D0u, 0x2FEF30u, 0x2FEF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEF38u;
label_2fef38:
    // 0x2fef38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fef38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2fef3c:
    // 0x2fef3c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FEF3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FEF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEF3Cu;
        // 0x2fef40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FEF3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FEF44u;
    // 0x2fef44: 0x0  nop
    ctx->pc = 0x2fef44u;
    // NOP
    // 0x2fef48: 0x0  nop
    ctx->pc = 0x2fef48u;
    // NOP
    // 0x2fef4c: 0x0  nop
    ctx->pc = 0x2fef4cu;
    // NOP
    // 0x2fef50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fef50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fef54: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x2fef54u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x2fef58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fef58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fef5c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2fef5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fef60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fef60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fef64: 0x24c630e0  addiu       $a2, $a2, 0x30E0
    ctx->pc = 0x2fef64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12512));
    // 0x2fef68: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2fef68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fef6c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2fef6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2fef70: 0xc047c0a  jal         func_11F028
    ctx->pc = 0x2FEF70u;
    SET_GPR_U32(ctx, 31, 0x2FEF78u);
    ctx->pc = 0x2FEF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEF70u;
    // 0x2fef74: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F028u, 0x2FEF70u, 0x2FEF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEF78u;
label_2fef78:
    // 0x2fef78: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2fef78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fef7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fef7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fef80: 0xc047b46  jal         func_11ED18
    ctx->pc = 0x2FEF80u;
    SET_GPR_U32(ctx, 31, 0x2FEF88u);
    ctx->pc = 0x2FEF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEF80u;
    // 0x2fef84: 0x27a60018  addiu       $a2, $sp, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ED18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ED18u, 0x2FEF80u, 0x2FEF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEF88u;
label_2fef88:
    // 0x2fef88: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2fef88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2fef8c: 0x58400009  blezl       $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2FEF8Cu;
    {
        const bool branch_taken_0x2fef8c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2fef8c) {
            ctx->pc = 0x2FEF90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FEF8Cu;
            // 0x2fef90: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FEFB4u;
            goto label_2fefb4;
        }
    }
    ctx->pc = 0x2FEF94u;
    // 0x2fef94: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x2fef94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x2fef98: 0x3c060030  lui         $a2, 0x30
    ctx->pc = 0x2fef98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
    // 0x2fef9c: 0x24a5f050  addiu       $a1, $a1, -0xFB0
    ctx->pc = 0x2fef9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963280));
    // 0x2fefa0: 0x24c6ec50  addiu       $a2, $a2, -0x13B0
    ctx->pc = 0x2fefa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962256));
    // 0x2fefa4: 0xc0bf89c  jal         func_2FE270
    ctx->pc = 0x2FEFA4u;
    SET_GPR_U32(ctx, 31, 0x2FEFACu);
    ctx->pc = 0x2FEFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEFA4u;
    // 0x2fefa8: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE270u, 0x2FEFA4u, 0x2FEFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEFACu;
label_2fefac:
    // 0x2fefac: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2FEFACu;
    {
        const bool branch_taken_0x2fefac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FEFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEFACu;
        // 0x2fefb0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fefac) {
            ctx->pc = 0x2FF03Cu;
            goto label_2ff03c;
        }
    }
    ctx->pc = 0x2FEFB4u;
label_2fefb4:
    // 0x2fefb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fefb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fefb8: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x2fefb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2fefbc: 0x27a70014  addiu       $a3, $sp, 0x14
    ctx->pc = 0x2fefbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x2fefc0: 0xc047b8e  jal         func_11EE38
    ctx->pc = 0x2FEFC0u;
    SET_GPR_U32(ctx, 31, 0x2FEFC8u);
    ctx->pc = 0x2FEFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEFC0u;
    // 0x2fefc4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE38u, 0x2FEFC0u, 0x2FEFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEFC8u;
label_2fefc8:
    // 0x2fefc8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2fefc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fefcc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fefccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fefd0: 0xc047b46  jal         func_11ED18
    ctx->pc = 0x2FEFD0u;
    SET_GPR_U32(ctx, 31, 0x2FEFD8u);
    ctx->pc = 0x2FEFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEFD0u;
    // 0x2fefd4: 0x27a60018  addiu       $a2, $sp, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ED18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ED18u, 0x2FEFD0u, 0x2FEFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEFD8u;
label_2fefd8:
    // 0x2fefd8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2fefd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2fefdc: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x2fefdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x2fefe0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FEFE0u;
    {
        const bool branch_taken_0x2fefe0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2fefe0) {
            ctx->pc = 0x2FEFF4u;
            goto label_2feff4;
        }
    }
    ctx->pc = 0x2FEFE8u;
    // 0x2fefe8: 0x2861fff6  slti        $at, $v1, -0xA
    ctx->pc = 0x2fefe8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967286) ? 1 : 0);
    // 0x2fefec: 0x50200007  beql        $at, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FEFECu;
    {
        const bool branch_taken_0x2fefec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fefec) {
            ctx->pc = 0x2FEFF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FEFECu;
            // 0x2feff0: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF00Cu;
            goto label_2ff00c;
        }
    }
    ctx->pc = 0x2FEFF4u;
label_2feff4:
    // 0x2feff4: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x2feff4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x2feff8: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x2feff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2feffc: 0xc0bf834  jal         func_2FE0D0
    ctx->pc = 0x2FEFFCu;
    SET_GPR_U32(ctx, 31, 0x2FF004u);
    ctx->pc = 0x2FF000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEFFCu;
    // 0x2ff000: 0x24a5ec50  addiu       $a1, $a1, -0x13B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE0D0u, 0x2FEFFCu, 0x2FF004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF004u;
label_2ff004:
    // 0x2ff004: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2FF004u;
    {
        const bool branch_taken_0x2ff004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff004) {
            ctx->pc = 0x2FF038u;
            goto label_2ff038;
        }
    }
    ctx->pc = 0x2FF00Cu;
label_2ff00c:
    // 0x2ff00c: 0x284100e1  slti        $at, $v0, 0xE1
    ctx->pc = 0x2ff00cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)225) ? 1 : 0);
    // 0x2ff010: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FF010u;
    {
        const bool branch_taken_0x2ff010 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff010) {
            ctx->pc = 0x2FF030u;
            goto label_2ff030;
        }
    }
    ctx->pc = 0x2FF018u;
    // 0x2ff018: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x2ff018u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x2ff01c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2ff01cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2ff020: 0xc0bf834  jal         func_2FE0D0
    ctx->pc = 0x2FF020u;
    SET_GPR_U32(ctx, 31, 0x2FF028u);
    ctx->pc = 0x2FF024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF020u;
    // 0x2ff024: 0x24a5ec50  addiu       $a1, $a1, -0x13B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE0D0u, 0x2FF020u, 0x2FF028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF028u;
label_2ff028:
    // 0x2ff028: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FF028u;
    {
        const bool branch_taken_0x2ff028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff028) {
            ctx->pc = 0x2FF038u;
            goto label_2ff038;
        }
    }
    ctx->pc = 0x2FF030u;
label_2ff030:
    // 0x2ff030: 0xc0bfc14  jal         func_2FF050
    ctx->pc = 0x2FF030u;
    SET_GPR_U32(ctx, 31, 0x2FF038u);
    ctx->pc = 0x2FF050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FF050u, 0x2FF030u, 0x2FF038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF038u;
label_2ff038:
    // 0x2ff038: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ff038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ff03c:
    // 0x2ff03c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FF03Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FF040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF03Cu;
        // 0x2ff040: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF03Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FF044u;
    // 0x2ff044: 0x0  nop
    ctx->pc = 0x2ff044u;
    // NOP
    // 0x2ff048: 0x0  nop
    ctx->pc = 0x2ff048u;
    // NOP
    // 0x2ff04c: 0x0  nop
    ctx->pc = 0x2ff04cu;
    // NOP
    if (ctx->pc == 0x2ff04cu) { ctx->pc = 0x2ff050u; }
}
