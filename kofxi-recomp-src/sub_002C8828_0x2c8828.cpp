#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C8828
// Address: 0x2c8828 - 0x2c89a8
void sub_002C8828_0x2c8828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C8828_0x2c8828");
#endif

    switch (ctx->pc) {
        case 0x2c882cu: goto label_2c882c;
        case 0x2c8854u: goto label_2c8854;
        case 0x2c8890u: goto label_2c8890;
        case 0x2c88acu: goto label_2c88ac;
        case 0x2c88c8u: goto label_2c88c8;
        case 0x2c88f0u: goto label_2c88f0;
        case 0x2c8930u: goto label_2c8930;
        case 0x2c8940u: goto label_2c8940;
        case 0x2c8978u: goto label_2c8978;
        case 0x2c8998u: goto label_2c8998;
        case 0x2c89a0u: goto label_2c89a0;
        default: break;
    }

    ctx->pc = 0x2c8828u;

    // 0x2c8828: 0x1080005d  beqz        $a0, . + 4 + (0x5D << 2)
label_2c882c:
    if (ctx->pc == 0x2C882Cu) {
        ctx->pc = 0x2C882Cu;
            // 0x2c882c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C8830u;
        goto label_fallthrough_0x2c8828;
    }
    ctx->pc = 0x2C8828u;
    {
        const bool branch_taken_0x2c8828 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C882Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8828u;
            // 0x2c882c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8828) {
            ctx->pc = 0x2C89A0u;
            goto label_2c89a0;
        }
    }
label_fallthrough_0x2c8828:
    ctx->pc = 0x2C8830u;
    // 0x2c8830: 0x288201f6  slti        $v0, $a0, 0x1F6
    ctx->pc = 0x2c8830u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)502) ? 1 : 0);
    // 0x2c8834: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2C8834u;
    {
        const bool branch_taken_0x2c8834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8834u;
            // 0x2c8838: 0x240203ea  addiu       $v0, $zero, 0x3EA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1002));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8834) {
            ctx->pc = 0x2C88F0u;
            goto label_2c88f0;
        }
    }
    ctx->pc = 0x2C883Cu;
    // 0x2c883c: 0x288201f4  slti        $v0, $a0, 0x1F4
    ctx->pc = 0x2c883cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)500) ? 1 : 0);
    // 0x2c8840: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x2C8840u;
    {
        const bool branch_taken_0x2c8840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8840u;
            // 0x2c8844: 0x24030106  addiu       $v1, $zero, 0x106 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 262));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8840) {
            ctx->pc = 0x2C898Cu;
            goto label_2c898c;
        }
    }
    ctx->pc = 0x2C8848u;
    // 0x2c8848: 0x10830055  beq         $a0, $v1, . + 4 + (0x55 << 2)
    ctx->pc = 0x2C8848u;
    {
        const bool branch_taken_0x2c8848 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C884Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8848u;
            // 0x2c884c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8848) {
            ctx->pc = 0x2C89A0u;
            goto label_2c89a0;
        }
    }
    ctx->pc = 0x2C8850u;
    // 0x2c8850: 0x28820107  slti        $v0, $a0, 0x107
    ctx->pc = 0x2c8850u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)263) ? 1 : 0);
