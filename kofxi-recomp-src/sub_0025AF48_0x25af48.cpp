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

// Function: sub_0025AF48
// Address: 0x25af48 - 0x25b698
void sub_0025AF48_0x25af48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025AF48_0x25af48");
#endif

    switch (ctx->pc) {
        case 0x25afc8u: goto label_25afc8;
        case 0x25afecu: goto label_25afec;
        case 0x25affcu: goto label_25affc;
        case 0x25b00cu: goto label_25b00c;
        case 0x25b024u: goto label_25b024;
        case 0x25b078u: goto label_25b078;
        case 0x25b0c0u: goto label_25b0c0;
        case 0x25b0e8u: goto label_25b0e8;
        case 0x25b11cu: goto label_25b11c;
        case 0x25b130u: goto label_25b130;
        case 0x25b144u: goto label_25b144;
        case 0x25b15cu: goto label_25b15c;
        case 0x25b198u: goto label_25b198;
        case 0x25b1e0u: goto label_25b1e0;
        case 0x25b210u: goto label_25b210;
        case 0x25b240u: goto label_25b240;
        case 0x25b250u: goto label_25b250;
        case 0x25b258u: goto label_25b258;
        case 0x25b274u: goto label_25b274;
        case 0x25b29cu: goto label_25b29c;
        case 0x25b2a8u: goto label_25b2a8;
        case 0x25b2bcu: goto label_25b2bc;
        case 0x25b2ccu: goto label_25b2cc;
        case 0x25b2f0u: goto label_25b2f0;
        case 0x25b2f8u: goto label_25b2f8;
        case 0x25b3bcu: goto label_25b3bc;
        case 0x25b3d0u: goto label_25b3d0;
        case 0x25b3f0u: goto label_25b3f0;
        case 0x25b40cu: goto label_25b40c;
        case 0x25b424u: goto label_25b424;
        case 0x25b438u: goto label_25b438;
        case 0x25b440u: goto label_25b440;
        case 0x25b44cu: goto label_25b44c;
        case 0x25b454u: goto label_25b454;
        case 0x25b4d8u: goto label_25b4d8;
        case 0x25b4f0u: goto label_25b4f0;
        case 0x25b508u: goto label_25b508;
        case 0x25b528u: goto label_25b528;
        case 0x25b54cu: goto label_25b54c;
        case 0x25b5fcu: goto label_25b5fc;
        case 0x25b610u: goto label_25b610;
        case 0x25b664u: goto label_25b664;
        default: break;
    }

    ctx->pc = 0x25af48u;

    // 0x25af48: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x25af48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x25af4c: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x25af4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x25af50: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x25af50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x25af54: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x25af54u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25af58: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x25af58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x25af5c: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x25af5cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25af60: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x25af60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x25af64: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x25af64u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25af68: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x25af68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x25af6c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x25af6cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25af70: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x25af70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x25af74: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x25af74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25af78: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x25af78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x25af7c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x25af7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25af80: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x25af80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x25af84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25af84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25af88: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x25af88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x25af8c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x25af8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x25af90: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x25af90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x25af94: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x25af94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x25af98: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x25af98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x25af9c: 0x1682000c  bne         $s4, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x25AF9Cu;
    {
        const bool branch_taken_0x25af9c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x25AFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AF9Cu;
        // 0x25afa0: 0x8c750000  lw          $s5, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25af9c) {
            ctx->pc = 0x25AFD0u;
            goto label_25afd0;
        }
    }
    ctx->pc = 0x25AFA4u;
    // 0x25afa4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25afa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25afa8: 0x16a2012b  bne         $s5, $v0, . + 4 + (0x12B << 2)
    ctx->pc = 0x25AFA8u;
    {
        const bool branch_taken_0x25afa8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x25AFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AFA8u;
        // 0x25afac: 0x2402006a  addiu       $v0, $zero, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25afa8) {
            ctx->pc = 0x25B458u;
            goto label_25b458;
        }
    }
    ctx->pc = 0x25AFB0u;
    // 0x25afb0: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x25afb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x25afb4: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x25afb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x25afb8: 0x2e52824  and         $a1, $s7, $a1
    ctx->pc = 0x25afb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 23) & GPR_U64(ctx, 5));
    // 0x25afbc: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x25afbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25afc0: 0xc0925fc  jal         func_2497F0
    ctx->pc = 0x25AFC0u;
    SET_GPR_U32(ctx, 31, 0x25AFC8u);
    ctx->pc = 0x25AFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AFC0u;
    // 0x25afc4: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2497F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2497F0u, 0x25AFC0u, 0x25AFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AFC8u;
label_25afc8:
    // 0x25afc8: 0x10000124  b           . + 4 + (0x124 << 2)
    ctx->pc = 0x25AFC8u;
    {
        const bool branch_taken_0x25afc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AFC8u;
        // 0x25afcc: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25afc8) {
            ctx->pc = 0x25B45Cu;
            goto label_25b45c;
        }
    }
    ctx->pc = 0x25AFD0u;
label_25afd0:
    // 0x25afd0: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x25afd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x25afd4: 0x1682000b  bne         $s4, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x25AFD4u;
    {
        const bool branch_taken_0x25afd4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x25AFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AFD4u;
        // 0x25afd8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25afd4) {
            ctx->pc = 0x25B004u;
            goto label_25b004;
        }
    }
    ctx->pc = 0x25AFDCu;
    // 0x25afdc: 0x16a2011e  bne         $s5, $v0, . + 4 + (0x11E << 2)
    ctx->pc = 0x25AFDCu;
    {
        const bool branch_taken_0x25afdc = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x25AFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AFDCu;
        // 0x25afe0: 0x2402006a  addiu       $v0, $zero, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25afdc) {
            ctx->pc = 0x25B458u;
            goto label_25b458;
        }
    }
    ctx->pc = 0x25AFE4u;
    // 0x25afe4: 0xc092892  jal         func_24A248
    ctx->pc = 0x25AFE4u;
    SET_GPR_U32(ctx, 31, 0x25AFECu);
    ctx->pc = 0x25AFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AFE4u;
    // 0x25afe8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A248u, 0x25AFE4u, 0x25AFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AFECu;
label_25afec:
    // 0x25afec: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x25afecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x25aff0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25aff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25aff4: 0xc0930c0  jal         func_24C300
    ctx->pc = 0x25AFF4u;
    SET_GPR_U32(ctx, 31, 0x25AFFCu);
    ctx->pc = 0x25AFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AFF4u;
    // 0x25aff8: 0x248412e0  addiu       $a0, $a0, 0x12E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C300u, 0x25AFF4u, 0x25AFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AFFCu;
label_25affc:
    // 0x25affc: 0x10000116  b           . + 4 + (0x116 << 2)
    ctx->pc = 0x25AFFCu;
    {
        const bool branch_taken_0x25affc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AFFCu;
        // 0x25b000: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25affc) {
            ctx->pc = 0x25B458u;
            goto label_25b458;
        }
    }
    ctx->pc = 0x25B004u;
label_25b004:
    // 0x25b004: 0xc08c682  jal         func_231A08
    ctx->pc = 0x25B004u;
    SET_GPR_U32(ctx, 31, 0x25B00Cu);
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x25B004u, 0x25B00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B00Cu;
label_25b00c:
    // 0x25b00c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x25b00cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x25b010: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25b010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25b014: 0x52a20005  beql        $s5, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25B014u;
    {
        const bool branch_taken_0x25b014 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        if (branch_taken_0x25b014) {
            ctx->pc = 0x25B018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25B014u;
            // 0x25b018: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25B02Cu;
            goto label_25b02c;
        }
    }
    ctx->pc = 0x25B01Cu;
    // 0x25b01c: 0xc08c698  jal         func_231A60
    ctx->pc = 0x25B01Cu;
    SET_GPR_U32(ctx, 31, 0x25B024u);
    ctx->pc = 0x25B020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B01Cu;
    // 0x25b020: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x25B01Cu, 0x25B024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B024u;
