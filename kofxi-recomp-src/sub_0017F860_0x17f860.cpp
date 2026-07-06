#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017F860
// Address: 0x17f860 - 0x17fba0
void sub_0017F860_0x17f860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F860_0x17f860");
#endif

    switch (ctx->pc) {
        case 0x17f8bcu: goto label_17f8bc;
        case 0x17f8d0u: goto label_17f8d0;
        case 0x17f900u: goto label_17f900;
        case 0x17fa60u: goto label_17fa60;
        case 0x17fa78u: goto label_17fa78;
        case 0x17faccu: goto label_17facc;
        case 0x17fb18u: goto label_17fb18;
        case 0x17fb64u: goto label_17fb64;
        case 0x17fb84u: goto label_17fb84;
        case 0x17fb90u: goto label_17fb90;
        default: break;
    }

    ctx->pc = 0x17f860u;

label_17f860:
    // 0x17f860: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17f860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17f864: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17f864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17f868: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x17f868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x17f86c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17f86cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17f870: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17f870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17f874: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x17f874u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f878: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17f878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17f87c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x17f87cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f880: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17f880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17f884: 0x9063b858  lbu         $v1, -0x47A8($v1)
    ctx->pc = 0x17f884u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294948952)));
    // 0x17f888: 0x28610020  slti        $at, $v1, 0x20
    ctx->pc = 0x17f888u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x17f88c: 0x1020006b  beqz        $at, . + 4 + (0x6B << 2)
    ctx->pc = 0x17F88Cu;
    {
        const bool branch_taken_0x17f88c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F88Cu;
            // 0x17f890: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f88c) {
            ctx->pc = 0x17FA3Cu;
            goto label_17fa3c;
        }
    }
    ctx->pc = 0x17F894u;
    // 0x17f894: 0x8e700518  lw          $s0, 0x518($s3)
    ctx->pc = 0x17f894u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1304)));
    // 0x17f898: 0x52000011  beql        $s0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x17F898u;
    {
        const bool branch_taken_0x17f898 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f898) {
            ctx->pc = 0x17F89Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17F898u;
            // 0x17f89c: 0x8e63051c  lw          $v1, 0x51C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1308)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17F8E0u;
            goto label_17f8e0;
        }
    }
    ctx->pc = 0x17F8A0u;
    // 0x17f8a0: 0x8e0400dc  lw          $a0, 0xDC($s0)
    ctx->pc = 0x17f8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x17f8a4: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x17f8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x17f8a8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x17f8a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x17f8ac: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x17F8ACu;
    {
        const bool branch_taken_0x17f8ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f8ac) {
            ctx->pc = 0x17F8B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17F8ACu;
            // 0x17f8b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17F8C8u;
            goto label_17f8c8;
        }
    }
    ctx->pc = 0x17F8B4u;
    // 0x17f8b4: 0xc0627f8  jal         func_189FE0
    ctx->pc = 0x17F8B4u;
    SET_GPR_U32(ctx, 31, 0x17F8BCu);
    ctx->pc = 0x189FE0u;
    if (runtime->hasFunction(0x189FE0u)) {
        auto targetFn = runtime->lookupFunction(0x189FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F8BCu; }
        if (ctx->pc != 0x17F8BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189FE0_0x189fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F8BCu; }
        if (ctx->pc != 0x17F8BCu) { return; }
    }
    ctx->pc = 0x17F8BCu;
label_17f8bc:
    // 0x17f8bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17f8bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f8c0: 0xae700518  sw          $s0, 0x518($s3)
    ctx->pc = 0x17f8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1304), GPR_U32(ctx, 16));
    // 0x17f8c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17f8c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17f8c8:
    // 0x17f8c8: 0xc05fdcc  jal         func_17F730
    ctx->pc = 0x17F8C8u;
    SET_GPR_U32(ctx, 31, 0x17F8D0u);
    ctx->pc = 0x17F730u;
    if (runtime->hasFunction(0x17F730u)) {
        auto targetFn = runtime->lookupFunction(0x17F730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F8D0u; }
        if (ctx->pc != 0x17F8D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017F730_0x17f730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F8D0u; }
        if (ctx->pc != 0x17F8D0u) { return; }
    }
    ctx->pc = 0x17F8D0u;