label_2c8854:
    // 0x2c8854: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2C8854u;
    {
        const bool branch_taken_0x2c8854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8854u;
            // 0x2c8858: 0x24030109  addiu       $v1, $zero, 0x109 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 265));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8854) {
            ctx->pc = 0x2C8890u;
            goto label_2c8890;
        }
    }
    ctx->pc = 0x2C885Cu;
    // 0x2c885c: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x2c885cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2c8860: 0x1083004f  beq         $a0, $v1, . + 4 + (0x4F << 2)
    ctx->pc = 0x2C8860u;
    {
        const bool branch_taken_0x2c8860 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C8864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8860u;
            // 0x2c8864: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8860) {
            ctx->pc = 0x2C89A0u;
            goto label_2c89a0;
        }
    }
    ctx->pc = 0x2C8868u;
    // 0x2c8868: 0x28820101  slti        $v0, $a0, 0x101
    ctx->pc = 0x2c8868u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)257) ? 1 : 0);
    // 0x2c886c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C886Cu;
    {
        const bool branch_taken_0x2c886c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c886c) {
            ctx->pc = 0x2C8888u;
            goto label_2c8888;
        }
    }
    ctx->pc = 0x2C8874u;
    // 0x2c8874: 0x28820066  slti        $v0, $a0, 0x66
    ctx->pc = 0x2c8874u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)102) ? 1 : 0);
    // 0x2c8878: 0x50400049  beql        $v0, $zero, . + 4 + (0x49 << 2)
    ctx->pc = 0x2C8878u;
    {
        const bool branch_taken_0x2c8878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8878) {
            ctx->pc = 0x2C887Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8878u;
            // 0x2c887c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C89A0u;
            goto label_2c89a0;
        }
    }
    ctx->pc = 0x2C8880u;
    // 0x2c8880: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x2C8880u;
    {
        const bool branch_taken_0x2c8880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8880u;
            // 0x2c8884: 0x28820064  slti        $v0, $a0, 0x64 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)100) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8880) {
            ctx->pc = 0x2C8984u;
            goto label_2c8984;
        }
    }
    ctx->pc = 0x2C8888u;
label_2c8888:
    // 0x2c8888: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8888u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C888Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8888u;
            // 0x2c888c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C8890u;
label_2c8890:
    // 0x2c8890: 0x10830043  beq         $a0, $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x2C8890u;
    {
        const bool branch_taken_0x2c8890 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C8894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8890u;
            // 0x2c8894: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8890) {
            ctx->pc = 0x2C89A0u;
            goto label_2c89a0;
        }
    }
    ctx->pc = 0x2C8898u;
    // 0x2c8898: 0x2882010a  slti        $v0, $a0, 0x10A
    ctx->pc = 0x2c8898u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)266) ? 1 : 0);
    // 0x2c889c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C889Cu;
    {
        const bool branch_taken_0x2c889c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C88A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C889Cu;
            // 0x2c88a0: 0x2403010b  addiu       $v1, $zero, 0x10B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 267));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c889c) {
            ctx->pc = 0x2C88C8u;
            goto label_2c88c8;
        }
    }
    ctx->pc = 0x2C88A4u;
    // 0x2c88a4: 0x24030107  addiu       $v1, $zero, 0x107
    ctx->pc = 0x2c88a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 263));
    // 0x2c88a8: 0x1083003d  beq         $a0, $v1, . + 4 + (0x3D << 2)
label_2c88ac:
    if (ctx->pc == 0x2C88ACu) {
        ctx->pc = 0x2C88ACu;
            // 0x2c88ac: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x2C88B0u;
        goto label_fallthrough_0x2c88a8;
    }
    ctx->pc = 0x2C88A8u;
    {
        const bool branch_taken_0x2c88a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C88ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C88A8u;
            // 0x2c88ac: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c88a8) {
            ctx->pc = 0x2C89A0u;
            goto label_2c89a0;
        }
    }
label_fallthrough_0x2c88a8:
    ctx->pc = 0x2C88B0u;
    // 0x2c88b0: 0x24030108  addiu       $v1, $zero, 0x108
    ctx->pc = 0x2c88b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 264));
    // 0x2c88b4: 0x1083003a  beq         $a0, $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x2C88B4u;
    {
        const bool branch_taken_0x2c88b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C88B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C88B4u;
            // 0x2c88b8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c88b4) {
            ctx->pc = 0x2C89A0u;
            goto label_2c89a0;
        }
    }
    ctx->pc = 0x2C88BCu;
    // 0x2c88bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2C88BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C88C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C88BCu;
            // 0x2c88c0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C88C4u;
    // 0x2c88c4: 0x0  nop
    ctx->pc = 0x2c88c4u;
    // NOP