label_25b024:
    // 0x25b024: 0x1000010c  b           . + 4 + (0x10C << 2)
    ctx->pc = 0x25B024u;
    {
        const bool branch_taken_0x25b024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B024u;
        // 0x25b028: 0x2402006a  addiu       $v0, $zero, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b024) {
            ctx->pc = 0x25B458u;
            goto label_25b458;
        }
    }
    ctx->pc = 0x25B02Cu;
label_25b02c:
    // 0x25b02c: 0x56000005  bnel        $s0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x25B02Cu;
    {
        const bool branch_taken_0x25b02c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x25b02c) {
            ctx->pc = 0x25B030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25B02Cu;
            // 0x25b030: 0x8e130010  lw          $s3, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25B044u;
            goto label_25b044;
        }
    }
    ctx->pc = 0x25B034u;
    // 0x25b034: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x25B034u;
    {
        const bool branch_taken_0x25b034 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B034u;
        // 0x25b038: 0x2e820014  sltiu       $v0, $s4, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b034) {
            ctx->pc = 0x25B048u;
            goto label_25b048;
        }
    }
    ctx->pc = 0x25B03Cu;
    // 0x25b03c: 0x10000103  b           . + 4 + (0x103 << 2)
    ctx->pc = 0x25B03Cu;
    {
        const bool branch_taken_0x25b03c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B03Cu;
        // 0x25b040: 0x241e0016  addiu       $fp, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b03c) {
            ctx->pc = 0x25B44Cu;
            goto label_25b44c;
        }
    }
    ctx->pc = 0x25B044u;
label_25b044:
    // 0x25b044: 0x2e820014  sltiu       $v0, $s4, 0x14
    ctx->pc = 0x25b044u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
label_25b048:
    // 0x25b048: 0x104000fd  beqz        $v0, . + 4 + (0xFD << 2)
    ctx->pc = 0x25B048u;
    {
        const bool branch_taken_0x25b048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B048u;
        // 0x25b04c: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b048) {
            ctx->pc = 0x25B440u;
            goto label_25b440;
        }
    }
    ctx->pc = 0x25B050u;
    // 0x25b050: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x25b050u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x25b054: 0x24426fe0  addiu       $v0, $v0, 0x6FE0
    ctx->pc = 0x25b054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28640));
    // 0x25b058: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25b058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25b05c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x25b05cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25b060: 0x800008  jr          $a0
    ctx->pc = 0x25B060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25B068u: goto label_25b068;
            case 0x25B0ACu: goto label_25b0ac;
            case 0x25B0C8u: goto label_25b0c8;
            case 0x25B0FCu: goto label_25b0fc;
            case 0x25B230u: goto label_25b230;
            case 0x25B238u: goto label_25b238;
            case 0x25B248u: goto label_25b248;
            case 0x25B26Cu: goto label_25b26c;
            case 0x25B27Cu: goto label_25b27c;
            case 0x25B2B0u: goto label_25b2b0;
            case 0x25B2C4u: goto label_25b2c4;
            case 0x25B2D4u: goto label_25b2d4;
            case 0x25B378u: goto label_25b378;
            case 0x25B3FCu: goto label_25b3fc;
            case 0x25B414u: goto label_25b414;
            case 0x25B42Cu: goto label_25b42c;
            case 0x25B440u: goto label_25b440;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B060u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25B068u;
label_25b068:
    // 0x25b068: 0x160000f8  bnez        $s0, . + 4 + (0xF8 << 2)
    ctx->pc = 0x25B068u;
    {
        const bool branch_taken_0x25b068 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x25B06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B068u;
        // 0x25b06c: 0x241e007f  addiu       $fp, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b068) {
            ctx->pc = 0x25B44Cu;
            goto label_25b44c;
        }
    }
    ctx->pc = 0x25B070u;
    // 0x25b070: 0xc096da6  jal         func_25B698
    ctx->pc = 0x25B070u;
    SET_GPR_U32(ctx, 31, 0x25B078u);
    ctx->pc = 0x25B074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B070u;
    // 0x25b074: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B698u, 0x25B070u, 0x25B078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B078u;
label_25b078:
    // 0x25b078: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x25b078u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b07c: 0x17c000f3  bnez        $fp, . + 4 + (0xF3 << 2)
    ctx->pc = 0x25B07Cu;
    {
        const bool branch_taken_0x25b07c = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x25B080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B07Cu;
        // 0x25b080: 0x3c040080  lui         $a0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b07c) {
            ctx->pc = 0x25B44Cu;
            goto label_25b44c;
        }
    }
    ctx->pc = 0x25B084u;
    // 0x25b084: 0xde220000  ld          $v0, 0x0($s1)
    ctx->pc = 0x25b084u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x25b088: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x25b088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x25b08c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x25b08cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x25b090: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x25b090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x25b094: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x25b094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x25b098: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x25b098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x25b09c: 0x144400eb  bne         $v0, $a0, . + 4 + (0xEB << 2)
    ctx->pc = 0x25B09Cu;
    {
        const bool branch_taken_0x25b09c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x25B0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B09Cu;
        // 0x25b0a0: 0x24020078  addiu       $v0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b09c) {
            ctx->pc = 0x25B44Cu;
            goto label_25b44c;
        }
    }
    ctx->pc = 0x25B0A4u;
    // 0x25b0a4: 0x100000e9  b           . + 4 + (0xE9 << 2)
    ctx->pc = 0x25B0A4u;
    {
        const bool branch_taken_0x25b0a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B0A4u;
        // 0x25b0a8: 0xa6220004  sh          $v0, 0x4($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b0a4) {
            ctx->pc = 0x25B44Cu;
            goto label_25b44c;
        }
    }
    ctx->pc = 0x25B0ACu;
label_25b0ac:
    // 0x25b0ac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25b0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25b0b0: 0x16a200e6  bne         $s5, $v0, . + 4 + (0xE6 << 2)
    ctx->pc = 0x25B0B0u;
    {
        const bool branch_taken_0x25b0b0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x25B0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B0B0u;
        // 0x25b0b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b0b0) {
            ctx->pc = 0x25B44Cu;
            goto label_25b44c;
        }
    }
    ctx->pc = 0x25B0B8u;
    // 0x25b0b8: 0xc092e84  jal         func_24BA10
    ctx->pc = 0x25B0B8u;
    SET_GPR_U32(ctx, 31, 0x25B0C0u);
    ctx->pc = 0x25B0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B0B8u;
    // 0x25b0bc: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BA10u, 0x25B0B8u, 0x25B0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B0C0u;
label_25b0c0:
    // 0x25b0c0: 0x100000e2  b           . + 4 + (0xE2 << 2)
    ctx->pc = 0x25B0C0u;
    {
        const bool branch_taken_0x25b0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B0C0u;
        // 0x25b0c4: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b0c0) {
            ctx->pc = 0x25B44Cu;
            goto label_25b44c;
        }
    }
    ctx->pc = 0x25B0C8u;