label_17f8d0:
    // 0x17f8d0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x17F8D0u;
    {
        const bool branch_taken_0x17f8d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f8d0) {
            ctx->pc = 0x17F8DCu;
            goto label_17f8dc;
        }
    }
    ctx->pc = 0x17F8D8u;
    // 0x17f8d8: 0xae600518  sw          $zero, 0x518($s3)
    ctx->pc = 0x17f8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1304), GPR_U32(ctx, 0));
label_17f8dc:
    // 0x17f8dc: 0x8e63051c  lw          $v1, 0x51C($s3)
    ctx->pc = 0x17f8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1308)));
label_17f8e0:
    // 0x17f8e0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x17F8E0u;
    {
        const bool branch_taken_0x17f8e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f8e0) {
            ctx->pc = 0x17F8E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17F8E0u;
            // 0x17f8e4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17F8E8u;
            goto label_17f8e8;
        }
    }
    ctx->pc = 0x17F8E8u;
label_17f8e8:
    // 0x17f8e8: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x17f8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x17f8ec: 0x9086b858  lbu         $a2, -0x47A8($a0)
    ctx->pc = 0x17f8ecu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294948952)));
    // 0x17f8f0: 0x18c00013  blez        $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x17F8F0u;
    {
        const bool branch_taken_0x17f8f0 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x17F8F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F8F0u;
            // 0x17f8f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f8f0) {
            ctx->pc = 0x17F940u;
            goto label_17f940;
        }
    }
    ctx->pc = 0x17F8F8u;
    // 0x17f8f8: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x17f8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x17f8fc: 0x24a5b860  addiu       $a1, $a1, -0x47A0
    ctx->pc = 0x17f8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948960));
label_17f900:
    // 0x17f900: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x17f900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x17f904: 0x5493000b  bnel        $a0, $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x17F904u;
    {
        const bool branch_taken_0x17f904 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 19));
        if (branch_taken_0x17f904) {
            ctx->pc = 0x17F908u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17F904u;
            // 0x17f908: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17F934u;
            goto label_17f934;
        }
    }
    ctx->pc = 0x17F90Cu;
    // 0x17f90c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x17f90cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17f910: 0x14900007  bne         $a0, $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x17F910u;
    {
        const bool branch_taken_0x17f910 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 16));
        if (branch_taken_0x17f910) {
            ctx->pc = 0x17F930u;
            goto label_17f930;
        }
    }
    ctx->pc = 0x17F918u;
    // 0x17f918: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x17f918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x17f91c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17F91Cu;
    {
        const bool branch_taken_0x17f91c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x17f91c) {
            ctx->pc = 0x17F930u;
            goto label_17f930;
        }
    }
    ctx->pc = 0x17F924u;
    // 0x17f924: 0x78e3c  dsll32      $s1, $a3, 24
    ctx->pc = 0x17f924u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 7) << (32 + 24));
    // 0x17f928: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x17F928u;
    {
        const bool branch_taken_0x17f928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F92Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F928u;
            // 0x17f92c: 0x118e3f  dsra32      $s1, $s1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f928) {
            ctx->pc = 0x17F940u;
            goto label_17f940;
        }
    }
    ctx->pc = 0x17F930u;
label_17f930:
    // 0x17f930: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x17f930u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_17f934:
    // 0x17f934: 0xe6202a  slt         $a0, $a3, $a2
    ctx->pc = 0x17f934u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x17f938: 0x1480fff1  bnez        $a0, . + 4 + (-0xF << 2)
    ctx->pc = 0x17F938u;
    {
        const bool branch_taken_0x17f938 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F93Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F938u;
            // 0x17f93c: 0x24a50018  addiu       $a1, $a1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f938) {
            ctx->pc = 0x17F900u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17f900;
        }
    }
    ctx->pc = 0x17F940u;