label_2c88c8:
    // 0x2c88c8: 0x10830035  beq         $a0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x2C88C8u;
    {
        const bool branch_taken_0x2c88c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C88CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C88C8u;
            // 0x2c88cc: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c88c8) {
            ctx->pc = 0x2C89A0u;
            goto label_2c89a0;
        }
    }
    ctx->pc = 0x2C88D0u;
    // 0x2c88d0: 0x2883010b  slti        $v1, $a0, 0x10B
    ctx->pc = 0x2c88d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)267) ? 1 : 0);
    // 0x2c88d4: 0x14600032  bnez        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x2C88D4u;
    {
        const bool branch_taken_0x2c88d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C88D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C88D4u;
            // 0x2c88d8: 0x2403010c  addiu       $v1, $zero, 0x10C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c88d4) {
            ctx->pc = 0x2C89A0u;
            goto label_2c89a0;
        }
    }
    ctx->pc = 0x2C88DCu;
    // 0x2c88dc: 0x10830030  beq         $a0, $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x2C88DCu;
    {
        const bool branch_taken_0x2c88dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C88E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C88DCu;
            // 0x2c88e0: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c88dc) {
            ctx->pc = 0x2C89A0u;
            goto label_2c89a0;
        }
    }
    ctx->pc = 0x2C88E4u;
    // 0x2c88e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C88E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C88E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C88E4u;
            // 0x2c88e8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C88ECu;
    // 0x2c88ec: 0x0  nop
    ctx->pc = 0x2c88ecu;
    // NOP
label_2c88f0:
    // 0x2c88f0: 0x10820026  beq         $a0, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2C88F0u;
    {
        const bool branch_taken_0x2c88f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c88f0) {
            ctx->pc = 0x2C898Cu;
            goto label_2c898c;
        }
    }
    ctx->pc = 0x2C88F8u;
    // 0x2c88f8: 0x288203eb  slti        $v0, $a0, 0x3EB
    ctx->pc = 0x2c88f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1003) ? 1 : 0);
    // 0x2c88fc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2C88FCu;
    {
        const bool branch_taken_0x2c88fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C88FCu;
            // 0x2c8900: 0x288203f5  slti        $v0, $a0, 0x3F5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1013) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c88fc) {
            ctx->pc = 0x2C8940u;
            goto label_2c8940;
        }
    }
    ctx->pc = 0x2C8904u;
    // 0x2c8904: 0x240201f9  addiu       $v0, $zero, 0x1F9
    ctx->pc = 0x2c8904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 505));
    // 0x2c8908: 0x10820023  beq         $a0, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2C8908u;
    {
        const bool branch_taken_0x2c8908 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c8908) {
            ctx->pc = 0x2C8998u;
            goto label_2c8998;
        }
    }
    ctx->pc = 0x2C8910u;
    // 0x2c8910: 0x288201fa  slti        $v0, $a0, 0x1FA
    ctx->pc = 0x2c8910u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)506) ? 1 : 0);
    // 0x2c8914: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C8914u;
    {
        const bool branch_taken_0x2c8914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8914) {
            ctx->pc = 0x2C8918u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8914u;
            // 0x2c8918: 0x240201fb  addiu       $v0, $zero, 0x1FB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 507));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C8928u;
            goto label_2c8928;
        }
    }
    ctx->pc = 0x2C891Cu;
    // 0x2c891c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2C891Cu;
    {
        const bool branch_taken_0x2c891c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C891Cu;
            // 0x2c8920: 0x288201f7  slti        $v0, $a0, 0x1F7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)503) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c891c) {
            ctx->pc = 0x2C8984u;
            goto label_2c8984;
        }
    }
    ctx->pc = 0x2C8924u;
    // 0x2c8924: 0x0  nop
    ctx->pc = 0x2c8924u;
    // NOP