label_25b0c8:
    // 0x25b0c8: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x25B0C8u;
    {
        const bool branch_taken_0x25b0c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B0C8u;
        // 0x25b0cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b0c8) {
            ctx->pc = 0x25B0F4u;
            goto label_25b0f4;
        }
    }
    ctx->pc = 0x25B0D0u;
    // 0x25b0d0: 0x9602001a  lhu         $v0, 0x1A($s0)
    ctx->pc = 0x25b0d0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x25b0d4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25B0D4u;
    {
        const bool branch_taken_0x25b0d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25B0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B0D4u;
        // 0x25b0d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b0d4) {
            ctx->pc = 0x25B0F4u;
            goto label_25b0f4;
        }
    }
    ctx->pc = 0x25B0DCu;
    // 0x25b0dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25b0dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b0e0: 0xc092e84  jal         func_24BA10
    ctx->pc = 0x25B0E0u;
    SET_GPR_U32(ctx, 31, 0x25B0E8u);
    ctx->pc = 0x25B0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B0E0u;
    // 0x25b0e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BA10u, 0x25B0E0u, 0x25B0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B0E8u;
label_25b0e8:
    // 0x25b0e8: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x25b0e8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b0ec: 0x17c000d7  bnez        $fp, . + 4 + (0xD7 << 2)
    ctx->pc = 0x25B0ECu;
    {
        const bool branch_taken_0x25b0ec = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x25B0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B0ECu;
        // 0x25b0f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b0ec) {
            ctx->pc = 0x25B44Cu;
            goto label_25b44c;
        }
    }
    ctx->pc = 0x25B0F4u;
label_25b0f4:
    // 0x25b0f4: 0x100000d5  b           . + 4 + (0xD5 << 2)
    ctx->pc = 0x25B0F4u;
    {
        const bool branch_taken_0x25b0f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B0F4u;
        // 0x25b0f8: 0xa6620018  sh          $v0, 0x18($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 24), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b0f4) {
            ctx->pc = 0x25B44Cu;
            goto label_25b44c;
        }
    }
    ctx->pc = 0x25B0FCu;
label_25b0fc:
    // 0x25b0fc: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x25B0FCu;
    {
        const bool branch_taken_0x25b0fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b0fc) {
            ctx->pc = 0x25B134u;
            goto label_25b134;
        }
    }
    ctx->pc = 0x25B104u;
    // 0x25b104: 0x9602001a  lhu         $v0, 0x1A($s0)
    ctx->pc = 0x25b104u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x25b108: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25B108u;
    {
        const bool branch_taken_0x25b108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25B10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B108u;
        // 0x25b10c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b108) {
            ctx->pc = 0x25B128u;
            goto label_25b128;
        }
    }
    ctx->pc = 0x25B110u;
    // 0x25b110: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25b110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b114: 0xc092e84  jal         func_24BA10
    ctx->pc = 0x25B114u;
    SET_GPR_U32(ctx, 31, 0x25B11Cu);
    ctx->pc = 0x25B118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B114u;
    // 0x25b118: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BA10u, 0x25B114u, 0x25B11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B11Cu;
label_25b11c:
    // 0x25b11c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x25b11cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b120: 0x17c000ca  bnez        $fp, . + 4 + (0xCA << 2)
    ctx->pc = 0x25B120u;
    {
        const bool branch_taken_0x25b120 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x25B124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B120u;
        // 0x25b124: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b120) {
            ctx->pc = 0x25B44Cu;
            goto label_25b44c;
        }
    }
    ctx->pc = 0x25B128u;
label_25b128:
    // 0x25b128: 0xc092f2e  jal         func_24BCB8
    ctx->pc = 0x25B128u;
    SET_GPR_U32(ctx, 31, 0x25B130u);
    ctx->pc = 0x25B12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B128u;
    // 0x25b12c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BCB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BCB8u, 0x25B128u, 0x25B130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B130u;
label_25b130:
    // 0x25b130: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x25b130u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25b134:
    // 0x25b134: 0x17c000c5  bnez        $fp, . + 4 + (0xC5 << 2)
    ctx->pc = 0x25B134u;
    {
        const bool branch_taken_0x25b134 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x25b134) {
            ctx->pc = 0x25B44Cu;
            goto label_25b44c;
        }
    }
    ctx->pc = 0x25B13Cu;
    // 0x25b13c: 0xc096418  jal         func_259060
    ctx->pc = 0x25B13Cu;
    SET_GPR_U32(ctx, 31, 0x25B144u);
    ctx->pc = 0x25B140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B13Cu;
    // 0x25b140: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259060u, 0x25B13Cu, 0x25B144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B144u;
label_25b144:
    // 0x25b144: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25B144u;
    {
        const bool branch_taken_0x25b144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25B148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B144u;
        // 0x25b148: 0xae62002c  sw          $v0, 0x2C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b144) {
            ctx->pc = 0x25B164u;
            goto label_25b164;
        }
    }
    ctx->pc = 0x25B14Cu;
    // 0x25b14c: 0x120000bf  beqz        $s0, . + 4 + (0xBF << 2)
    ctx->pc = 0x25B14Cu;
    {
        const bool branch_taken_0x25b14c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B14Cu;
        // 0x25b150: 0x241e0069  addiu       $fp, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b14c) {
            ctx->pc = 0x25B44Cu;
            goto label_25b44c;
        }
    }
    ctx->pc = 0x25B154u;
    // 0x25b154: 0xc092fc0  jal         func_24BF00
    ctx->pc = 0x25B154u;
    SET_GPR_U32(ctx, 31, 0x25B15Cu);
    ctx->pc = 0x25B158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B154u;
    // 0x25b158: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BF00u, 0x25B154u, 0x25B15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B15Cu;
label_25b15c:
    // 0x25b15c: 0x100000bb  b           . + 4 + (0xBB << 2)
    ctx->pc = 0x25B15Cu;
    {
        const bool branch_taken_0x25b15c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B15Cu;
        // 0x25b160: 0x241e0069  addiu       $fp, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b15c) {
            ctx->pc = 0x25B44Cu;
            goto label_25b44c;
        }
    }
    ctx->pc = 0x25B164u;
label_25b164:
    // 0x25b164: 0x926500b6  lbu         $a1, 0xB6($s3)
    ctx->pc = 0x25b164u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 182)));
    // 0x25b168: 0x2ca2000e  sltiu       $v0, $a1, 0xE
    ctx->pc = 0x25b168u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
    // 0x25b16c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x25B16Cu;
    {
        const bool branch_taken_0x25b16c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B16Cu;
        // 0x25b170: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b16c) {
            ctx->pc = 0x25B1D0u;
            goto label_25b1d0;
        }
    }
    ctx->pc = 0x25B174u;
    // 0x25b174: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x25b174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x25b178: 0xde240050  ld          $a0, 0x50($s1)
    ctx->pc = 0x25b178u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x25b17c: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x25b17cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x25b180: 0x64202b  sltu        $a0, $v1, $a0
    ctx->pc = 0x25b180u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x25b184: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x25B184u;
    {
        const bool branch_taken_0x25b184 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B184u;
        // 0x25b188: 0x3c12003a  lui         $s2, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b184) {
            ctx->pc = 0x25B1D0u;
            goto label_25b1d0;
        }
    }
    ctx->pc = 0x25B18Cu;
    // 0x25b18c: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x25b18cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x25b190: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x25b190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x25b194: 0x0  nop
    ctx->pc = 0x25b194u;
    // NOP
label_25b198:
    // 0x25b198: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x25b198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b19c: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x25b19cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x25b1a0: 0x2c42000e  sltiu       $v0, $v0, 0xE
    ctx->pc = 0x25b1a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
    // 0x25b1a4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x25B1A4u;
    {
        const bool branch_taken_0x25b1a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B1A4u;
        // 0x25b1a8: 0xa26300b6  sb          $v1, 0xB6($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 182), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b1a4) {
            ctx->pc = 0x25B1D8u;
            goto label_25b1d8;
        }
    }
    ctx->pc = 0x25B1ACu;
    // 0x25b1ac: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x25b1acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25b1b0: 0xde240050  ld          $a0, 0x50($s1)
    ctx->pc = 0x25b1b0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x25b1b4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x25b1b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x25b1b8: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x25b1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x25b1bc: 0x64202b  sltu        $a0, $v1, $a0
    ctx->pc = 0x25b1bcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x25b1c0: 0x1480fff5  bnez        $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x25B1C0u;
    {
        const bool branch_taken_0x25b1c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x25B1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B1C0u;
        // 0x25b1c4: 0x24a30001  addiu       $v1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b1c0) {
            ctx->pc = 0x25B198u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25b198;
        }
    }
    ctx->pc = 0x25B1C8u;
    // 0x25b1c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25B1C8u;
    {
        const bool branch_taken_0x25b1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b1c8) {
            ctx->pc = 0x25B1D8u;
            goto label_25b1d8;
        }
    }
    ctx->pc = 0x25B1D0u;
