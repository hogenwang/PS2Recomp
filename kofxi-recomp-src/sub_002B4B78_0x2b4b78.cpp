#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B4B78
// Address: 0x2b4b78 - 0x2b4f30
void sub_002B4B78_0x2b4b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B4B78_0x2b4b78");
#endif

    switch (ctx->pc) {
        case 0x2b4bd4u: goto label_2b4bd4;
        case 0x2b4c30u: goto label_2b4c30;
        case 0x2b4c70u: goto label_2b4c70;
        case 0x2b4c94u: goto label_2b4c94;
        case 0x2b4cd0u: goto label_2b4cd0;
        case 0x2b4d38u: goto label_2b4d38;
        case 0x2b4d50u: goto label_2b4d50;
        case 0x2b4d68u: goto label_2b4d68;
        case 0x2b4da8u: goto label_2b4da8;
        case 0x2b4dccu: goto label_2b4dcc;
        case 0x2b4df4u: goto label_2b4df4;
        case 0x2b4e20u: goto label_2b4e20;
        case 0x2b4e4cu: goto label_2b4e4c;
        case 0x2b4e74u: goto label_2b4e74;
        case 0x2b4e84u: goto label_2b4e84;
        case 0x2b4eb4u: goto label_2b4eb4;
        case 0x2b4edcu: goto label_2b4edc;
        case 0x2b4f10u: goto label_2b4f10;
        case 0x2b4f24u: goto label_2b4f24;
        default: break;
    }

    ctx->pc = 0x2b4b78u;

    // 0x2b4b78: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2b4b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2b4b7c: 0x24051150  addiu       $a1, $zero, 0x1150
    ctx->pc = 0x2b4b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4432));
    // 0x2b4b80: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x2b4b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x2b4b84: 0x24061151  addiu       $a2, $zero, 0x1151
    ctx->pc = 0x2b4b84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4433));
    // 0x2b4b88: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2b4b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2b4b8c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2b4b8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b4b90: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2b4b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2b4b94: 0x3c140001  lui         $s4, 0x1
    ctx->pc = 0x2b4b94u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)1 << 16));
    // 0x2b4b98: 0x36949000  ori         $s4, $s4, 0x9000
    ctx->pc = 0x2b4b98u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)36864);
    // 0x2b4b9c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2b4b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2b4ba0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2b4ba0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4ba4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2b4ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2b4ba8: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x2b4ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x2b4bac: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x2b4bacu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4bb0: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2b4bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2b4bb4: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2b4bb4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4bb8: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2b4bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2b4bbc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2b4bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2b4bc0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2b4bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2b4bc4: 0xde680120  ld          $t0, 0x120($s3)
    ctx->pc = 0x2b4bc4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 19), 288)));
    // 0x2b4bc8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2b4bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2b4bcc: 0xc0ab498  jal         func_2AD260
    ctx->pc = 0x2B4BCCu;
    SET_GPR_U32(ctx, 31, 0x2B4BD4u);
    ctx->pc = 0x2B4BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4BCCu;
            // 0x2b4bd0: 0x288400a  movz        $t0, $s4, $t0 (Delay Slot)
        if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AD260u;
    if (runtime->hasFunction(0x2AD260u)) {
        auto targetFn = runtime->lookupFunction(0x2AD260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4BD4u; }
        if (ctx->pc != 0x2B4BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AD260_0x2ad260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4BD4u; }
        if (ctx->pc != 0x2B4BD4u) { return; }
    }
    ctx->pc = 0x2B4BD4u;
label_2b4bd4:
    // 0x2b4bd4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2b4bd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4bd8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2b4bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b4bdc: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B4BDCu;
    {
        const bool branch_taken_0x2b4bdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b4bdc) {
            ctx->pc = 0x2B4BE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4BDCu;
            // 0x2b4be0: 0x8e620054  lw          $v0, 0x54($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B4BF4u;
            goto label_2b4bf4;
        }
    }
    ctx->pc = 0x2B4BE4u;
    // 0x2b4be4: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x2b4be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x2b4be8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2b4be8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2b4bec: 0x100000bd  b           . + 4 + (0xBD << 2)
    ctx->pc = 0x2B4BECu;
    {
        const bool branch_taken_0x2b4bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4BECu;
            // 0x2b4bf0: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4bec) {
            ctx->pc = 0x2B4EE4u;
            goto label_2b4ee4;
        }
    }
    ctx->pc = 0x2B4BF4u;