label_17f940:
    // 0x17f940: 0x112e3c  dsll32      $a1, $s1, 24
    ctx->pc = 0x17f940u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 24));
    // 0x17f944: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x17f944u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x17f948: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x17f948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17f94c: 0x54a40028  bnel        $a1, $a0, . + 4 + (0x28 << 2)
    ctx->pc = 0x17F94Cu;
    {
        const bool branch_taken_0x17f94c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x17f94c) {
            ctx->pc = 0x17F950u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17F94Cu;
            // 0x17f950: 0x3243ffff  andi        $v1, $s2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
            ctx->pc = 0x17F9F0u;
            goto label_17f9f0;
        }
    }
    ctx->pc = 0x17F954u;
    // 0x17f954: 0x30c700ff  andi        $a3, $a2, 0xFF
    ctx->pc = 0x17f954u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x17f958: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x17f958u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x17f95c: 0x72040  sll         $a0, $a3, 1
    ctx->pc = 0x17f95cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x17f960: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x17f960u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x17f964: 0x873821  addu        $a3, $a0, $a3
    ctx->pc = 0x17f964u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x17f968: 0x24c6b860  addiu       $a2, $a2, -0x47A0
    ctx->pc = 0x17f968u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948960));
    // 0x17f96c: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x17f96cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x17f970: 0x24a5b864  addiu       $a1, $a1, -0x479C
    ctx->pc = 0x17f970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948964));
    // 0x17f974: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x17f974u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x17f978: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x17f978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x17f97c: 0x2484b868  addiu       $a0, $a0, -0x4798
    ctx->pc = 0x17f97cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948968));
    // 0x17f980: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x17f980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x17f984: 0xacd00000  sw          $s0, 0x0($a2)
    ctx->pc = 0x17f984u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 16));
    // 0x17f988: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x17f988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x17f98c: 0xacb30000  sw          $s3, 0x0($a1)
    ctx->pc = 0x17f98cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 19));
    // 0x17f990: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17F990u;
    {
        const bool branch_taken_0x17f990 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F990u;
            // 0x17f994: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f990) {
            ctx->pc = 0x17F9ACu;
            goto label_17f9ac;
        }
    }
    ctx->pc = 0x17F998u;
    // 0x17f998: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x17f998u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x17f99c: 0x8e0500dc  lw          $a1, 0xDC($s0)
    ctx->pc = 0x17f99cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x17f9a0: 0x2484b86c  addiu       $a0, $a0, -0x4794
    ctx->pc = 0x17f9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948972));
    // 0x17f9a4: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x17f9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x17f9a8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x17f9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_17f9ac:
    // 0x17f9ac: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17F9ACu;
    {
        const bool branch_taken_0x17f9ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f9ac) {
            ctx->pc = 0x17F9C8u;
            goto label_17f9c8;
        }
    }
    ctx->pc = 0x17F9B4u;
    // 0x17f9b4: 0x8c6400dc  lw          $a0, 0xDC($v1)
    ctx->pc = 0x17f9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 220)));
    // 0x17f9b8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17f9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17f9bc: 0x2463b870  addiu       $v1, $v1, -0x4790
    ctx->pc = 0x17f9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948976));
    // 0x17f9c0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x17f9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x17f9c4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x17f9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_17f9c8:
    // 0x17f9c8: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x17f9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x17f9cc: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17f9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17f9d0: 0x2484b874  addiu       $a0, $a0, -0x478C
    ctx->pc = 0x17f9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948980));
    // 0x17f9d4: 0x872821  addu        $a1, $a0, $a3
    ctx->pc = 0x17f9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x17f9d8: 0x9064b858  lbu         $a0, -0x47A8($v1)
    ctx->pc = 0x17f9d8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294948952)));
    // 0x17f9dc: 0xa4b20000  sh          $s2, 0x0($a1)
    ctx->pc = 0x17f9dcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 18));
    // 0x17f9e0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17f9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17f9e4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x17f9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x17f9e8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x17F9E8u;
    {
        const bool branch_taken_0x17f9e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F9ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F9E8u;
            // 0x17f9ec: 0xa064b858  sb          $a0, -0x47A8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294948952), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f9e8) {
            ctx->pc = 0x17FA3Cu;
            goto label_17fa3c;
        }
    }
    ctx->pc = 0x17F9F0u;