label_25b1d0:
    // 0x25b1d0: 0x3c12003a  lui         $s2, 0x3A
    ctx->pc = 0x25b1d0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)58 << 16));
    // 0x25b1d4: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x25b1d4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
label_25b1d8:
    // 0x25b1d8: 0xc08c0e8  jal         func_2303A0
    ctx->pc = 0x25B1D8u;
    SET_GPR_U32(ctx, 31, 0x25B1E0u);
    ctx->pc = 0x25B1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B1D8u;
    // 0x25b1dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2303A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2303A0u, 0x25B1D8u, 0x25B1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B1E0u;
label_25b1e0:
    // 0x25b1e0: 0xde421308  ld          $v0, 0x1308($s2)
    ctx->pc = 0x25b1e0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 4872)));
    // 0x25b1e4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x25b1e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25b1e8: 0x8e03f990  lw          $v1, -0x670($s0)
    ctx->pc = 0x25b1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965648)));
    // 0x25b1ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25b1ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b1f0: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x25b1f0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x25b1f4: 0x240500d0  addiu       $a1, $zero, 0xD0
    ctx->pc = 0x25b1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x25b1f8: 0xfe421308  sd          $v0, 0x1308($s2)
    ctx->pc = 0x25b1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 4872), GPR_U64(ctx, 2));
    // 0x25b1fc: 0x24630096  addiu       $v1, $v1, 0x96
    ctx->pc = 0x25b1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 150));
    // 0x25b200: 0xa6660018  sh          $a2, 0x18($s3)
    ctx->pc = 0x25b200u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 24), (uint16_t)GPR_U32(ctx, 6));
    // 0x25b204: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25b204u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b208: 0xc0969c2  jal         func_25A708
    ctx->pc = 0x25B208u;
    SET_GPR_U32(ctx, 31, 0x25B210u);
    ctx->pc = 0x25B20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B208u;
    // 0x25b20c: 0xae630010  sw          $v1, 0x10($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A708u, 0x25B208u, 0x25B210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B210u;
label_25b210:
    // 0x25b210: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25b210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b214: 0xae620040  sw          $v0, 0x40($s3)
    ctx->pc = 0x25b214u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 2));
    // 0x25b218: 0xae620054  sw          $v0, 0x54($s3)
    ctx->pc = 0x25b218u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
    // 0x25b21c: 0xae620060  sw          $v0, 0x60($s3)
    ctx->pc = 0x25b21cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 2));
    // 0x25b220: 0xae620048  sw          $v0, 0x48($s3)
    ctx->pc = 0x25b220u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 2));
    // 0x25b224: 0xae620080  sw          $v0, 0x80($s3)
    ctx->pc = 0x25b224u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 2));
    // 0x25b228: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x25B228u;
    {
        const bool branch_taken_0x25b228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B228u;
        // 0x25b22c: 0xae620044  sw          $v0, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b228) {
            ctx->pc = 0x25B2A0u;
            goto label_25b2a0;
        }
    }
    ctx->pc = 0x25B230u;
label_25b230:
    // 0x25b230: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x25B230u;
    {
        const bool branch_taken_0x25b230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B230u;
        // 0x25b234: 0x241e005f  addiu       $fp, $zero, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b230) {
            ctx->pc = 0x25B44Cu;
            goto label_25b44c;
        }
    }
    ctx->pc = 0x25B238u;
label_25b238:
    // 0x25b238: 0xc096de2  jal         func_25B788
    ctx->pc = 0x25B238u;
    SET_GPR_U32(ctx, 31, 0x25B240u);
    ctx->pc = 0x25B23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B238u;
    // 0x25b23c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B788u, 0x25B238u, 0x25B240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B240u;
label_25b240:
    // 0x25b240: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x25B240u;
    {
        const bool branch_taken_0x25b240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b240) {
            ctx->pc = 0x25B44Cu;
            goto label_25b44c;
        }
    }
    ctx->pc = 0x25B248u;
label_25b248:
    // 0x25b248: 0xc08c1f6  jal         func_2307D8
    ctx->pc = 0x25B248u;
    SET_GPR_U32(ctx, 31, 0x25B250u);
    ctx->pc = 0x25B24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B248u;
    // 0x25b24c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2307D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2307D8u, 0x25B248u, 0x25B250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B250u;
label_25b250:
    // 0x25b250: 0xc096e10  jal         func_25B840
    ctx->pc = 0x25B250u;
    SET_GPR_U32(ctx, 31, 0x25B258u);
    ctx->pc = 0x25B254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B250u;
    // 0x25b254: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B840u, 0x25B250u, 0x25B258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B258u;
label_25b258:
    // 0x25b258: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x25b258u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b25c: 0x1260007b  beqz        $s3, . + 4 + (0x7B << 2)
    ctx->pc = 0x25B25Cu;
    {
        const bool branch_taken_0x25b25c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B25Cu;
        // 0x25b260: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b25c) {
            ctx->pc = 0x25B44Cu;
            goto label_25b44c;
        }
    }
    ctx->pc = 0x25B264u;
    // 0x25b264: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x25B264u;
    {
        const bool branch_taken_0x25b264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b264) {
            ctx->pc = 0x25B2A0u;
            goto label_25b2a0;
        }
    }
    ctx->pc = 0x25B26Cu;
label_25b26c:
    // 0x25b26c: 0xc095fb8  jal         func_257EE0
    ctx->pc = 0x25B26Cu;
    SET_GPR_U32(ctx, 31, 0x25B274u);
    ctx->pc = 0x25B270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B26Cu;
    // 0x25b270: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EE0u, 0x25B26Cu, 0x25B274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B274u;
label_25b274:
    // 0x25b274: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x25B274u;
    {
        const bool branch_taken_0x25b274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b274) {
            ctx->pc = 0x25B44Cu;
            goto label_25b44c;
        }
    }
    ctx->pc = 0x25B27Cu;
label_25b27c:
    // 0x25b27c: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x25B27Cu;
    {
        const bool branch_taken_0x25b27c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B27Cu;
        // 0x25b280: 0x26240080  addiu       $a0, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b27c) {
            ctx->pc = 0x25B294u;
            goto label_25b294;
        }
    }
    ctx->pc = 0x25B284u;
    // 0x25b284: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x25b284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x25b288: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x25B288u;
    {
        const bool branch_taken_0x25b288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25B28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B288u;
        // 0x25b28c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b288) {
            ctx->pc = 0x25B2E8u;
            goto label_25b2e8;
        }
    }
    ctx->pc = 0x25B290u;
    // 0x25b290: 0x26240080  addiu       $a0, $s1, 0x80
    ctx->pc = 0x25b290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
label_25b294:
    // 0x25b294: 0xc08c2a8  jal         func_230AA0
    ctx->pc = 0x25B294u;
    SET_GPR_U32(ctx, 31, 0x25B29Cu);
    ctx->pc = 0x25B298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B294u;
    // 0x25b298: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230AA0u, 0x25B294u, 0x25B29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B29Cu;