label_2b4bf4:
    // 0x2b4bf4: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x2b4bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2b4bf8: 0xac40016c  sw          $zero, 0x16C($v0)
    ctx->pc = 0x2b4bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 364), GPR_U32(ctx, 0));
    // 0x2b4bfc: 0x8e650054  lw          $a1, 0x54($s3)
    ctx->pc = 0x2b4bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x2b4c00: 0x8ca40158  lw          $a0, 0x158($a1)
    ctx->pc = 0x2b4c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 344)));
    // 0x2b4c04: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B4C04u;
    {
        const bool branch_taken_0x2b4c04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2B4C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4C04u;
            // 0x2b4c08: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4c04) {
            ctx->pc = 0x2B4C1Cu;
            goto label_2b4c1c;
        }
    }
    ctx->pc = 0x2B4C0Cu;
    // 0x2b4c0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b4c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b4c10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b4c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b4c14: 0x100000b2  b           . + 4 + (0xB2 << 2)
    ctx->pc = 0x2B4C14u;
    {
        const bool branch_taken_0x2b4c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4C14u;
            // 0x2b4c18: 0xaca30168  sw          $v1, 0x168($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 360), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4c14) {
            ctx->pc = 0x2B4EE0u;
            goto label_2b4ee0;
        }
    }
    ctx->pc = 0x2B4C1Cu;
label_2b4c1c:
    // 0x2b4c1c: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B4C1Cu;
    {
        const bool branch_taken_0x2b4c1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B4C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4C1Cu;
            // 0x2b4c20: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4c1c) {
            ctx->pc = 0x2B4C40u;
            goto label_2b4c40;
        }
    }
    ctx->pc = 0x2B4C24u;
    // 0x2b4c24: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2b4c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b4c28: 0xc0adb7e  jal         func_2B6DF8
    ctx->pc = 0x2B4C28u;
    SET_GPR_U32(ctx, 31, 0x2B4C30u);
    ctx->pc = 0x2B4C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4C28u;
            // 0x2b4c2c: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6DF8u;
    if (runtime->hasFunction(0x2B6DF8u)) {
        auto targetFn = runtime->lookupFunction(0x2B6DF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4C30u; }
        if (ctx->pc != 0x2B4C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B6DF8_0x2b6df8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4C30u; }
        if (ctx->pc != 0x2B4C30u) { return; }
    }
    ctx->pc = 0x2B4C30u;
label_2b4c30:
    // 0x2b4c30: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b4c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b4c34: 0x24050087  addiu       $a1, $zero, 0x87
    ctx->pc = 0x2b4c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 135));
    // 0x2b4c38: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x2B4C38u;
    {
        const bool branch_taken_0x2b4c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4C38u;
            // 0x2b4c3c: 0x24060106  addiu       $a2, $zero, 0x106 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 262));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4c38) {
            ctx->pc = 0x2B4D44u;
            goto label_2b4d44;
        }
    }
    ctx->pc = 0x2B4C40u;
label_2b4c40:
    // 0x2b4c40: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2b4c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2b4c44: 0x28420301  slti        $v0, $v0, 0x301
    ctx->pc = 0x2b4c44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)769) ? 1 : 0);
    // 0x2b4c48: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2B4C48u;
    {
        const bool branch_taken_0x2b4c48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b4c48) {
            ctx->pc = 0x2B4C4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4C48u;
            // 0x2b4c4c: 0x8e62003c  lw          $v0, 0x3C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B4C84u;
            goto label_2b4c84;
        }
    }
    ctx->pc = 0x2B4C50u;
    // 0x2b4c50: 0x8ca2015c  lw          $v0, 0x15C($a1)
    ctx->pc = 0x2b4c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 348)));
    // 0x2b4c54: 0xdc540010  ld          $s4, 0x10($v0)
    ctx->pc = 0x2b4c54u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2b4c58: 0x32830100  andi        $v1, $s4, 0x100
    ctx->pc = 0x2b4c58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)256);
    // 0x2b4c5c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B4C5Cu;
    {
        const bool branch_taken_0x2b4c5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4C5Cu;
            // 0x2b4c60: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4c5c) {
            ctx->pc = 0x2B4C80u;
            goto label_2b4c80;
        }
    }
    ctx->pc = 0x2B4C64u;
    // 0x2b4c64: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2b4c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b4c68: 0xc0adb7e  jal         func_2B6DF8
    ctx->pc = 0x2B4C68u;
    SET_GPR_U32(ctx, 31, 0x2B4C70u);
    ctx->pc = 0x2B4C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4C68u;
            // 0x2b4c6c: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6DF8u;
    if (runtime->hasFunction(0x2B6DF8u)) {
        auto targetFn = runtime->lookupFunction(0x2B6DF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4C70u; }
        if (ctx->pc != 0x2B4C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B6DF8_0x2b6df8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4C70u; }
        if (ctx->pc != 0x2B4C70u) { return; }
    }
    ctx->pc = 0x2B4C70u;