label_17f9f0:
    // 0x17f9f0: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x17f9f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x17f9f4: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x17F9F4u;
    {
        const bool branch_taken_0x17f9f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f9f4) {
            ctx->pc = 0x17F9F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17F9F4u;
            // 0x17f9f8: 0x52040  sll         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17FA1Cu;
            goto label_17fa1c;
        }
    }
    ctx->pc = 0x17F9FCu;
    // 0x17f9fc: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x17f9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x17fa00: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17fa00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17fa04: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x17fa04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x17fa08: 0x2463b874  addiu       $v1, $v1, -0x478C
    ctx->pc = 0x17fa08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948980));
    // 0x17fa0c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x17fa0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x17fa10: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17fa10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17fa14: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x17FA14u;
    {
        const bool branch_taken_0x17fa14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FA18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FA14u;
            // 0x17fa18: 0xa4720000  sh          $s2, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fa14) {
            ctx->pc = 0x17FA3Cu;
            goto label_17fa3c;
        }
    }
    ctx->pc = 0x17FA1Cu;
label_17fa1c:
    // 0x17fa1c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17fa1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17fa20: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x17fa20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x17fa24: 0x2463b874  addiu       $v1, $v1, -0x478C
    ctx->pc = 0x17fa24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948980));
    // 0x17fa28: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x17fa28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x17fa2c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x17fa2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17fa30: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x17fa30u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17fa34: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x17fa34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x17fa38: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x17fa38u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
label_17fa3c:
    // 0x17fa3c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x17fa3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17fa40: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17fa40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17fa44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17fa44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17fa48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17fa48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17fa4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17fa4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17fa50: 0x3e00008  jr          $ra
    ctx->pc = 0x17FA50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17FA54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FA50u;
            // 0x17fa54: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17FA58u;
    // 0x17fa58: 0x0  nop
    ctx->pc = 0x17fa58u;
    // NOP
    // 0x17fa5c: 0x0  nop
    ctx->pc = 0x17fa5cu;
    // NOP
label_17fa60:
    // 0x17fa60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17fa60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17fa64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17fa64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17fa68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17fa68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17fa6c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x17fa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x17fa70: 0xc0627c8  jal         func_189F20
    ctx->pc = 0x17FA70u;
    SET_GPR_U32(ctx, 31, 0x17FA78u);
    ctx->pc = 0x17FA74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FA70u;
            // 0x17fa74: 0x8c4400dc  lw          $a0, 0xDC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x189F20u;
    if (runtime->hasFunction(0x189F20u)) {
        auto targetFn = runtime->lookupFunction(0x189F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FA78u; }
        if (ctx->pc != 0x17FA78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189F20_0x189f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FA78u; }
        if (ctx->pc != 0x17FA78u) { return; }
    }
    ctx->pc = 0x17FA78u;
label_17fa78:
    // 0x17fa78: 0x8c500010  lw          $s0, 0x10($v0)
    ctx->pc = 0x17fa78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x17fa7c: 0x8202057e  lb          $v0, 0x57E($s0)
    ctx->pc = 0x17fa7cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1406)));
    // 0x17fa80: 0x58400010  blezl       $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x17FA80u;
    {
        const bool branch_taken_0x17fa80 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x17fa80) {
            ctx->pc = 0x17FA84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17FA80u;
            // 0x17fa84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17FAC4u;
            goto label_17fac4;
        }
    }
    ctx->pc = 0x17FA88u;
    // 0x17fa88: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17fa88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17fa8c: 0xa202057e  sb          $v0, 0x57E($s0)
    ctx->pc = 0x17fa8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1406), (uint8_t)GPR_U32(ctx, 2));
    // 0x17fa90: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x17fa90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x17fa94: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x17fa94u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x17fa98: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17FA98u;
    {
        const bool branch_taken_0x17fa98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17fa98) {
            ctx->pc = 0x17FAC0u;
            goto label_17fac0;
        }
    }
    ctx->pc = 0x17FAA0u;
    // 0x17faa0: 0x8e030270  lw          $v1, 0x270($s0)
    ctx->pc = 0x17faa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
    // 0x17faa4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x17faa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17faa8: 0x34630600  ori         $v1, $v1, 0x600
    ctx->pc = 0x17faa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1536);
    // 0x17faac: 0xae030270  sw          $v1, 0x270($s0)
    ctx->pc = 0x17faacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 3));
    // 0x17fab0: 0xa202057e  sb          $v0, 0x57E($s0)
    ctx->pc = 0x17fab0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1406), (uint8_t)GPR_U32(ctx, 2));
    // 0x17fab4: 0x96020534  lhu         $v0, 0x534($s0)
    ctx->pc = 0x17fab4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1332)));
    // 0x17fab8: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x17fab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x17fabc: 0xa6020534  sh          $v0, 0x534($s0)
    ctx->pc = 0x17fabcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1332), (uint16_t)GPR_U32(ctx, 2));
