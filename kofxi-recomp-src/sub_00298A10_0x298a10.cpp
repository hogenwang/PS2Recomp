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

// Function: sub_00298A10
// Address: 0x298a10 - 0x298b88
void sub_00298A10_0x298a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298A10_0x298a10");
#endif

    switch (ctx->pc) {
        case 0x298a90u: goto label_298a90;
        case 0x298a98u: goto label_298a98;
        case 0x298af0u: goto label_298af0;
        case 0x298b28u: goto label_298b28;
        default: break;
    }

    ctx->pc = 0x298a10u;

    // 0x298a10: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x298a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x298a14: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x298a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x298a18: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x298a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x298a1c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x298a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x298a20: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x298a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x298a24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x298a24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298a28: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x298a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x298a2c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x298a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x298a30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x298a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x298a34: 0x8e270014  lw          $a3, 0x14($s1)
    ctx->pc = 0x298a34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x298a38: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x298a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x298a3c: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x298a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x298a40: 0x24e60001  addiu       $a2, $a3, 0x1
    ctx->pc = 0x298a40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x298a44: 0xde230038  ld          $v1, 0x38($s1)
    ctx->pc = 0x298a44u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x298a48: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x298a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x298a4c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x298a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x298a50: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x298a50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x298a54: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x298a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x298a58: 0x64630001  daddiu      $v1, $v1, 0x1
    ctx->pc = 0x298a58u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
    // 0x298a5c: 0xa2a021  addu        $s4, $a1, $v0
    ctx->pc = 0x298a5cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x298a60: 0xae24000c  sw          $a0, 0xC($s1)
    ctx->pc = 0x298a60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 4));
    // 0x298a64: 0xfe230038  sd          $v1, 0x38($s1)
    ctx->pc = 0x298a64u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 56), GPR_U64(ctx, 3));
    // 0x298a68: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x298a68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x298a6c: 0xae260014  sw          $a2, 0x14($s1)
    ctx->pc = 0x298a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 6));
    // 0x298a70: 0xa29021  addu        $s2, $a1, $v0
    ctx->pc = 0x298a70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x298a74: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x298a74u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x298a78: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x298a78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x298a7c: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x298A7Cu;
    {
        const bool branch_taken_0x298a7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x298A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298A7Cu;
        // 0x298a80: 0x9e350010  lwu         $s5, 0x10($s1) (Delay Slot)
        SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298a7c) {
            ctx->pc = 0x298AC4u;
            goto label_298ac4;
        }
    }
    ctx->pc = 0x298A84u;
    // 0x298a84: 0x7983c  dsll32      $s3, $a3, 0
    ctx->pc = 0x298a84u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 7) << (32 + 0));
    // 0x298a88: 0xde040008  ld          $a0, 0x8($s0)
    ctx->pc = 0x298a88u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x298a8c: 0x0  nop
    ctx->pc = 0x298a8cu;
    // NOP
label_298a90:
    // 0x298a90: 0xc04872c  jal         func_121CB0
    ctx->pc = 0x298A90u;
    SET_GPR_U32(ctx, 31, 0x298A98u);
    ctx->pc = 0x298A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298A90u;
    // 0x298a94: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121CB0u, 0x298A90u, 0x298A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298A98u;
label_298a98:
    // 0x298a98: 0x13183e  dsrl32      $v1, $s3, 0
    ctx->pc = 0x298a98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) >> (32 + 0));
    // 0x298a9c: 0x50430006  beql        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x298A9Cu;
    {
        const bool branch_taken_0x298a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x298a9c) {
            ctx->pc = 0x298AA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x298A9Cu;
            // 0x298aa0: 0x26120004  addiu       $s2, $s0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x298AB8u;
            goto label_298ab8;
        }
    }
    ctx->pc = 0x298AA4u;
    // 0x298aa4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x298aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x298aa8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x298aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x298aac: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x298aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x298ab0: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x298ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x298ab4: 0xae900000  sw          $s0, 0x0($s4)
    ctx->pc = 0x298ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