label_2b4c70:
    // 0x2b4c70: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b4c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b4c74: 0x24050087  addiu       $a1, $zero, 0x87
    ctx->pc = 0x2b4c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 135));
    // 0x2b4c78: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x2B4C78u;
    {
        const bool branch_taken_0x2b4c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4C78u;
            // 0x2b4c7c: 0x240600e8  addiu       $a2, $zero, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4c78) {
            ctx->pc = 0x2B4D44u;
            goto label_2b4d44;
        }
    }
    ctx->pc = 0x2B4C80u;
label_2b4c80:
    // 0x2b4c80: 0x8e62003c  lw          $v0, 0x3C($s3)
    ctx->pc = 0x2b4c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
label_2b4c84:
    // 0x2b4c84: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x2b4c84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x2b4c88: 0x24844f10  addiu       $a0, $a0, 0x4F10
    ctx->pc = 0x2b4c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20240));
    // 0x2b4c8c: 0xc0af004  jal         func_2BC010
    ctx->pc = 0x2B4C8Cu;
    SET_GPR_U32(ctx, 31, 0x2B4C94u);
    ctx->pc = 0x2B4C90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4C8Cu;
            // 0x2b4c90: 0x8c500004  lw          $s0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC010u;
    if (runtime->hasFunction(0x2BC010u)) {
        auto targetFn = runtime->lookupFunction(0x2BC010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4C94u; }
        if (ctx->pc != 0x2B4C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BC010_0x2bc010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4C94u; }
        if (ctx->pc != 0x2B4C94u) { return; }
    }
    ctx->pc = 0x2B4C94u;
label_2b4c94:
    // 0x2b4c94: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2b4c94u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4c98: 0x57c00005  bnel        $fp, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B4C98u;
    {
        const bool branch_taken_0x2b4c98 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b4c98) {
            ctx->pc = 0x2B4C9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4C98u;
            // 0x2b4c9c: 0x92150000  lbu         $s5, 0x0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B4CB0u;
            goto label_2b4cb0;
        }
    }
    ctx->pc = 0x2B4CA0u;
    // 0x2b4ca0: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b4ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b4ca4: 0x24050087  addiu       $a1, $zero, 0x87
    ctx->pc = 0x2b4ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 135));
    // 0x2b4ca8: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2B4CA8u;
    {
        const bool branch_taken_0x2b4ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4CA8u;
            // 0x2b4cac: 0x24060021  addiu       $a2, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4ca8) {
            ctx->pc = 0x2B4D44u;
            goto label_2b4d44;
        }
    }
    ctx->pc = 0x2B4CB0u;
label_2b4cb0:
    // 0x2b4cb0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2b4cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2b4cb4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2b4cb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2b4cb8: 0x2ea20008  sltiu       $v0, $s5, 0x8
    ctx->pc = 0x2b4cb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2b4cbc: 0x62a80a  movz        $s5, $v1, $v0
    ctx->pc = 0x2b4cbcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 3));
    // 0x2b4cc0: 0x12a0000d  beqz        $s5, . + 4 + (0xD << 2)
    ctx->pc = 0x2B4CC0u;
    {
        const bool branch_taken_0x2b4cc0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4CC0u;
            // 0x2b4cc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4cc0) {
            ctx->pc = 0x2B4CF8u;
            goto label_2b4cf8;
        }
    }
    ctx->pc = 0x2B4CC8u;
    // 0x2b4cc8: 0x2153021  addu        $a2, $s0, $s5
    ctx->pc = 0x2b4cc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x2b4ccc: 0x0  nop
    ctx->pc = 0x2b4cccu;
    // NOP