label_17fac0:
    // 0x17fac0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17fac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17fac4:
    // 0x17fac4: 0xc061b9c  jal         func_186E70
    ctx->pc = 0x17FAC4u;
    SET_GPR_U32(ctx, 31, 0x17FACCu);
    ctx->pc = 0x186E70u;
    if (runtime->hasFunction(0x186E70u)) {
        auto targetFn = runtime->lookupFunction(0x186E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FACCu; }
        if (ctx->pc != 0x17FACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00186E70_0x186e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FACCu; }
        if (ctx->pc != 0x17FACCu) { return; }
    }
    ctx->pc = 0x17FACCu;
label_17facc:
    // 0x17facc: 0x8202057d  lb          $v0, 0x57D($s0)
    ctx->pc = 0x17faccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1405)));
    // 0x17fad0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17fad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17fad4: 0xa202057d  sb          $v0, 0x57D($s0)
    ctx->pc = 0x17fad4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1405), (uint8_t)GPR_U32(ctx, 2));
    // 0x17fad8: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x17fad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x17fadc: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x17fadcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x17fae0: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x17FAE0u;
    {
        const bool branch_taken_0x17fae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17fae0) {
            ctx->pc = 0x17FAE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17FAE0u;
            // 0x17fae4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17FB5Cu;
            goto label_17fb5c;
        }
    }
    ctx->pc = 0x17FAE8u;
    // 0x17fae8: 0x96030534  lhu         $v1, 0x534($s0)
    ctx->pc = 0x17fae8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1332)));
    // 0x17faec: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x17faecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x17faf0: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x17FAF0u;
    {
        const bool branch_taken_0x17faf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17faf0) {
            ctx->pc = 0x17FAF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17FAF0u;
            // 0x17faf4: 0x8e020494  lw          $v0, 0x494($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1172)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17FB1Cu;
            goto label_17fb1c;
        }
    }
    ctx->pc = 0x17FAF8u;
    // 0x17faf8: 0x3062ffbf  andi        $v0, $v1, 0xFFBF
    ctx->pc = 0x17faf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65471);
    // 0x17fafc: 0xa6020534  sh          $v0, 0x534($s0)
    ctx->pc = 0x17fafcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1332), (uint16_t)GPR_U32(ctx, 2));
    // 0x17fb00: 0x96020534  lhu         $v0, 0x534($s0)
    ctx->pc = 0x17fb00u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1332)));
    // 0x17fb04: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x17fb04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x17fb08: 0xa6020534  sh          $v0, 0x534($s0)
    ctx->pc = 0x17fb08u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1332), (uint16_t)GPR_U32(ctx, 2));
    // 0x17fb0c: 0x96050534  lhu         $a1, 0x534($s0)
    ctx->pc = 0x17fb0cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1332)));
    // 0x17fb10: 0xc05fe18  jal         func_17F860
    ctx->pc = 0x17FB10u;
    SET_GPR_U32(ctx, 31, 0x17FB18u);
    ctx->pc = 0x17FB14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FB10u;
            // 0x17fb14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F860u;
    goto label_17f860;
    ctx->pc = 0x17FB18u;
label_17fb18:
    // 0x17fb18: 0x8e020494  lw          $v0, 0x494($s0)
    ctx->pc = 0x17fb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1172)));
label_17fb1c:
    // 0x17fb1c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x17fb1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x17fb20: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x17FB20u;
    {
        const bool branch_taken_0x17fb20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17fb20) {
            ctx->pc = 0x17FB24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17FB20u;
            // 0x17fb24: 0x8e020494  lw          $v0, 0x494($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1172)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17FB3Cu;
            goto label_17fb3c;
        }
    }
    ctx->pc = 0x17FB28u;
    // 0x17fb28: 0x8e030530  lw          $v1, 0x530($s0)
    ctx->pc = 0x17fb28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1328)));
    // 0x17fb2c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x17fb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x17fb30: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x17fb30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x17fb34: 0xae020530  sw          $v0, 0x530($s0)
    ctx->pc = 0x17fb34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1328), GPR_U32(ctx, 2));
    // 0x17fb38: 0x8e020494  lw          $v0, 0x494($s0)
    ctx->pc = 0x17fb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1172)));