label_2c8928:
    // 0x2c8928: 0x10820018  beq         $a0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2C8928u;
    {
        const bool branch_taken_0x2c8928 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C892Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8928u;
            // 0x2c892c: 0x240303e9  addiu       $v1, $zero, 0x3E9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8928) {
            ctx->pc = 0x2C898Cu;
            goto label_2c898c;
        }
    }
    ctx->pc = 0x2C8930u;
label_2c8930:
    // 0x2c8930: 0x1083001b  beq         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x2C8930u;
    {
        const bool branch_taken_0x2c8930 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C8934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8930u;
            // 0x2c8934: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8930) {
            ctx->pc = 0x2C89A0u;
            goto label_2c89a0;
        }
    }
    ctx->pc = 0x2C8938u;
    // 0x2c8938: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8938u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C893Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8938u;
            // 0x2c893c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C8940u;
label_2c8940:
    // 0x2c8940: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2C8940u;
    {
        const bool branch_taken_0x2c8940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8940u;
            // 0x2c8944: 0x288204b4  slti        $v0, $a0, 0x4B4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1204) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8940) {
            ctx->pc = 0x2C8978u;
            goto label_2c8978;
        }
    }
    ctx->pc = 0x2C8948u;
    // 0x2c8948: 0x288203f1  slti        $v0, $a0, 0x3F1
    ctx->pc = 0x2c8948u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1009) ? 1 : 0);
    // 0x2c894c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2C894Cu;
    {
        const bool branch_taken_0x2c894c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c894c) {
            ctx->pc = 0x2C898Cu;
            goto label_2c898c;
        }
    }
    ctx->pc = 0x2C8954u;
    // 0x2c8954: 0x240203ef  addiu       $v0, $zero, 0x3EF
    ctx->pc = 0x2c8954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1007));
    // 0x2c8958: 0x1082000c  beq         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2C8958u;
    {
        const bool branch_taken_0x2c8958 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c8958) {
            ctx->pc = 0x2C898Cu;
            goto label_2c898c;
        }
    }
    ctx->pc = 0x2C8960u;
    // 0x2c8960: 0x240203f0  addiu       $v0, $zero, 0x3F0
    ctx->pc = 0x2c8960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1008));
    // 0x2c8964: 0x1082000c  beq         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2C8964u;
    {
        const bool branch_taken_0x2c8964 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c8964) {
            ctx->pc = 0x2C8998u;
            goto label_2c8998;
        }
    }
    ctx->pc = 0x2C896Cu;
    // 0x2c896c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C896Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C896Cu;
            // 0x2c8970: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C8974u;
    // 0x2c8974: 0x0  nop
    ctx->pc = 0x2c8974u;
    // NOP
label_2c8978:
    // 0x2c8978: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C8978u;
    {
        const bool branch_taken_0x2c8978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C897Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8978u;
            // 0x2c897c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8978) {
            ctx->pc = 0x2C89A0u;
            goto label_2c89a0;
        }
    }
    ctx->pc = 0x2C8980u;
    // 0x2c8980: 0x288204b1  slti        $v0, $a0, 0x4B1
    ctx->pc = 0x2c8980u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1201) ? 1 : 0);
label_2c8984:
    // 0x2c8984: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C8984u;
    {
        const bool branch_taken_0x2c8984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8984) {
            ctx->pc = 0x2C8988u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8984u;
            // 0x2c8988: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C89A0u;
            goto label_2c89a0;
        }
    }
    ctx->pc = 0x2C898Cu;
label_2c898c:
    // 0x2c898c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C898Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C898Cu;
            // 0x2c8990: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C8994u;
    // 0x2c8994: 0x0  nop
    ctx->pc = 0x2c8994u;
    // NOP
label_2c8998:
    // 0x2c8998: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8998u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C899Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8998u;
            // 0x2c899c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C89A0u;
label_2c89a0:
    // 0x2c89a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C89A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C89A8u;
    ctx->pc = 0x2c89a8u;
}