label_2b4cd0:
    // 0x2b4cd0: 0x8e630054  lw          $v1, 0x54($s3)
    ctx->pc = 0x2b4cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x2b4cd4: 0x2051021  addu        $v0, $s0, $a1
    ctx->pc = 0x2b4cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x2b4cd8: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x2b4cd8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b4cdc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2b4cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2b4ce0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2b4ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2b4ce4: 0xb5102b  sltu        $v0, $a1, $s5
    ctx->pc = 0x2b4ce4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x2b4ce8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2B4CE8u;
    {
        const bool branch_taken_0x2b4ce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B4CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4CE8u;
            // 0x2b4cec: 0xa0640174  sb          $a0, 0x174($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 372), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4ce8) {
            ctx->pc = 0x2B4CD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b4cd0;
        }
    }
    ctx->pc = 0x2B4CF0u;
    // 0x2b4cf0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B4CF0u;
    {
        const bool branch_taken_0x2b4cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4CF0u;
            // 0x2b4cf4: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4cf0) {
            ctx->pc = 0x2B4D00u;
            goto label_2b4d00;
        }
    }
    ctx->pc = 0x2B4CF8u;
label_2b4cf8:
    // 0x2b4cf8: 0x2153021  addu        $a2, $s0, $s5
    ctx->pc = 0x2b4cf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x2b4cfc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2b4cfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2b4d00:
    // 0x2b4d00: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x2b4d00u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b4d04: 0x92040001  lbu         $a0, 0x1($s0)
    ctx->pc = 0x2b4d04u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x2b4d08: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x2b4d08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2b4d0c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2b4d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2b4d10: 0x551821  addu        $v1, $v0, $s5
    ctx->pc = 0x2b4d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x2b4d14: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x2b4d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2b4d18: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2b4d18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2b4d1c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2b4d1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2b4d20: 0x1071000d  beq         $v1, $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x2B4D20u;
    {
        const bool branch_taken_0x2b4d20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x2B4D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4D20u;
            // 0x2b4d24: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4d20) {
            ctx->pc = 0x2B4D58u;
            goto label_2b4d58;
        }
    }
    ctx->pc = 0x2B4D28u;
    // 0x2b4d28: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b4d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4d2c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2b4d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b4d30: 0xc0adb7e  jal         func_2B6DF8
    ctx->pc = 0x2B4D30u;
    SET_GPR_U32(ctx, 31, 0x2B4D38u);
    ctx->pc = 0x2B4D34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4D30u;
            // 0x2b4d34: 0x24060032  addiu       $a2, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6DF8u;
    if (runtime->hasFunction(0x2B6DF8u)) {
        auto targetFn = runtime->lookupFunction(0x2B6DF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4D38u; }
        if (ctx->pc != 0x2B4D38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B6DF8_0x2b6df8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4D38u; }
        if (ctx->pc != 0x2B4D38u) { return; }
    }
    ctx->pc = 0x2B4D38u;
label_2b4d38:
    // 0x2b4d38: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b4d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b4d3c: 0x24050087  addiu       $a1, $zero, 0x87
    ctx->pc = 0x2b4d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 135));
    // 0x2b4d40: 0x2406009f  addiu       $a2, $zero, 0x9F
    ctx->pc = 0x2b4d40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 159));
label_2b4d44:
    // 0x2b4d44: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b4d44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4d48: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2B4D48u;
    SET_GPR_U32(ctx, 31, 0x2B4D50u);
    ctx->pc = 0x2B4D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4D48u;
            // 0x2b4d4c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4D50u; }
        if (ctx->pc != 0x2B4D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4D50u; }
        if (ctx->pc != 0x2B4D50u) { return; }
    }
    ctx->pc = 0x2B4D50u;
label_2b4d50:
    // 0x2b4d50: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x2B4D50u;
    {
        const bool branch_taken_0x2b4d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b4d50) {
            ctx->pc = 0x2B4EC8u;
            goto label_2b4ec8;
        }
    }
    ctx->pc = 0x2B4D58u;