label_17fb3c:
    // 0x17fb3c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x17fb3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x17fb40: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x17FB40u;
    {
        const bool branch_taken_0x17fb40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17fb40) {
            ctx->pc = 0x17FB44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17FB40u;
            // 0x17fb44: 0x9202057f  lbu         $v0, 0x57F($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1407)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17FB54u;
            goto label_17fb54;
        }
    }
    ctx->pc = 0x17FB48u;
    // 0x17fb48: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x17fb48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17fb4c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17FB4Cu;
    {
        const bool branch_taken_0x17fb4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FB50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FB4Cu;
            // 0x17fb50: 0xa20200f6  sb          $v0, 0xF6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 246), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fb4c) {
            ctx->pc = 0x17FB58u;
            goto label_17fb58;
        }
    }
    ctx->pc = 0x17FB54u;
label_17fb54:
    // 0x17fb54: 0xa20200f6  sb          $v0, 0xF6($s0)
    ctx->pc = 0x17fb54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 246), (uint8_t)GPR_U32(ctx, 2));
label_17fb58:
    // 0x17fb58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17fb58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17fb5c:
    // 0x17fb5c: 0xc062bbc  jal         func_18AEF0
    ctx->pc = 0x17FB5Cu;
    SET_GPR_U32(ctx, 31, 0x17FB64u);
    ctx->pc = 0x18AEF0u;
    if (runtime->hasFunction(0x18AEF0u)) {
        auto targetFn = runtime->lookupFunction(0x18AEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FB64u; }
        if (ctx->pc != 0x17FB64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018AEF0_0x18aef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FB64u; }
        if (ctx->pc != 0x17FB64u) { return; }
    }
    ctx->pc = 0x17FB64u;
label_17fb64:
    // 0x17fb64: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x17fb64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x17fb68: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x17fb68u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x17fb6c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x17fb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17fb70: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17FB70u;
    {
        const bool branch_taken_0x17fb70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17fb70) {
            ctx->pc = 0x17FB74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17FB70u;
            // 0x17fb74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17FB88u;
            goto label_17fb88;
        }
    }
    ctx->pc = 0x17FB78u;
    // 0x17fb78: 0xa60300f0  sh          $v1, 0xF0($s0)
    ctx->pc = 0x17fb78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 240), (uint16_t)GPR_U32(ctx, 3));
    // 0x17fb7c: 0xc05aafc  jal         func_16ABF0
    ctx->pc = 0x17FB7Cu;
    SET_GPR_U32(ctx, 31, 0x17FB84u);
    ctx->pc = 0x17FB80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FB7Cu;
            // 0x17fb80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16ABF0u;
    if (runtime->hasFunction(0x16ABF0u)) {
        auto targetFn = runtime->lookupFunction(0x16ABF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FB84u; }
        if (ctx->pc != 0x17FB84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016ABF0_0x16abf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FB84u; }
        if (ctx->pc != 0x17FB84u) { return; }
    }
    ctx->pc = 0x17FB84u;
label_17fb84:
    // 0x17fb84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17fb84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17fb88:
    // 0x17fb88: 0xc0617ec  jal         func_185FB0
    ctx->pc = 0x17FB88u;
    SET_GPR_U32(ctx, 31, 0x17FB90u);
    ctx->pc = 0x185FB0u;
    if (runtime->hasFunction(0x185FB0u)) {
        auto targetFn = runtime->lookupFunction(0x185FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FB90u; }
        if (ctx->pc != 0x17FB90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00185FB0_0x185fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FB90u; }
        if (ctx->pc != 0x17FB90u) { return; }
    }
    ctx->pc = 0x17FB90u;
label_17fb90:
    // 0x17fb90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17fb90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17fb94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17fb94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17fb98: 0x3e00008  jr          $ra
    ctx->pc = 0x17FB98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17FB9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FB98u;
            // 0x17fb9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17FBA0u;
    ctx->pc = 0x17fba0u;
}