label_25b29c:
    // 0x25b29c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25b29cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25b2a0:
    // 0x25b2a0: 0xc095fb8  jal         func_257EE0
    ctx->pc = 0x25B2A0u;
    SET_GPR_U32(ctx, 31, 0x25B2A8u);
    ctx->pc = 0x257EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EE0u, 0x25B2A0u, 0x25B2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B2A8u;
label_25b2a8:
    // 0x25b2a8: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x25B2A8u;
    {
        const bool branch_taken_0x25b2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B2A8u;
        // 0x25b2ac: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b2a8) {
            ctx->pc = 0x25B44Cu;
            goto label_25b44c;
        }
    }
    ctx->pc = 0x25B2B0u;
label_25b2b0:
    // 0x25b2b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25b2b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b2b4: 0xc096678  jal         func_2599E0
    ctx->pc = 0x25B2B4u;
    SET_GPR_U32(ctx, 31, 0x25B2BCu);
    ctx->pc = 0x25B2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B2B4u;
    // 0x25b2b8: 0x24050071  addiu       $a1, $zero, 0x71 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2599E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2599E0u, 0x25B2B4u, 0x25B2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B2BCu;
label_25b2bc:
    // 0x25b2bc: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x25B2BCu;
    {
        const bool branch_taken_0x25b2bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b2bc) {
            ctx->pc = 0x25B44Cu;
            goto label_25b44c;
        }
    }
    ctx->pc = 0x25B2C4u;
label_25b2c4:
    // 0x25b2c4: 0xc08c698  jal         func_231A60
    ctx->pc = 0x25B2C4u;
    SET_GPR_U32(ctx, 31, 0x25B2CCu);
    ctx->pc = 0x25B2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B2C4u;
    // 0x25b2c8: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x25B2C4u, 0x25B2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B2CCu;
label_25b2cc:
    // 0x25b2cc: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x25B2CCu;
    {
        const bool branch_taken_0x25b2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B2CCu;
        // 0x25b2d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b2cc) {
            ctx->pc = 0x25B458u;
            goto label_25b458;
        }
    }
    ctx->pc = 0x25B2D4u;
label_25b2d4:
    // 0x25b2d4: 0x5240000b  beql        $s2, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x25B2D4u;
    {
        const bool branch_taken_0x25b2d4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b2d4) {
            ctx->pc = 0x25B2D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25B2D4u;
            // 0x25b2d8: 0xde220040  ld          $v0, 0x40($s1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25B304u;
            goto label_25b304;
        }
    }
    ctx->pc = 0x25B2DCu;
    // 0x25b2dc: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x25b2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x25b2e0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25B2E0u;
    {
        const bool branch_taken_0x25b2e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B2E0u;
        // 0x25b2e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b2e0) {
            ctx->pc = 0x25B300u;
            goto label_25b300;
        }
    }
    ctx->pc = 0x25B2E8u;
label_25b2e8:
    // 0x25b2e8: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x25B2E8u;
    SET_GPR_U32(ctx, 31, 0x25B2F0u);
    ctx->pc = 0x25B2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B2E8u;
    // 0x25b2ec: 0x241e0016  addiu       $fp, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x25B2E8u, 0x25B2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B2F0u;
label_25b2f0:
    // 0x25b2f0: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x25B2F0u;
    SET_GPR_U32(ctx, 31, 0x25B2F8u);
    ctx->pc = 0x25B2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B2F0u;
    // 0x25b2f4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x25B2F0u, 0x25B2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B2F8u;
label_25b2f8:
    // 0x25b2f8: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x25B2F8u;
    {
        const bool branch_taken_0x25b2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b2f8) {
            ctx->pc = 0x25B44Cu;
            goto label_25b44c;
        }
    }
    ctx->pc = 0x25B300u;
label_25b300:
    // 0x25b300: 0xde220040  ld          $v0, 0x40($s1)
    ctx->pc = 0x25b300u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 64)));
label_25b304:
    // 0x25b304: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x25B304u;
    {
        const bool branch_taken_0x25b304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25b304) {
            ctx->pc = 0x25B308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25B304u;
            // 0x25b308: 0x96220002  lhu         $v0, 0x2($s1) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25B320u;
            goto label_25b320;
        }
    }
    ctx->pc = 0x25B30Cu;
    // 0x25b30c: 0x96220006  lhu         $v0, 0x6($s1)
    ctx->pc = 0x25b30cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x25b310: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x25b310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x25b314: 0x5040004d  beql        $v0, $zero, . + 4 + (0x4D << 2)
    ctx->pc = 0x25B314u;
    {
        const bool branch_taken_0x25b314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b314) {
            ctx->pc = 0x25B318u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25B314u;
            // 0x25b318: 0x241e0016  addiu       $fp, $zero, 0x16 (Delay Slot)
            SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25B44Cu;
            goto label_25b44c;
        }
    }
    ctx->pc = 0x25B31Cu;
    // 0x25b31c: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x25b31cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_25b320:
    // 0x25b320: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x25b320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x25b324: 0x54400049  bnel        $v0, $zero, . + 4 + (0x49 << 2)
    ctx->pc = 0x25B324u;
    {
        const bool branch_taken_0x25b324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25b324) {
            ctx->pc = 0x25B328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25B324u;
            // 0x25b328: 0x241e0016  addiu       $fp, $zero, 0x16 (Delay Slot)
            SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25B44Cu;
            goto label_25b44c;
        }
    }
    ctx->pc = 0x25B32Cu;
    // 0x25b32c: 0x926300b0  lbu         $v1, 0xB0($s3)
    ctx->pc = 0x25b32cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 176)));
    // 0x25b330: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x25b330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x25b334: 0x54400045  bnel        $v0, $zero, . + 4 + (0x45 << 2)
    ctx->pc = 0x25B334u;
    {
        const bool branch_taken_0x25b334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25b334) {
            ctx->pc = 0x25B338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25B334u;
            // 0x25b338: 0x241e0016  addiu       $fp, $zero, 0x16 (Delay Slot)
            SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25B44Cu;
            goto label_25b44c;
        }
    }
    ctx->pc = 0x25B33Cu;
    // 0x25b33c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x25b33cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x25b340: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25B340u;
    {
        const bool branch_taken_0x25b340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25B344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B340u;
        // 0x25b344: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b340) {
            ctx->pc = 0x25B350u;
            goto label_25b350;
        }
    }
    ctx->pc = 0x25B348u;
    // 0x25b348: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x25B348u;
    {
        const bool branch_taken_0x25b348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B348u;
        // 0x25b34c: 0x241e000b  addiu       $fp, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b348) {
            ctx->pc = 0x25B44Cu;
            goto label_25b44c;
        }
    }
    ctx->pc = 0x25B350u;
label_25b350:
    // 0x25b350: 0x8ee40008  lw          $a0, 0x8($s7)
    ctx->pc = 0x25b350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x25b354: 0xaee2000c  sw          $v0, 0xC($s7)
    ctx->pc = 0x25b354u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 12), GPR_U32(ctx, 2));
    // 0x25b358: 0x32c30002  andi        $v1, $s6, 0x2
    ctx->pc = 0x25b358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)2);
    // 0x25b35c: 0x926200b1  lbu         $v0, 0xB1($s3)
    ctx->pc = 0x25b35cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 177)));
    // 0x25b360: 0x1460003a  bnez        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x25B360u;
    {
        const bool branch_taken_0x25b360 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x25B364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B360u;
        // 0x25b364: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b360) {
            ctx->pc = 0x25B44Cu;
            goto label_25b44c;
        }
    }
    ctx->pc = 0x25B368u;
    // 0x25b368: 0x926200b0  lbu         $v0, 0xB0($s3)
    ctx->pc = 0x25b368u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 176)));
    // 0x25b36c: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x25b36cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x25b370: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x25B370u;
    {
        const bool branch_taken_0x25b370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B370u;
        // 0x25b374: 0xa26200b0  sb          $v0, 0xB0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 176), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b370) {
            ctx->pc = 0x25B44Cu;
            goto label_25b44c;
        }
    }
    ctx->pc = 0x25B378u;