label_2b4d58:
    // 0x2b4d58: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x2B4D58u;
    {
        const bool branch_taken_0x2b4d58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4D58u;
            // 0x2b4d5c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4d58) {
            ctx->pc = 0x2B4E84u;
            goto label_2b4e84;
        }
    }
    ctx->pc = 0x2B4D60u;
    // 0x2b4d60: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2b4d60u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4d64: 0x3c172000  lui         $s7, 0x2000
    ctx->pc = 0x2b4d64u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)8192 << 16));
label_2b4d68:
    // 0x2b4d68: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x2b4d68u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b4d6c: 0x92040001  lbu         $a0, 0x1($s0)
    ctx->pc = 0x2b4d6cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x2b4d70: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x2b4d70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2b4d74: 0x44a025  or          $s4, $v0, $a0
    ctx->pc = 0x2b4d74u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2b4d78: 0x292182d  daddu       $v1, $s4, $s2
    ctx->pc = 0x2b4d78u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 18));
    // 0x2b4d7c: 0x64630002  daddiu      $v1, $v1, 0x2
    ctx->pc = 0x2b4d7cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)2);
    // 0x2b4d80: 0x2c3182b  sltu        $v1, $s6, $v1
    ctx->pc = 0x2b4d80u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2b4d84: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2B4D84u;
    {
        const bool branch_taken_0x2b4d84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4D84u;
            // 0x2b4d88: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4d84) {
            ctx->pc = 0x2B4DB8u;
            goto label_2b4db8;
        }
    }
    ctx->pc = 0x2B4D8Cu;
    // 0x2b4d8c: 0xde620100  ld          $v0, 0x100($s3)
    ctx->pc = 0x2b4d8cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 256)));
    // 0x2b4d90: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x2b4d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x2b4d94: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x2B4D94u;
    {
        const bool branch_taken_0x2b4d94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B4D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4D94u;
            // 0x2b4d98: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4d94) {
            ctx->pc = 0x2B4E7Cu;
            goto label_2b4e7c;
        }
    }
    ctx->pc = 0x2B4D9Cu;
    // 0x2b4d9c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2b4d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b4da0: 0xc0adb7e  jal         func_2B6DF8
    ctx->pc = 0x2B4DA0u;
    SET_GPR_U32(ctx, 31, 0x2B4DA8u);
    ctx->pc = 0x2B4DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4DA0u;
            // 0x2b4da4: 0x24060032  addiu       $a2, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6DF8u;
    if (runtime->hasFunction(0x2B6DF8u)) {
        auto targetFn = runtime->lookupFunction(0x2B6DF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4DA8u; }
        if (ctx->pc != 0x2B4DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B6DF8_0x2b6df8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4DA8u; }
        if (ctx->pc != 0x2B4DA8u) { return; }
    }
    ctx->pc = 0x2B4DA8u;
label_2b4da8:
    // 0x2b4da8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b4da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b4dac: 0x24050087  addiu       $a1, $zero, 0x87
    ctx->pc = 0x2b4dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 135));
    // 0x2b4db0: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x2B4DB0u;
    {
        const bool branch_taken_0x2b4db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4DB0u;
            // 0x2b4db4: 0x24060084  addiu       $a2, $zero, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4db0) {
            ctx->pc = 0x2B4E68u;
            goto label_2b4e68;
        }
    }
    ctx->pc = 0x2B4DB8u;
label_2b4db8:
    // 0x2b4db8: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x2b4db8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
    // 0x2b4dbc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2b4dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4dc0: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x2b4dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x2b4dc4: 0xc0a3a9c  jal         func_28EA70
    ctx->pc = 0x2B4DC4u;
    SET_GPR_U32(ctx, 31, 0x2B4DCCu);
    ctx->pc = 0x2B4DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4DC4u;
            // 0x2b4dc8: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28EA70u;
    if (runtime->hasFunction(0x28EA70u)) {
        auto targetFn = runtime->lookupFunction(0x28EA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4DCCu; }
        if (ctx->pc != 0x2B4DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028EA70_0x28ea70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4DCCu; }
        if (ctx->pc != 0x2B4DCCu) { return; }
    }
    ctx->pc = 0x2B4DCCu;