label_298ab8:
    // 0x298ab8: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x298ab8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x298abc: 0x5600fff4  bnel        $s0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x298ABCu;
    {
        const bool branch_taken_0x298abc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x298abc) {
            ctx->pc = 0x298AC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x298ABCu;
            // 0x298ac0: 0xde040008  ld          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x298A90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_298a90;
        }
    }
    ctx->pc = 0x298AC4u;
label_298ac4:
    // 0x298ac4: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x298ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x298ac8: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x298ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x298acc: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x298accu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x298ad0: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x298AD0u;
    {
        const bool branch_taken_0x298ad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x298AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298AD0u;
        // 0x298ad4: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298ad0) {
            ctx->pc = 0x298B68u;
            goto label_298b68;
        }
    }
    ctx->pc = 0x298AD8u;
    // 0x298ad8: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x298ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x298adc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x298adcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x298ae0: 0x58040  sll         $s0, $a1, 1
    ctx->pc = 0x298ae0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x298ae4: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x298ae4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x298ae8: 0xc0a8c00  jal         func_2A3000
    ctx->pc = 0x298AE8u;
    SET_GPR_U32(ctx, 31, 0x298AF0u);
    ctx->pc = 0x298AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298AE8u;
    // 0x298aec: 0x528c0  sll         $a1, $a1, 3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3000u, 0x298AE8u, 0x298AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298AF0u;
label_298af0:
    // 0x298af0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x298af0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298af4: 0x54a00006  bnel        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x298AF4u;
    {
        const bool branch_taken_0x298af4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x298af4) {
            ctx->pc = 0x298AF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x298AF4u;
            // 0x298af8: 0x8e230010  lw          $v1, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x298B10u;
            goto label_298b10;
        }
    }
    ctx->pc = 0x298AFCu;
    // 0x298afc: 0x8e2200a0  lw          $v0, 0xA0($s1)
    ctx->pc = 0x298afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x298b00: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x298b00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x298b04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x298b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x298b08: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x298B08u;
    {
        const bool branch_taken_0x298b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298B08u;
        // 0x298b0c: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298b08) {
            ctx->pc = 0x298B64u;
            goto label_298b64;
        }
    }
    ctx->pc = 0x298B10u;
label_298b10:
    // 0x298b10: 0x70102b  sltu        $v0, $v1, $s0
    ctx->pc = 0x298b10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x298b14: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x298B14u;
    {
        const bool branch_taken_0x298b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x298B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298B14u;
        // 0x298b18: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298b14) {
            ctx->pc = 0x298B48u;
            goto label_298b48;
        }
    }
    ctx->pc = 0x298B1Cu;
    // 0x298b1c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x298b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x298b20: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x298b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x298b24: 0x0  nop
    ctx->pc = 0x298b24u;
    // NOP
label_298b28:
    // 0x298b28: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x298b28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x298b2c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x298b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x298b30: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x298b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x298b34: 0x90102b  sltu        $v0, $a0, $s0
    ctx->pc = 0x298b34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x298b38: 0x0  nop
    ctx->pc = 0x298b38u;
    // NOP
    // 0x298b3c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x298B3Cu;
    {
        const bool branch_taken_0x298b3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x298b3c) {
            ctx->pc = 0x298B28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_298b28;
        }
    }
    ctx->pc = 0x298B44u;
    // 0x298b44: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x298b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_298b48:
    // 0x298b48: 0xde220040  ld          $v0, 0x40($s1)
    ctx->pc = 0x298b48u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x298b4c: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x298b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x298b50: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x298b50u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x298b54: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x298b54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
    // 0x298b58: 0xae300010  sw          $s0, 0x10($s1)
    ctx->pc = 0x298b58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
    // 0x298b5c: 0xfe220040  sd          $v0, 0x40($s1)
    ctx->pc = 0x298b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 64), GPR_U64(ctx, 2));
    // 0x298b60: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x298b60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_298b64:
    // 0x298b64: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x298b64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_298b68:
    // 0x298b68: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x298b68u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x298b6c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x298b6cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x298b70: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x298b70u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x298b74: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x298b74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x298b78: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x298b78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298b7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x298b7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298b80: 0x3e00008  jr          $ra
    ctx->pc = 0x298B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298B80u;
        // 0x298b84: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298B80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298B88u;
}