label_25b378:
    // 0x25b378: 0xde240080  ld          $a0, 0x80($s1)
    ctx->pc = 0x25b378u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x25b37c: 0xde220088  ld          $v0, 0x88($s1)
    ctx->pc = 0x25b37cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x25b380: 0xde230098  ld          $v1, 0x98($s1)
    ctx->pc = 0x25b380u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x25b384: 0xde250090  ld          $a1, 0x90($s1)
    ctx->pc = 0x25b384u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x25b388: 0x44102f  dsubu       $v0, $v0, $a0
    ctx->pc = 0x25b388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 4));
    // 0x25b38c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x25b38cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x25b390: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x25b390u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x25b394: 0x65182f  dsubu       $v1, $v1, $a1
    ctx->pc = 0x25b394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 5));
    // 0x25b398: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x25b398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x25b39c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x25b39cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x25b3a0: 0x43202a  slt         $a0, $v0, $v1
    ctx->pc = 0x25b3a0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x25b3a4: 0x64100a  movz        $v0, $v1, $a0
    ctx->pc = 0x25b3a4u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x25b3a8: 0x2842fe00  slti        $v0, $v0, -0x200
    ctx->pc = 0x25b3a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294966784) ? 1 : 0);
    // 0x25b3ac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25B3ACu;
    {
        const bool branch_taken_0x25b3ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B3ACu;
        // 0x25b3b0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b3ac) {
            ctx->pc = 0x25B3C4u;
            goto label_25b3c4;
        }
    }
    ctx->pc = 0x25B3B4u;
    // 0x25b3b4: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x25B3B4u;
    SET_GPR_U32(ctx, 31, 0x25B3BCu);
    ctx->pc = 0x25B3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B3B4u;
    // 0x25b3b8: 0x241e0069  addiu       $fp, $zero, 0x69 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x25B3B4u, 0x25B3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B3BCu;
label_25b3bc:
    // 0x25b3bc: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x25B3BCu;
    {
        const bool branch_taken_0x25b3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b3bc) {
            ctx->pc = 0x25B44Cu;
            goto label_25b44c;
        }
    }
    ctx->pc = 0x25B3C4u;
label_25b3c4:
    // 0x25b3c4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x25b3c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b3c8: 0xc08c2a8  jal         func_230AA0
    ctx->pc = 0x25B3C8u;
    SET_GPR_U32(ctx, 31, 0x25B3D0u);
    ctx->pc = 0x25B3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B3C8u;
    // 0x25b3cc: 0x26240080  addiu       $a0, $s1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230AA0u, 0x25B3C8u, 0x25B3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B3D0u;
label_25b3d0:
    // 0x25b3d0: 0x8e250080  lw          $a1, 0x80($s1)
    ctx->pc = 0x25b3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x25b3d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x25b3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25b3d8: 0x8e620040  lw          $v0, 0x40($s3)
    ctx->pc = 0x25b3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x25b3dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25b3dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b3e0: 0xa2630026  sb          $v1, 0x26($s3)
    ctx->pc = 0x25b3e0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 38), (uint8_t)GPR_U32(ctx, 3));
    // 0x25b3e4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x25b3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x25b3e8: 0xc095fb8  jal         func_257EE0
    ctx->pc = 0x25B3E8u;
    SET_GPR_U32(ctx, 31, 0x25B3F0u);
    ctx->pc = 0x25B3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B3E8u;
    // 0x25b3ec: 0xae620048  sw          $v0, 0x48($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EE0u, 0x25B3E8u, 0x25B3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B3F0u;
label_25b3f0:
    // 0x25b3f0: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x25b3f0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b3f4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x25B3F4u;
    {
        const bool branch_taken_0x25b3f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B3F4u;
        // 0x25b3f8: 0xa2600026  sb          $zero, 0x26($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 38), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b3f4) {
            ctx->pc = 0x25B44Cu;
            goto label_25b44c;
        }
    }
    ctx->pc = 0x25B3FCu;
label_25b3fc:
    // 0x25b3fc: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x25B3FCu;
    {
        const bool branch_taken_0x25b3fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B3FCu;
        // 0x25b400: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b3fc) {
            ctx->pc = 0x25B44Cu;
            goto label_25b44c;
        }
    }
    ctx->pc = 0x25B404u;
    // 0x25b404: 0xc09300c  jal         func_24C030
    ctx->pc = 0x25B404u;
    SET_GPR_U32(ctx, 31, 0x25B40Cu);
    ctx->pc = 0x25B408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B404u;
    // 0x25b408: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C030u, 0x25B404u, 0x25B40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B40Cu;
label_25b40c:
    // 0x25b40c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x25B40Cu;
    {
        const bool branch_taken_0x25b40c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b40c) {
            ctx->pc = 0x25B44Cu;
            goto label_25b44c;
        }
    }
    ctx->pc = 0x25B414u;
label_25b414:
    // 0x25b414: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x25B414u;
    {
        const bool branch_taken_0x25b414 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B414u;
        // 0x25b418: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b414) {
            ctx->pc = 0x25B44Cu;
            goto label_25b44c;
        }
    }
    ctx->pc = 0x25B41Cu;
    // 0x25b41c: 0xc093028  jal         func_24C0A0
    ctx->pc = 0x25B41Cu;
    SET_GPR_U32(ctx, 31, 0x25B424u);
    ctx->pc = 0x25B420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B41Cu;
    // 0x25b420: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C0A0u, 0x25B41Cu, 0x25B424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B424u;
label_25b424:
    // 0x25b424: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x25B424u;
    {
        const bool branch_taken_0x25b424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b424) {
            ctx->pc = 0x25B44Cu;
            goto label_25b44c;
        }
    }
    ctx->pc = 0x25B42Cu;
label_25b42c:
    // 0x25b42c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25b42cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b430: 0xc096a9c  jal         func_25AA70
    ctx->pc = 0x25B430u;
    SET_GPR_U32(ctx, 31, 0x25B438u);
    ctx->pc = 0x25B434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B430u;
    // 0x25b434: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AA70u, 0x25B430u, 0x25B438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B438u;
label_25b438:
    // 0x25b438: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x25B438u;
    {
        const bool branch_taken_0x25b438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b438) {
            ctx->pc = 0x25B44Cu;
            goto label_25b44c;
        }
    }
    ctx->pc = 0x25B440u;
label_25b440:
    // 0x25b440: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x25b440u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x25b444: 0xc08b5e0  jal         func_22D780
    ctx->pc = 0x25B444u;
    SET_GPR_U32(ctx, 31, 0x25B44Cu);
    ctx->pc = 0x25B448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B444u;
    // 0x25b448: 0x24846fd0  addiu       $a0, $a0, 0x6FD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D780u, 0x25B444u, 0x25B44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B44Cu;
label_25b44c:
    // 0x25b44c: 0xc08c698  jal         func_231A60
    ctx->pc = 0x25B44Cu;
    SET_GPR_U32(ctx, 31, 0x25B454u);
    ctx->pc = 0x25B450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B44Cu;
    // 0x25b450: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x25B44Cu, 0x25B454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B454u;