label_2b4dcc:
    // 0x2b4dcc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b4dccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4dd0: 0x14a0000c  bnez        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x2B4DD0u;
    {
        const bool branch_taken_0x2b4dd0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B4DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4DD0u;
            // 0x2b4dd4: 0x8fb10004  lw          $s1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4dd0) {
            ctx->pc = 0x2B4E04u;
            goto label_2b4e04;
        }
    }
    ctx->pc = 0x2B4DD8u;
    // 0x2b4dd8: 0xde620100  ld          $v0, 0x100($s3)
    ctx->pc = 0x2b4dd8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 256)));
    // 0x2b4ddc: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x2b4ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x2b4de0: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2B4DE0u;
    {
        const bool branch_taken_0x2b4de0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B4DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4DE0u;
            // 0x2b4de4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4de0) {
            ctx->pc = 0x2B4E7Cu;
            goto label_2b4e7c;
        }
    }
    ctx->pc = 0x2B4DE8u;
    // 0x2b4de8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2b4de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b4dec: 0xc0adb7e  jal         func_2B6DF8
    ctx->pc = 0x2B4DECu;
    SET_GPR_U32(ctx, 31, 0x2B4DF4u);
    ctx->pc = 0x2B4DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4DECu;
            // 0x2b4df0: 0x24060032  addiu       $a2, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6DF8u;
    if (runtime->hasFunction(0x2B6DF8u)) {
        auto targetFn = runtime->lookupFunction(0x2B6DF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4DF4u; }
        if (ctx->pc != 0x2B4DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B6DF8_0x2b6df8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4DF4u; }
        if (ctx->pc != 0x2B4DF4u) { return; }
    }
    ctx->pc = 0x2B4DF4u;
label_2b4df4:
    // 0x2b4df4: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b4df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b4df8: 0x24050087  addiu       $a1, $zero, 0x87
    ctx->pc = 0x2b4df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 135));
    // 0x2b4dfc: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2B4DFCu;
    {
        const bool branch_taken_0x2b4dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4DFCu;
            // 0x2b4e00: 0x2406080d  addiu       $a2, $zero, 0x80D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4dfc) {
            ctx->pc = 0x2B4E68u;
            goto label_2b4e68;
        }
    }
    ctx->pc = 0x2B4E04u;
label_2b4e04:
    // 0x2b4e04: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x2b4e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
    // 0x2b4e08: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2b4e08u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2b4e0c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2b4e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2b4e10: 0x1622000b  bne         $s1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2B4E10u;
    {
        const bool branch_taken_0x2b4e10 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B4E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4E10u;
            // 0x2b4e14: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4e10) {
            ctx->pc = 0x2B4E40u;
            goto label_2b4e40;
        }
    }
    ctx->pc = 0x2B4E18u;
    // 0x2b4e18: 0xc0af10e  jal         func_2BC438
    ctx->pc = 0x2B4E18u;
    SET_GPR_U32(ctx, 31, 0x2B4E20u);
    ctx->pc = 0x2B4E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4E18u;
            // 0x2b4e1c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC438u;
    if (runtime->hasFunction(0x2BC438u)) {
        auto targetFn = runtime->lookupFunction(0x2BC438u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4E20u; }
        if (ctx->pc != 0x2B4E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BC438_0x2bc438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4E20u; }
        if (ctx->pc != 0x2B4E20u) { return; }
    }
    ctx->pc = 0x2B4E20u;
label_2b4e20:
    // 0x2b4e20: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2B4E20u;
    {
        const bool branch_taken_0x2b4e20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4E20u;
            // 0x2b4e24: 0x66430002  daddiu      $v1, $s2, 0x2 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 18) + (int64_t)(int32_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4e20) {
            ctx->pc = 0x2B4E5Cu;
            goto label_2b4e5c;
        }
    }
    ctx->pc = 0x2B4E28u;
    // 0x2b4e28: 0x74902d  daddu       $s2, $v1, $s4
    ctx->pc = 0x2b4e28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 20));
    // 0x2b4e2c: 0x256102b  sltu        $v0, $s2, $s6
    ctx->pc = 0x2b4e2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x2b4e30: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x2B4E30u;
    {
        const bool branch_taken_0x2b4e30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B4E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4E30u;
            // 0x2b4e34: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4e30) {
            ctx->pc = 0x2B4D68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b4d68;
        }
    }
    ctx->pc = 0x2B4E38u;
    // 0x2b4e38: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2B4E38u;
    {
        const bool branch_taken_0x2b4e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4E38u;
            // 0x2b4e3c: 0x8e620054  lw          $v0, 0x54($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4e38) {
            ctx->pc = 0x2B4E88u;
            goto label_2b4e88;
        }
    }
    ctx->pc = 0x2B4E40u;