label_25b454:
    // 0x25b454: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x25b454u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_25b458:
    // 0x25b458: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x25b458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_25b45c:
    // 0x25b45c: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x25b45cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x25b460: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x25b460u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25b464: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x25b464u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25b468: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x25b468u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25b46c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x25b46cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25b470: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x25b470u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25b474: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x25b474u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25b478: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x25b478u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25b47c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x25b47cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25b480: 0x3e00008  jr          $ra
    ctx->pc = 0x25B480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B480u;
        // 0x25b484: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25B488u;
    // 0x25b488: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x25b488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x25b48c: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x25b48cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x25b490: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x25b490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x25b494: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x25b494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x25b498: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x25b498u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b49c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x25b49cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x25b4a0: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x25b4a0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b4a4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x25b4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x25b4a8: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x25b4a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b4ac: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x25b4acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x25b4b0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x25b4b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b4b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25b4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25b4b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25b4b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b4bc: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x25b4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x25b4c0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x25b4c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b4c4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x25b4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x25b4c8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x25b4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x25b4cc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x25b4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x25b4d0: 0xc08c682  jal         func_231A08
    ctx->pc = 0x25B4D0u;
    SET_GPR_U32(ctx, 31, 0x25B4D8u);
    ctx->pc = 0x25B4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B4D0u;
    // 0x25b4d4: 0x8c540000  lw          $s4, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x25B4D0u, 0x25B4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B4D8u;
label_25b4d8:
    // 0x25b4d8: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x25b4d8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b4dc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25b4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25b4e0: 0x52820005  beql        $s4, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25B4E0u;
    {
        const bool branch_taken_0x25b4e0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x25b4e0) {
            ctx->pc = 0x25B4E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25B4E0u;
            // 0x25b4e4: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25B4F8u;
            goto label_25b4f8;
        }
    }
    ctx->pc = 0x25B4E8u;
    // 0x25b4e8: 0xc08c698  jal         func_231A60
    ctx->pc = 0x25B4E8u;
    SET_GPR_U32(ctx, 31, 0x25B4F0u);
    ctx->pc = 0x25B4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B4E8u;
    // 0x25b4ec: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x25B4E8u, 0x25B4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B4F0u;
label_25b4f0:
    // 0x25b4f0: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x25B4F0u;
    {
        const bool branch_taken_0x25b4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B4F0u;
        // 0x25b4f4: 0x2402006a  addiu       $v0, $zero, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b4f0) {
            ctx->pc = 0x25B668u;
            goto label_25b668;
        }
    }
    ctx->pc = 0x25B4F8u;
label_25b4f8:
    // 0x25b4f8: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x25B4F8u;
    {
        const bool branch_taken_0x25b4f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x25B4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B4F8u;
        // 0x25b4fc: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b4f8) {
            ctx->pc = 0x25B530u;
            goto label_25b530;
        }
    }
    ctx->pc = 0x25B500u;
    // 0x25b500: 0xc08c698  jal         func_231A60
    ctx->pc = 0x25B500u;
    SET_GPR_U32(ctx, 31, 0x25B508u);
    ctx->pc = 0x25B504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B500u;
    // 0x25b504: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x25B500u, 0x25B508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B508u;
label_25b508:
    // 0x25b508: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25b508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25b50c: 0x16220056  bne         $s1, $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x25B50Cu;
    {
        const bool branch_taken_0x25b50c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x25B510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B50Cu;
        // 0x25b510: 0x24020068  addiu       $v0, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b50c) {
            ctx->pc = 0x25B668u;
            goto label_25b668;
        }
    }
    ctx->pc = 0x25B514u;
    // 0x25b514: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x25b514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x25b518: 0x10800054  beqz        $a0, . + 4 + (0x54 << 2)
    ctx->pc = 0x25B518u;
    {
        const bool branch_taken_0x25b518 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B518u;
        // 0x25b51c: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b518) {
            ctx->pc = 0x25B66Cu;
            goto label_25b66c;
        }
    }
    ctx->pc = 0x25B520u;
    // 0x25b520: 0xc08a996  jal         func_22A658
    ctx->pc = 0x25B520u;
    SET_GPR_U32(ctx, 31, 0x25B528u);
    ctx->pc = 0x22A658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A658u, 0x25B520u, 0x25B528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B528u;
label_25b528:
    // 0x25b528: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x25B528u;
    {
        const bool branch_taken_0x25b528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B528u;
        // 0x25b52c: 0x24020068  addiu       $v0, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b528) {
            ctx->pc = 0x25B668u;
            goto label_25b668;
        }
    }
    ctx->pc = 0x25B530u;
label_25b530:
    // 0x25b530: 0x12a20008  beq         $s5, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x25B530u;
    {
        const bool branch_taken_0x25b530 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x25B534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B530u;
        // 0x25b534: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b530) {
            ctx->pc = 0x25B554u;
            goto label_25b554;
        }
    }
    ctx->pc = 0x25B538u;
    // 0x25b538: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25b538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b53c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x25b53cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b540: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x25b540u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b544: 0xc094698  jal         func_251A60
    ctx->pc = 0x25B544u;
    SET_GPR_U32(ctx, 31, 0x25B54Cu);
    ctx->pc = 0x25B548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B544u;
    // 0x25b548: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251A60u, 0x25B544u, 0x25B54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B54Cu;
label_25b54c:
    // 0x25b54c: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x25B54Cu;
    {
        const bool branch_taken_0x25b54c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B54Cu;
        // 0x25b550: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b54c) {
            ctx->pc = 0x25B65Cu;
            goto label_25b65c;
        }
    }
    ctx->pc = 0x25B554u;
label_25b554:
    // 0x25b554: 0x1220002b  beqz        $s1, . + 4 + (0x2B << 2)
    ctx->pc = 0x25B554u;
    {
        const bool branch_taken_0x25b554 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B554u;
        // 0x25b558: 0x8c700010  lw          $s0, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b554) {
            ctx->pc = 0x25B604u;
            goto label_25b604;
        }
    }
    ctx->pc = 0x25B55Cu;
    // 0x25b55c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25b55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25b560: 0x1622003e  bne         $s1, $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x25B560u;
    {
        const bool branch_taken_0x25b560 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x25b560) {
            ctx->pc = 0x25B65Cu;
            goto label_25b65c;
        }
    }
    ctx->pc = 0x25B568u;
    // 0x25b568: 0x12510005  beq         $s2, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x25B568u;
    {
        const bool branch_taken_0x25b568 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 17));
        ctx->pc = 0x25B56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B568u;
        // 0x25b56c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b568) {
            ctx->pc = 0x25B580u;
            goto label_25b580;
        }
    }
    ctx->pc = 0x25B570u;
    // 0x25b570: 0x12540013  beq         $s2, $s4, . + 4 + (0x13 << 2)
    ctx->pc = 0x25B570u;
    {
        const bool branch_taken_0x25b570 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 20));
        if (branch_taken_0x25b570) {
            ctx->pc = 0x25B5C0u;
            goto label_25b5c0;
        }
    }
    ctx->pc = 0x25B578u;
    // 0x25b578: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x25B578u;
    {
        const bool branch_taken_0x25b578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B578u;
        // 0x25b57c: 0x2416006d  addiu       $s6, $zero, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b578) {
            ctx->pc = 0x25B5ECu;
            goto label_25b5ec;
        }
    }
    ctx->pc = 0x25B580u;