label_2b4e40:
    // 0x2b4e40: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2b4e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b4e44: 0xc0adb7e  jal         func_2B6DF8
    ctx->pc = 0x2B4E44u;
    SET_GPR_U32(ctx, 31, 0x2B4E4Cu);
    ctx->pc = 0x2B4E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4E44u;
            // 0x2b4e48: 0x24060032  addiu       $a2, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6DF8u;
    if (runtime->hasFunction(0x2B6DF8u)) {
        auto targetFn = runtime->lookupFunction(0x2B6DF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4E4Cu; }
        if (ctx->pc != 0x2B4E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B6DF8_0x2b6df8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4E4Cu; }
        if (ctx->pc != 0x2B4E4Cu) { return; }
    }
    ctx->pc = 0x2B4E4Cu;
label_2b4e4c:
    // 0x2b4e4c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b4e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b4e50: 0x24050087  addiu       $a1, $zero, 0x87
    ctx->pc = 0x2b4e50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 135));
    // 0x2b4e54: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2B4E54u;
    {
        const bool branch_taken_0x2b4e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4E54u;
            // 0x2b4e58: 0x24060083  addiu       $a2, $zero, 0x83 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4e54) {
            ctx->pc = 0x2B4E68u;
            goto label_2b4e68;
        }
    }
    ctx->pc = 0x2B4E5Cu;
label_2b4e5c:
    // 0x2b4e5c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b4e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b4e60: 0x24050087  addiu       $a1, $zero, 0x87
    ctx->pc = 0x2b4e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 135));
    // 0x2b4e64: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x2b4e64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_2b4e68:
    // 0x2b4e68: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b4e68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4e6c: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2B4E6Cu;
    SET_GPR_U32(ctx, 31, 0x2B4E74u);
    ctx->pc = 0x2B4E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4E6Cu;
            // 0x2b4e70: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4E74u; }
        if (ctx->pc != 0x2B4E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4E74u; }
        if (ctx->pc != 0x2B4E74u) { return; }
    }
    ctx->pc = 0x2B4E74u;
label_2b4e74:
    // 0x2b4e74: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2B4E74u;
    {
        const bool branch_taken_0x2b4e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b4e74) {
            ctx->pc = 0x2B4EC8u;
            goto label_2b4ec8;
        }
    }
    ctx->pc = 0x2B4E7Cu;
label_2b4e7c:
    // 0x2b4e7c: 0xc0a56b6  jal         func_295AD8
    ctx->pc = 0x2B4E7Cu;
    SET_GPR_U32(ctx, 31, 0x2B4E84u);
    ctx->pc = 0x295AD8u;
    if (runtime->hasFunction(0x295AD8u)) {
        auto targetFn = runtime->lookupFunction(0x295AD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4E84u; }
        if (ctx->pc != 0x2B4E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295AD8_0x295ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4E84u; }
        if (ctx->pc != 0x2B4E84u) { return; }
    }
    ctx->pc = 0x2B4E84u;