label_25b580:
    // 0x25b580: 0x5080001a  beql        $a0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x25B580u;
    {
        const bool branch_taken_0x25b580 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b580) {
            ctx->pc = 0x25B584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25B580u;
            // 0x25b584: 0x24160016  addiu       $s6, $zero, 0x16 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25B5ECu;
            goto label_25b5ec;
        }
    }
    ctx->pc = 0x25B588u;
    // 0x25b588: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x25b588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x25b58c: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x25b58cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x25b590: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x25B590u;
    {
        const bool branch_taken_0x25b590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25b590) {
            ctx->pc = 0x25B594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25B590u;
            // 0x25b594: 0x24160016  addiu       $s6, $zero, 0x16 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25B5ECu;
            goto label_25b5ec;
        }
    }
    ctx->pc = 0x25B598u;
    // 0x25b598: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x25b598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x25b59c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25b59cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25b5a0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25B5A0u;
    {
        const bool branch_taken_0x25b5a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B5A0u;
        // 0x25b5a4: 0x96020028  lhu         $v0, 0x28($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b5a0) {
            ctx->pc = 0x25B5B4u;
            goto label_25b5b4;
        }
    }
    ctx->pc = 0x25B5A8u;
    // 0x25b5a8: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x25b5a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x25b5ac: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x25B5ACu;
    {
        const bool branch_taken_0x25b5ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B5ACu;
        // 0x25b5b0: 0xa6020028  sh          $v0, 0x28($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 40), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b5ac) {
            ctx->pc = 0x25B5ECu;
            goto label_25b5ec;
        }
    }
    ctx->pc = 0x25B5B4u;
label_25b5b4:
    // 0x25b5b4: 0x3042fffb  andi        $v0, $v0, 0xFFFB
    ctx->pc = 0x25b5b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65531);
    // 0x25b5b8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x25B5B8u;
    {
        const bool branch_taken_0x25b5b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B5B8u;
        // 0x25b5bc: 0xa6020028  sh          $v0, 0x28($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 40), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b5b8) {
            ctx->pc = 0x25B5ECu;
            goto label_25b5ec;
        }
    }
    ctx->pc = 0x25B5C0u;
label_25b5c0:
    // 0x25b5c0: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x25B5C0u;
    {
        const bool branch_taken_0x25b5c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b5c0) {
            ctx->pc = 0x25B5C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25B5C0u;
            // 0x25b5c4: 0x24160016  addiu       $s6, $zero, 0x16 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25B5ECu;
            goto label_25b5ec;
        }
    }
    ctx->pc = 0x25B5C8u;
    // 0x25b5c8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x25b5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x25b5cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25b5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25b5d0: 0x58600006  blezl       $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x25B5D0u;
    {
        const bool branch_taken_0x25b5d0 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x25b5d0) {
            ctx->pc = 0x25B5D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25B5D0u;
            // 0x25b5d4: 0x24160016  addiu       $s6, $zero, 0x16 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25B5ECu;
            goto label_25b5ec;
        }
    }
    ctx->pc = 0x25B5D8u;
    // 0x25b5d8: 0x96020020  lhu         $v0, 0x20($s0)
    ctx->pc = 0x25b5d8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x25b5dc: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x25b5dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x25b5e0: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x25B5E0u;
    {
        const bool branch_taken_0x25b5e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25b5e0) {
            ctx->pc = 0x25B5E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25B5E0u;
            // 0x25b5e4: 0x24160016  addiu       $s6, $zero, 0x16 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25B5ECu;
            goto label_25b5ec;
        }
    }
    ctx->pc = 0x25B5E8u;
    // 0x25b5e8: 0xa6030020  sh          $v1, 0x20($s0)
    ctx->pc = 0x25b5e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 3));
label_25b5ec:
    // 0x25b5ec: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x25B5ECu;
    {
        const bool branch_taken_0x25b5ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b5ec) {
            ctx->pc = 0x25B65Cu;
            goto label_25b65c;
        }
    }
    ctx->pc = 0x25B5F4u;
    // 0x25b5f4: 0xc08a996  jal         func_22A658
    ctx->pc = 0x25B5F4u;
    SET_GPR_U32(ctx, 31, 0x25B5FCu);
    ctx->pc = 0x22A658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A658u, 0x25B5F4u, 0x25B5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B5FCu;
label_25b5fc:
    // 0x25b5fc: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x25B5FCu;
    {
        const bool branch_taken_0x25b5fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b5fc) {
            ctx->pc = 0x25B65Cu;
            goto label_25b65c;
        }
    }
    ctx->pc = 0x25B604u;
label_25b604:
    // 0x25b604: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x25b604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b608: 0xc08a922  jal         func_22A488
    ctx->pc = 0x25B608u;
    SET_GPR_U32(ctx, 31, 0x25B610u);
    ctx->pc = 0x25B60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B608u;
    // 0x25b60c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A488u, 0x25B608u, 0x25B610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B610u;
label_25b610:
    // 0x25b610: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x25b610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b614: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25B614u;
    {
        const bool branch_taken_0x25b614 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x25B618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B614u;
        // 0x25b618: 0xae640000  sw          $a0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b614) {
            ctx->pc = 0x25B624u;
            goto label_25b624;
        }
    }
    ctx->pc = 0x25B61Cu;
    // 0x25b61c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x25B61Cu;
    {
        const bool branch_taken_0x25b61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B61Cu;
        // 0x25b620: 0x24160069  addiu       $s6, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b61c) {
            ctx->pc = 0x25B65Cu;
            goto label_25b65c;
        }
    }
    ctx->pc = 0x25B624u;
label_25b624:
    // 0x25b624: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x25b624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x25b628: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x25b628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25b62c: 0x12430005  beq         $s2, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x25B62Cu;
    {
        const bool branch_taken_0x25b62c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x25B630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B62Cu;
        // 0x25b630: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b62c) {
            ctx->pc = 0x25B644u;
            goto label_25b644;
        }
    }
    ctx->pc = 0x25B634u;
    // 0x25b634: 0x52540007  beql        $s2, $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x25B634u;
    {
        const bool branch_taken_0x25b634 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 20));
        if (branch_taken_0x25b634) {
            ctx->pc = 0x25B638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25B634u;
            // 0x25b638: 0x8c830008  lw          $v1, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25B654u;
            goto label_25b654;
        }
    }
    ctx->pc = 0x25B63Cu;
    // 0x25b63c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x25B63Cu;
    {
        const bool branch_taken_0x25b63c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B63Cu;
        // 0x25b640: 0x2416006d  addiu       $s6, $zero, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b63c) {
            ctx->pc = 0x25B65Cu;
            goto label_25b65c;
        }
    }
    ctx->pc = 0x25B644u;
label_25b644:
    // 0x25b644: 0x96020028  lhu         $v0, 0x28($s0)
    ctx->pc = 0x25b644u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x25b648: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x25b648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x25b64c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25B64Cu;
    {
        const bool branch_taken_0x25b64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B64Cu;
        // 0x25b650: 0x30420004  andi        $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b64c) {
            ctx->pc = 0x25B658u;
            goto label_25b658;
        }
    }
    ctx->pc = 0x25B654u;
label_25b654:
    // 0x25b654: 0x96020020  lhu         $v0, 0x20($s0)
    ctx->pc = 0x25b654u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
label_25b658:
    // 0x25b658: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x25b658u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_25b65c:
    // 0x25b65c: 0xc08c698  jal         func_231A60
    ctx->pc = 0x25B65Cu;
    SET_GPR_U32(ctx, 31, 0x25B664u);
    ctx->pc = 0x25B660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B65Cu;
    // 0x25b660: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x25B65Cu, 0x25B664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B664u;
label_25b664:
    // 0x25b664: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x25b664u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_25b668:
    // 0x25b668: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x25b668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_25b66c:
    // 0x25b66c: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x25b66cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25b670: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x25b670u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25b674: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x25b674u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25b678: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x25b678u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25b67c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x25b67cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25b680: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x25b680u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25b684: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x25b684u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25b688: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25b688u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25b68c: 0x3e00008  jr          $ra
    ctx->pc = 0x25B68Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B68Cu;
        // 0x25b690: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B68Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25B694u;
    // 0x25b694: 0x0  nop
    ctx->pc = 0x25b694u;
    // NOP
    if (ctx->pc == 0x25b694u) { ctx->pc = 0x25b698u; }
}