label_2b4e84:
    // 0x2b4e84: 0x8e620054  lw          $v0, 0x54($s3)
    ctx->pc = 0x2b4e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_2b4e88:
    // 0x2b4e88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b4e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b4e8c: 0xac43016c  sw          $v1, 0x16C($v0)
    ctx->pc = 0x2b4e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 364), GPR_U32(ctx, 3));
    // 0x2b4e90: 0x8e640054  lw          $a0, 0x54($s3)
    ctx->pc = 0x2b4e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x2b4e94: 0xac950170  sw          $s5, 0x170($a0)
    ctx->pc = 0x2b4e94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 368), GPR_U32(ctx, 21));
    // 0x2b4e98: 0x8e620054  lw          $v0, 0x54($s3)
    ctx->pc = 0x2b4e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x2b4e9c: 0x8c44017c  lw          $a0, 0x17C($v0)
    ctx->pc = 0x2b4e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 380)));
    // 0x2b4ea0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B4EA0u;
    {
        const bool branch_taken_0x2b4ea0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b4ea0) {
            ctx->pc = 0x2B4EA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4EA0u;
            // 0x2b4ea4: 0xac5e017c  sw          $fp, 0x17C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 380), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B4EBCu;
            goto label_2b4ebc;
        }
    }
    ctx->pc = 0x2B4EA8u;
    // 0x2b4ea8: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x2b4ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
    // 0x2b4eac: 0xc0af16c  jal         func_2BC5B0
    ctx->pc = 0x2B4EACu;
    SET_GPR_U32(ctx, 31, 0x2B4EB4u);
    ctx->pc = 0x2B4EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4EACu;
            // 0x2b4eb0: 0x24a5e950  addiu       $a1, $a1, -0x16B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961488));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC5B0u;
    if (runtime->hasFunction(0x2BC5B0u)) {
        auto targetFn = runtime->lookupFunction(0x2BC5B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4EB4u; }
        if (ctx->pc != 0x2B4EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BC5B0_0x2bc5b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4EB4u; }
        if (ctx->pc != 0x2B4EB4u) { return; }
    }
    ctx->pc = 0x2B4EB4u;
label_2b4eb4:
    // 0x2b4eb4: 0x8e620054  lw          $v0, 0x54($s3)
    ctx->pc = 0x2b4eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x2b4eb8: 0xac5e017c  sw          $fp, 0x17C($v0)
    ctx->pc = 0x2b4eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 380), GPR_U32(ctx, 30));
label_2b4ebc:
    // 0x2b4ebc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b4ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b4ec0: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2b4ec0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4ec4: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x2b4ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_2b4ec8:
    // 0x2b4ec8: 0x13c00004  beqz        $fp, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B4EC8u;
    {
        const bool branch_taken_0x2b4ec8 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4EC8u;
            // 0x2b4ecc: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4ec8) {
            ctx->pc = 0x2B4EDCu;
            goto label_2b4edc;
        }
    }
    ctx->pc = 0x2B4ED0u;
    // 0x2b4ed0: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x2b4ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
    // 0x2b4ed4: 0xc0af16c  jal         func_2BC5B0
    ctx->pc = 0x2B4ED4u;
    SET_GPR_U32(ctx, 31, 0x2B4EDCu);
    ctx->pc = 0x2B4ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4ED4u;
            // 0x2b4ed8: 0x24a5e950  addiu       $a1, $a1, -0x16B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961488));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC5B0u;
    if (runtime->hasFunction(0x2BC5B0u)) {
        auto targetFn = runtime->lookupFunction(0x2BC5B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4EDCu; }
        if (ctx->pc != 0x2B4EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BC5B0_0x2bc5b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4EDCu; }
        if (ctx->pc != 0x2B4EDCu) { return; }
    }
    ctx->pc = 0x2B4EDCu;
label_2b4edc:
    // 0x2b4edc: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x2b4edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2b4ee0:
    // 0x2b4ee0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2b4ee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2b4ee4:
    // 0x2b4ee4: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x2b4ee4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b4ee8: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x2b4ee8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2b4eec: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2b4eecu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b4ef0: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2b4ef0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b4ef4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2b4ef4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b4ef8: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2b4ef8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b4efc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2b4efcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b4f00: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2b4f00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b4f04: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2b4f04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b4f08: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4F08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4F08u;
            // 0x2b4f0c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B4F10u;
label_2b4f10:
    // 0x2b4f10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b4f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b4f14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b4f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b4f18: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2b4f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b4f1c: 0xc0a3a8a  jal         func_28EA28
    ctx->pc = 0x2B4F1Cu;
    SET_GPR_U32(ctx, 31, 0x2B4F24u);
    ctx->pc = 0x2B4F20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4F1Cu;
            // 0x2b4f20: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28EA28u;
    if (runtime->hasFunction(0x28EA28u)) {
        auto targetFn = runtime->lookupFunction(0x28EA28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4F24u; }
        if (ctx->pc != 0x2B4F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028EA28_0x28ea28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4F24u; }
        if (ctx->pc != 0x2B4F24u) { return; }
    }
    ctx->pc = 0x2B4F24u;
label_2b4f24:
    // 0x2b4f24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b4f24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b4f28: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4F28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4F28u;
            // 0x2b4f2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B4F30u;
    ctx->pc = 0x2b4f30u;
}
