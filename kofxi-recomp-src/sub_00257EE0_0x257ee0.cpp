#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00257EE0
// Address: 0x257ee0 - 0x258e20
void sub_00257EE0_0x257ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00257EE0_0x257ee0");
#endif

    switch (ctx->pc) {
        case 0x257f6cu: goto label_257f6c;
        case 0x257fccu: goto label_257fcc;
        case 0x257fecu: goto label_257fec;
        case 0x257ffcu: goto label_257ffc;
        case 0x258044u: goto label_258044;
        case 0x258050u: goto label_258050;
        case 0x25807cu: goto label_25807c;
        case 0x258088u: goto label_258088;
        case 0x258174u: goto label_258174;
        case 0x258254u: goto label_258254;
        case 0x2583e4u: goto label_2583e4;
        case 0x258420u: goto label_258420;
        case 0x258440u: goto label_258440;
        case 0x2584b8u: goto label_2584b8;
        case 0x258510u: goto label_258510;
        case 0x258524u: goto label_258524;
        case 0x258530u: goto label_258530;
        case 0x2585a8u: goto label_2585a8;
        case 0x2585f0u: goto label_2585f0;
        case 0x2585fcu: goto label_2585fc;
        case 0x258608u: goto label_258608;
        case 0x258618u: goto label_258618;
        case 0x258658u: goto label_258658;
        case 0x258664u: goto label_258664;
        case 0x258674u: goto label_258674;
        case 0x25867cu: goto label_25867c;
        case 0x258688u: goto label_258688;
        case 0x2586d0u: goto label_2586d0;
        case 0x25875cu: goto label_25875c;
        case 0x258788u: goto label_258788;
        case 0x258798u: goto label_258798;
        case 0x258824u: goto label_258824;
        case 0x258864u: goto label_258864;
        case 0x258870u: goto label_258870;
        case 0x25887cu: goto label_25887c;
        case 0x25888cu: goto label_25888c;
        case 0x2588b4u: goto label_2588b4;
        case 0x2588c0u: goto label_2588c0;
        case 0x2588d0u: goto label_2588d0;
        case 0x2588d8u: goto label_2588d8;
        case 0x2588e8u: goto label_2588e8;
        case 0x258930u: goto label_258930;
        case 0x258990u: goto label_258990;
        case 0x2589b0u: goto label_2589b0;
        case 0x2589c4u: goto label_2589c4;
        case 0x2589f0u: goto label_2589f0;
        case 0x258a00u: goto label_258a00;
        case 0x258a1cu: goto label_258a1c;
        case 0x258a9cu: goto label_258a9c;
        case 0x258ad0u: goto label_258ad0;
        case 0x258b28u: goto label_258b28;
        case 0x258b40u: goto label_258b40;
        case 0x258b54u: goto label_258b54;
        case 0x258cd4u: goto label_258cd4;
        case 0x258d00u: goto label_258d00;
        default: break;
    }

    ctx->pc = 0x257ee0u;

    // 0x257ee0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x257ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x257ee4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x257ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x257ee8: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x257ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x257eec: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x257eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x257ef0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x257ef0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257ef4: 0xffbe00f0  sd          $fp, 0xF0($sp)
    ctx->pc = 0x257ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 30));
    // 0x257ef8: 0xffb700e0  sd          $s7, 0xE0($sp)
    ctx->pc = 0x257ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 23));
    // 0x257efc: 0xffb600d0  sd          $s6, 0xD0($sp)
    ctx->pc = 0x257efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 22));
    // 0x257f00: 0xffb500c0  sd          $s5, 0xC0($sp)
    ctx->pc = 0x257f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 21));
    // 0x257f04: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x257f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x257f08: 0xffb300a0  sd          $s3, 0xA0($sp)
    ctx->pc = 0x257f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 19));
    // 0x257f0c: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x257f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x257f10: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x257f10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x257f14: 0xffb10080  sd          $s1, 0x80($sp)
    ctx->pc = 0x257f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 17));
    // 0x257f18: 0x8e510030  lw          $s1, 0x30($s2)
    ctx->pc = 0x257f18u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x257f1c: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x257f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x257f20: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x257F20u;
    {
        const bool branch_taken_0x257f20 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x257F24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257F20u;
            // 0x257f24: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257f20) {
            ctx->pc = 0x257F38u;
            goto label_257f38;
        }
    }
    ctx->pc = 0x257F28u;
    // 0x257f28: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x257f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x257f2c: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x257f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x257f30: 0xafa4002c  sw          $a0, 0x2C($sp)
    ctx->pc = 0x257f30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
    // 0x257f34: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x257f34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
label_257f38:
    // 0x257f38: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x257f38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x257f3c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x257f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x257f40: 0x14c20005  bne         $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x257F40u;
    {
        const bool branch_taken_0x257f40 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x257F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257F40u;
            // 0x257f44: 0xafa6005c  sw          $a2, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257f40) {
            ctx->pc = 0x257F58u;
            goto label_257f58;
        }
    }
    ctx->pc = 0x257F48u;
    // 0x257f48: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x257F48u;
    {
        const bool branch_taken_0x257f48 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x257F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257F48u;
            // 0x257f4c: 0x27b40020  addiu       $s4, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257f48) {
            ctx->pc = 0x257F60u;
            goto label_257f60;
        }
    }
    ctx->pc = 0x257F50u;
    // 0x257f50: 0x100003a6  b           . + 4 + (0x3A6 << 2)
    ctx->pc = 0x257F50u;
    {
        const bool branch_taken_0x257f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257F50u;
            // 0x257f54: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257f50) {
            ctx->pc = 0x258DECu;
            goto label_258dec;
        }
    }
    ctx->pc = 0x257F58u;
label_257f58:
    // 0x257f58: 0x100003a4  b           . + 4 + (0x3A4 << 2)
    ctx->pc = 0x257F58u;
    {
        const bool branch_taken_0x257f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257F58u;
            // 0x257f5c: 0x2402006a  addiu       $v0, $zero, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257f58) {
            ctx->pc = 0x258DECu;
            goto label_258dec;
        }
    }
    ctx->pc = 0x257F60u;
label_257f60:
    // 0x257f60: 0x27b50024  addiu       $s5, $sp, 0x24
    ctx->pc = 0x257f60u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x257f64: 0xc0932e6  jal         func_24CB98
    ctx->pc = 0x257F64u;
    SET_GPR_U32(ctx, 31, 0x257F6Cu);
    ctx->pc = 0x257F68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x257F64u;
            // 0x257f68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24CB98u;
    if (runtime->hasFunction(0x24CB98u)) {
        auto targetFn = runtime->lookupFunction(0x24CB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257F6Cu; }
        if (ctx->pc != 0x257F6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0024CB98_0x24cb98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257F6Cu; }
        if (ctx->pc != 0x257F6Cu) { return; }
    }
    ctx->pc = 0x257F6Cu;
label_257f6c:
    // 0x257f6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x257f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257f70: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x257F70u;
    {
        const bool branch_taken_0x257f70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x257F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257F70u;
            // 0x257f74: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257f70) {
            ctx->pc = 0x257F80u;
            goto label_257f80;
        }
    }
    ctx->pc = 0x257F78u;
    // 0x257f78: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x257F78u;
    {
        const bool branch_taken_0x257f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257F78u;
            // 0x257f7c: 0x8c5012a8  lw          $s0, 0x12A8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4776)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257f78) {
            ctx->pc = 0x258000u;
            goto label_258000;
        }
    }
    ctx->pc = 0x257F80u;
label_257f80:
    // 0x257f80: 0x8e4300c8  lw          $v1, 0xC8($s2)
    ctx->pc = 0x257f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 200)));
    // 0x257f84: 0x8c5012a8  lw          $s0, 0x12A8($v0)
    ctx->pc = 0x257f84u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4776)));
    // 0x257f88: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x257F88u;
    {
        const bool branch_taken_0x257f88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x257F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257F88u;
            // 0x257f8c: 0x8c930048  lw          $s3, 0x48($a0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257f88) {
            ctx->pc = 0x257FA4u;
            goto label_257fa4;
        }
    }
    ctx->pc = 0x257F90u;
    // 0x257f90: 0xdc820060  ld          $v0, 0x60($a0)
    ctx->pc = 0x257f90u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x257f94: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x257F94u;
    {
        const bool branch_taken_0x257f94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x257F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257F94u;
            // 0x257f98: 0x6442ffd8  daddiu      $v0, $v0, -0x28 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294967256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x257f94) {
            ctx->pc = 0x257FD4u;
            goto label_257fd4;
        }
    }
    ctx->pc = 0x257F9Cu;
    // 0x257f9c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x257F9Cu;
    {
        const bool branch_taken_0x257f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x257f9c) {
            ctx->pc = 0x257FDCu;
            goto label_257fdc;
        }
    }
    ctx->pc = 0x257FA4u;
label_257fa4:
    // 0x257fa4: 0x96620030  lhu         $v0, 0x30($s3)
    ctx->pc = 0x257fa4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x257fa8: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x257fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x257fac: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x257FACu;
    {
        const bool branch_taken_0x257fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x257fac) {
            ctx->pc = 0x257FB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x257FACu;
            // 0x257fb0: 0xde620040  ld          $v0, 0x40($s3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x257FD8u;
            goto label_257fd8;
        }
    }
    ctx->pc = 0x257FB4u;
    // 0x257fb4: 0x8a22004b  lwl         $v0, 0x4B($s1)
    ctx->pc = 0x257fb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 75); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x257fb8: 0x9a220048  lwr         $v0, 0x48($s1)
    ctx->pc = 0x257fb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 72); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x257fbc: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x257fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x257fc0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x257fc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x257fc4: 0xc092516  jal         func_249458
    ctx->pc = 0x257FC4u;
    SET_GPR_U32(ctx, 31, 0x257FCCu);
    ctx->pc = 0x257FC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x257FC4u;
            // 0x257fc8: 0x442024  and         $a0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x249458u;
    if (runtime->hasFunction(0x249458u)) {
        auto targetFn = runtime->lookupFunction(0x249458u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257FCCu; }
        if (ctx->pc != 0x257FCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00249458_0x249458(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257FCCu; }
        if (ctx->pc != 0x257FCCu) { return; }
    }
    ctx->pc = 0x257FCCu;
label_257fcc:
    // 0x257fcc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x257FCCu;
    {
        const bool branch_taken_0x257fcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x257fcc) {
            ctx->pc = 0x257FE4u;
            goto label_257fe4;
        }
    }
    ctx->pc = 0x257FD4u;
label_257fd4:
    // 0x257fd4: 0xde620040  ld          $v0, 0x40($s3)
    ctx->pc = 0x257fd4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 64)));
label_257fd8:
    // 0x257fd8: 0x6442ffd8  daddiu      $v0, $v0, -0x28
    ctx->pc = 0x257fd8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294967256);
label_257fdc:
    // 0x257fdc: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x257fdcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x257fe0: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x257fe0u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
label_257fe4:
    // 0x257fe4: 0xc0969e8  jal         func_25A7A0
    ctx->pc = 0x257FE4u;
    SET_GPR_U32(ctx, 31, 0x257FECu);
    ctx->pc = 0x257FE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x257FE4u;
            // 0x257fe8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25A7A0u;
    if (runtime->hasFunction(0x25A7A0u)) {
        auto targetFn = runtime->lookupFunction(0x25A7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257FECu; }
        if (ctx->pc != 0x257FECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025A7A0_0x25a7a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257FECu; }
        if (ctx->pc != 0x257FECu) { return; }
    }
    ctx->pc = 0x257FECu;
label_257fec:
    // 0x257fec: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x257FECu;
    {
        const bool branch_taken_0x257fec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x257FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257FECu;
            // 0x257ff0: 0x2028023  subu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257fec) {
            ctx->pc = 0x258000u;
            goto label_258000;
        }
    }
    ctx->pc = 0x257FF4u;
    // 0x257ff4: 0xc0945d0  jal         func_251740
    ctx->pc = 0x257FF4u;
    SET_GPR_U32(ctx, 31, 0x257FFCu);
    ctx->pc = 0x257FF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x257FF4u;
            // 0x257ff8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251740u;
    if (runtime->hasFunction(0x251740u)) {
        auto targetFn = runtime->lookupFunction(0x251740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257FFCu; }
        if (ctx->pc != 0x257FFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00251740_0x251740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257FFCu; }
        if (ctx->pc != 0x257FFCu) { return; }
    }
    ctx->pc = 0x257FFCu;
label_257ffc:
    // 0x257ffc: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x257ffcu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_258000:
    // 0x258000: 0x96430020  lhu         $v1, 0x20($s2)
    ctx->pc = 0x258000u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x258004: 0x96440022  lhu         $a0, 0x22($s2)
    ctx->pc = 0x258004u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 34)));
    // 0x258008: 0x70282b  sltu        $a1, $v1, $s0
    ctx->pc = 0x258008u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x25800c: 0x96460024  lhu         $a2, 0x24($s2)
    ctx->pc = 0x25800cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x258010: 0x90102b  sltu        $v0, $a0, $s0
    ctx->pc = 0x258010u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x258014: 0x205180a  movz        $v1, $s0, $a1
    ctx->pc = 0x258014u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 16));
    // 0x258018: 0x202200a  movz        $a0, $s0, $v0
    ctx->pc = 0x258018u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 16));
    // 0x25801c: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x25801cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x258020: 0xaea40000  sw          $a0, 0x0($s5)
    ctx->pc = 0x258020u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
    // 0x258024: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x258024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x258028: 0x10460021  beq         $v0, $a2, . + 4 + (0x21 << 2)
    ctx->pc = 0x258028u;
    {
        const bool branch_taken_0x258028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x25802Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258028u;
            // 0x25802c: 0x46102a  slt         $v0, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x258028) {
            ctx->pc = 0x2580B0u;
            goto label_2580b0;
        }
    }
    ctx->pc = 0x258030u;
    // 0x258030: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x258030u;
    {
        const bool branch_taken_0x258030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x258030) {
            ctx->pc = 0x258034u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x258030u;
            // 0x258034: 0x96820000  lhu         $v0, 0x0($s4) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2580ACu;
            goto label_2580ac;
        }
    }
    ctx->pc = 0x258038u;
    // 0x258038: 0xde440088  ld          $a0, 0x88($s2)
    ctx->pc = 0x258038u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x25803c: 0xc04857a  jal         func_1215E8
    ctx->pc = 0x25803Cu;
    SET_GPR_U32(ctx, 31, 0x258044u);
    ctx->pc = 0x258040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25803Cu;
            // 0x258040: 0x96450024  lhu         $a1, 0x24($s2) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1215E8u;
    if (runtime->hasFunction(0x1215E8u)) {
        auto targetFn = runtime->lookupFunction(0x1215E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258044u; }
        if (ctx->pc != 0x258044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001215E8_0x1215e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258044u; }
        if (ctx->pc != 0x258044u) { return; }
    }
    ctx->pc = 0x258044u;
label_258044:
    // 0x258044: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x258044u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x258048: 0xc048082  jal         func_120208
    ctx->pc = 0x258048u;
    SET_GPR_U32(ctx, 31, 0x258050u);
    ctx->pc = 0x25804Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258048u;
            // 0x25804c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (runtime->hasFunction(0x120208u)) {
        auto targetFn = runtime->lookupFunction(0x120208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258050u; }
        if (ctx->pc != 0x258050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00120208_0x120208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258050u; }
        if (ctx->pc != 0x258050u) { return; }
    }
    ctx->pc = 0x258050u;
label_258050:
    // 0x258050: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x258050u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x258054: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x258054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x258058: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x258058u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x25805c: 0xde440090  ld          $a0, 0x90($s2)
    ctx->pc = 0x25805cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x258060: 0xc2182b  sltu        $v1, $a2, $v0
    ctx->pc = 0x258060u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x258064: 0x96450024  lhu         $a1, 0x24($s2)
    ctx->pc = 0x258064u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x258068: 0xc3100a  movz        $v0, $a2, $v1
    ctx->pc = 0x258068u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x25806c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x25806cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x258070: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x258070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x258074: 0xc04857a  jal         func_1215E8
    ctx->pc = 0x258074u;
    SET_GPR_U32(ctx, 31, 0x25807Cu);
    ctx->pc = 0x258078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258074u;
            // 0x258078: 0xfe420088  sd          $v0, 0x88($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 136), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1215E8u;
    if (runtime->hasFunction(0x1215E8u)) {
        auto targetFn = runtime->lookupFunction(0x1215E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25807Cu; }
        if (ctx->pc != 0x25807Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001215E8_0x1215e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25807Cu; }
        if (ctx->pc != 0x25807Cu) { return; }
    }
    ctx->pc = 0x25807Cu;
label_25807c:
    // 0x25807c: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x25807cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x258080: 0xc048082  jal         func_120208
    ctx->pc = 0x258080u;
    SET_GPR_U32(ctx, 31, 0x258088u);
    ctx->pc = 0x258084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258080u;
            // 0x258084: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (runtime->hasFunction(0x120208u)) {
        auto targetFn = runtime->lookupFunction(0x120208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258088u; }
        if (ctx->pc != 0x258088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00120208_0x120208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258088u; }
        if (ctx->pc != 0x258088u) { return; }
    }
    ctx->pc = 0x258088u;
label_258088:
    // 0x258088: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x258088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x25808c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x25808cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x258090: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x258090u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x258094: 0x82182b  sltu        $v1, $a0, $v0
    ctx->pc = 0x258094u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x258098: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x258098u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x25809c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x25809cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2580a0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2580a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2580a4: 0xfe420090  sd          $v0, 0x90($s2)
    ctx->pc = 0x2580a4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 144), GPR_U64(ctx, 2));
    // 0x2580a8: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x2580a8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_2580ac:
    // 0x2580ac: 0xa6420024  sh          $v0, 0x24($s2)
    ctx->pc = 0x2580acu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 36), (uint16_t)GPR_U32(ctx, 2));
label_2580b0:
    // 0x2580b0: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x2580b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x2580b4: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2580b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2580b8: 0x8e490040  lw          $t1, 0x40($s2)
    ctx->pc = 0x2580b8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x2580bc: 0x8c64129c  lw          $a0, 0x129C($v1)
    ctx->pc = 0x2580bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4764)));
    // 0x2580c0: 0x491026  xor         $v0, $v0, $t1
    ctx->pc = 0x2580c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 9));
    // 0x2580c4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2580c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2580c8: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x2580C8u;
    {
        const bool branch_taken_0x2580c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2580CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2580C8u;
            // 0x2580cc: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2580c8) {
            ctx->pc = 0x2580FCu;
            goto label_2580fc;
        }
    }
    ctx->pc = 0x2580D0u;
    // 0x2580d0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2580d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2580d4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2580d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2580d8: 0x8c4512a0  lw          $a1, 0x12A0($v0)
    ctx->pc = 0x2580d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4768)));
    // 0x2580dc: 0x8e480044  lw          $t0, 0x44($s2)
    ctx->pc = 0x2580dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x2580e0: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x2580e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2580e4: 0x8e420088  lw          $v0, 0x88($s2)
    ctx->pc = 0x2580e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x2580e8: 0x1091823  subu        $v1, $t0, $t1
    ctx->pc = 0x2580e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x2580ec: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2580ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2580f0: 0x45202b  sltu        $a0, $v0, $a1
    ctx->pc = 0x2580f0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2580f4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2580F4u;
    {
        const bool branch_taken_0x2580f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2580F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2580F4u;
            // 0x2580f8: 0xa4100a  movz        $v0, $a1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2580f4) {
            ctx->pc = 0x258164u;
            goto label_258164;
        }
    }
    ctx->pc = 0x2580FCu;
label_2580fc:
    // 0x2580fc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2580fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x258100: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x258100u;
    {
        const bool branch_taken_0x258100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x258100) {
            ctx->pc = 0x258104u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x258100u;
            // 0x258104: 0x8e480044  lw          $t0, 0x44($s2) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x25817Cu;
            goto label_25817c;
        }
    }
    ctx->pc = 0x258108u;
    // 0x258108: 0x86420098  lh          $v0, 0x98($s2)
    ctx->pc = 0x258108u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x25810c: 0x8643001c  lh          $v1, 0x1C($s2)
    ctx->pc = 0x25810cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x258110: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x258110u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x258114: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x258114u;
    {
        const bool branch_taken_0x258114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x258114) {
            ctx->pc = 0x258118u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x258114u;
            // 0x258118: 0x8e480044  lw          $t0, 0x44($s2) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x25817Cu;
            goto label_25817c;
        }
    }
    ctx->pc = 0x25811Cu;
    // 0x25811c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x25811cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x258120: 0x8c4312c8  lw          $v1, 0x12C8($v0)
    ctx->pc = 0x258120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4808)));
    // 0x258124: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x258124u;
    {
        const bool branch_taken_0x258124 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x258128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258124u;
            // 0x258128: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258124) {
            ctx->pc = 0x258150u;
            goto label_258150;
        }
    }
    ctx->pc = 0x25812Cu;
    // 0x25812c: 0x2403111c  addiu       $v1, $zero, 0x111C
    ctx->pc = 0x25812cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4380));
    // 0x258130: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x258130u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x258134: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x258134u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x258138: 0x65202b  sltu        $a0, $v1, $a1
    ctx->pc = 0x258138u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x25813c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x25813cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258140: 0xa4180b  movn        $v1, $a1, $a0
    ctx->pc = 0x258140u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x258144: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x258144u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x258148: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x258148u;
    {
        const bool branch_taken_0x258148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25814Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258148u;
            // 0x25814c: 0x62300a  movz        $a2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258148) {
            ctx->pc = 0x258154u;
            goto label_258154;
        }
    }
    ctx->pc = 0x258150u;
label_258150:
    // 0x258150: 0x433018  mult        $a2, $v0, $v1
    ctx->pc = 0x258150u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_258154:
    // 0x258154: 0x8e420088  lw          $v0, 0x88($s2)
    ctx->pc = 0x258154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x258158: 0x8e480044  lw          $t0, 0x44($s2)
    ctx->pc = 0x258158u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x25815c: 0x46182b  sltu        $v1, $v0, $a2
    ctx->pc = 0x25815cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x258160: 0xc3100a  movz        $v0, $a2, $v1
    ctx->pc = 0x258160u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
label_258164:
    // 0x258164: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x258164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x258168: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x258168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x25816c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25816Cu;
    {
        const bool branch_taken_0x25816c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25816Cu;
            // 0x258170: 0xfe420088  sd          $v0, 0x88($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 136), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25816c) {
            ctx->pc = 0x25817Cu;
            goto label_25817c;
        }
    }
    ctx->pc = 0x258174u;
label_258174:
    // 0x258174: 0x8e490040  lw          $t1, 0x40($s2)
    ctx->pc = 0x258174u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x258178: 0x8e480044  lw          $t0, 0x44($s2)
    ctx->pc = 0x258178u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_25817c:
    // 0x25817c: 0x8e420058  lw          $v0, 0x58($s2)
    ctx->pc = 0x25817cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x258180: 0x1094023  subu        $t0, $t0, $t1
    ctx->pc = 0x258180u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x258184: 0x8e450088  lw          $a1, 0x88($s2)
    ctx->pc = 0x258184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x258188: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x258188u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x25818c: 0xafa80030  sw          $t0, 0x30($sp)
    ctx->pc = 0x25818cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 8));
    // 0x258190: 0x24671290  addiu       $a3, $v1, 0x1290
    ctx->pc = 0x258190u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4752));
    // 0x258194: 0x45202b  sltu        $a0, $v0, $a1
    ctx->pc = 0x258194u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x258198: 0x86430018  lh          $v1, 0x18($s2)
    ctx->pc = 0x258198u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x25819c: 0xa4100a  movz        $v0, $a1, $a0
    ctx->pc = 0x25819cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x2581a0: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x2581a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x2581a4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2581a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2581a8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2581a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2581ac: 0x2b03e  dsrl32      $s6, $v0, 0
    ctx->pc = 0x2581acu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2581b0: 0x82460026  lb          $a2, 0x26($s2)
    ctx->pc = 0x2581b0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 38)));
    // 0x2581b4: 0x10c00010  beqz        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x2581B4u;
    {
        const bool branch_taken_0x2581b4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2581B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2581B4u;
            // 0x2581b8: 0x90740000  lbu         $s4, 0x0($v1) (Delay Slot)
        SET_GPR_U32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2581b4) {
            ctx->pc = 0x2581F8u;
            goto label_2581f8;
        }
    }
    ctx->pc = 0x2581BCu;
    // 0x2581bc: 0x56c00009  bnel        $s6, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2581BCu;
    {
        const bool branch_taken_0x2581bc = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x2581bc) {
            ctx->pc = 0x2581C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2581BCu;
            // 0x2581c0: 0xae40000c  sw          $zero, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2581E4u;
            goto label_2581e4;
        }
    }
    ctx->pc = 0x2581C4u;
    // 0x2581c4: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x2581c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2581c8: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x2581c8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2581cc: 0xdcc40080  ld          $a0, 0x80($a2)
    ctx->pc = 0x2581ccu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 128)));
    // 0x2581d0: 0x2a4102b  sltu        $v0, $s5, $a0
    ctx->pc = 0x2581d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2581d4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2581D4u;
    {
        const bool branch_taken_0x2581d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2581d4) {
            ctx->pc = 0x2581D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2581D4u;
            // 0x2581d8: 0x329400fe  andi        $s4, $s4, 0xFE (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)254);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2581DCu;
            goto label_2581dc;
        }
    }
    ctx->pc = 0x2581DCu;
label_2581dc:
    // 0x2581dc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2581DCu;
    {
        const bool branch_taken_0x2581dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2581E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2581DCu;
            // 0x2581e0: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2581dc) {
            ctx->pc = 0x258204u;
            goto label_258204;
        }
    }
    ctx->pc = 0x2581E4u;
label_2581e4:
    // 0x2581e4: 0x8fb50030  lw          $s5, 0x30($sp)
    ctx->pc = 0x2581e4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2581e8: 0xa640001a  sh          $zero, 0x1A($s2)
    ctx->pc = 0x2581e8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 26), (uint16_t)GPR_U32(ctx, 0));
    // 0x2581ec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2581ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2581f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2581F0u;
    {
        const bool branch_taken_0x2581f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2581F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2581F0u;
            // 0x2581f4: 0xdc440080  ld          $a0, 0x80($v0) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2581f0) {
            ctx->pc = 0x258204u;
            goto label_258204;
        }
    }
    ctx->pc = 0x2581F8u;
label_2581f8:
    // 0x2581f8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2581f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2581fc: 0x8fb50030  lw          $s5, 0x30($sp)
    ctx->pc = 0x2581fcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x258200: 0xdc640080  ld          $a0, 0x80($v1)
    ctx->pc = 0x258200u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 128)));
label_258204:
    // 0x258204: 0x2c4102b  sltu        $v0, $s6, $a0
    ctx->pc = 0x258204u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x258208: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x258208u;
    {
        const bool branch_taken_0x258208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25820Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258208u;
            // 0x25820c: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258208) {
            ctx->pc = 0x25821Cu;
            goto label_25821c;
        }
    }
    ctx->pc = 0x258210u;
    // 0x258210: 0x2d5982f  dsubu       $s3, $s6, $s5
    ctx->pc = 0x258210u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 22) - GPR_U64(ctx, 21));
    // 0x258214: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x258214u;
    {
        const bool branch_taken_0x258214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258214u;
            // 0x258218: 0x282a024  and         $s4, $s4, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258214) {
            ctx->pc = 0x258220u;
            goto label_258220;
        }
    }
    ctx->pc = 0x25821Cu;
label_25821c:
    // 0x25821c: 0x95982f  dsubu       $s3, $a0, $s5
    ctx->pc = 0x25821cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) - GPR_U64(ctx, 21));
label_258220:
    // 0x258220: 0x661000d  bgez        $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x258220u;
    {
        const bool branch_taken_0x258220 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x258224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258220u;
            // 0x258224: 0x8fa50020  lw          $a1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258220) {
            ctx->pc = 0x258258u;
            goto label_258258;
        }
    }
    ctx->pc = 0x258228u;
    // 0x258228: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x258228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x25822c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x25822cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258230: 0x16c00009  bnez        $s6, . + 4 + (0x9 << 2)
    ctx->pc = 0x258230u;
    {
        const bool branch_taken_0x258230 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x258234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258230u;
            // 0x258234: 0x282a024  and         $s4, $s4, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258230) {
            ctx->pc = 0x258258u;
            goto label_258258;
        }
    }
    ctx->pc = 0x258238u;
    // 0x258238: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x258238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x25823c: 0xae490044  sw          $t1, 0x44($s2)
    ctx->pc = 0x25823cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 9));
    // 0x258240: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x258240u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x258244: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x258244u;
    {
        const bool branch_taken_0x258244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x258248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258244u;
            // 0x258248: 0xa640001a  sh          $zero, 0x1A($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 26), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258244) {
            ctx->pc = 0x258254u;
            goto label_258254;
        }
    }
    ctx->pc = 0x25824Cu;
    // 0x25824c: 0xc096388  jal         func_258E20
    ctx->pc = 0x25824Cu;
    SET_GPR_U32(ctx, 31, 0x258254u);
    ctx->pc = 0x258250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25824Cu;
            // 0x258250: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x258E20u;
    if (runtime->hasFunction(0x258E20u)) {
        auto targetFn = runtime->lookupFunction(0x258E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258254u; }
        if (ctx->pc != 0x258254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00258E20_0x258e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258254u; }
        if (ctx->pc != 0x258254u) { return; }
    }
    ctx->pc = 0x258254u;
label_258254:
    // 0x258254: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x258254u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_258258:
    // 0x258258: 0xb3102a  slt         $v0, $a1, $s3
    ctx->pc = 0x258258u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x25825c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25825Cu;
    {
        const bool branch_taken_0x25825c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25825Cu;
            // 0x258260: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25825c) {
            ctx->pc = 0x258274u;
            goto label_258274;
        }
    }
    ctx->pc = 0x258264u;
    // 0x258264: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x258264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x258268: 0xafa40054  sw          $a0, 0x54($sp)
    ctx->pc = 0x258268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 4));
    // 0x25826c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x25826cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258270: 0x282a024  and         $s4, $s4, $v0
    ctx->pc = 0x258270u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
label_258274:
    // 0x258274: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x258274u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x258278: 0xdcc30058  ld          $v1, 0x58($a2)
    ctx->pc = 0x258278u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 88)));
    // 0x25827c: 0xdcc80050  ld          $t0, 0x50($a2)
    ctx->pc = 0x25827cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x258280: 0xdcc40048  ld          $a0, 0x48($a2)
    ctx->pc = 0x258280u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 72)));
    // 0x258284: 0xdcc20060  ld          $v0, 0x60($a2)
    ctx->pc = 0x258284u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 96)));
    // 0x258288: 0x104202f  dsubu       $a0, $t0, $a0
    ctx->pc = 0x258288u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) - GPR_U64(ctx, 4));
    // 0x25828c: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x25828cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x258290: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x258290u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x258294: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x258294u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x258298: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x258298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x25829c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x25829cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2582a0: 0x82182a  slt         $v1, $a0, $v0
    ctx->pc = 0x2582a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2582a4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2582a4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2582a8: 0x12600020  beqz        $s3, . + 4 + (0x20 << 2)
    ctx->pc = 0x2582A8u;
    {
        const bool branch_taken_0x2582a8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2582ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2582A8u;
            // 0x2582ac: 0x83b00b  movn        $s6, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2582a8) {
            ctx->pc = 0x25832Cu;
            goto label_25832c;
        }
    }
    ctx->pc = 0x2582B0u;
    // 0x2582b0: 0x5265004f  beql        $s3, $a1, . + 4 + (0x4F << 2)
    ctx->pc = 0x2582B0u;
    {
        const bool branch_taken_0x2582b0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 5));
        if (branch_taken_0x2582b0) {
            ctx->pc = 0x2582B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2582B0u;
            // 0x2582b4: 0x8fa3005c  lw          $v1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2583F0u;
            goto label_2583f0;
        }
    }
    ctx->pc = 0x2582B8u;
    // 0x2582b8: 0x94c20006  lhu         $v0, 0x6($a2)
    ctx->pc = 0x2582b8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x2582bc: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x2582bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x2582c0: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2582C0u;
    {
        const bool branch_taken_0x2582c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2582c0) {
            ctx->pc = 0x2582C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2582C0u;
            // 0x2582c4: 0x82420026  lb          $v0, 0x26($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 38)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2582FCu;
            goto label_2582fc;
        }
    }
    ctx->pc = 0x2582C8u;
    // 0x2582c8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2582c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2582cc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2582CCu;
    {
        const bool branch_taken_0x2582cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2582D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2582CCu;
            // 0x2582d0: 0x8fa40028  lw          $a0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2582cc) {
            ctx->pc = 0x2582E4u;
            goto label_2582e4;
        }
    }
    ctx->pc = 0x2582D4u;
    // 0x2582d4: 0x96510028  lhu         $s1, 0x28($s2)
    ctx->pc = 0x2582d4u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x2582d8: 0x32220004  andi        $v0, $s1, 0x4
    ctx->pc = 0x2582d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4);
    // 0x2582dc: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2582DCu;
    {
        const bool branch_taken_0x2582dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2582dc) {
            ctx->pc = 0x2582E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2582DCu;
            // 0x2582e0: 0x82420026  lb          $v0, 0x26($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 38)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2582FCu;
            goto label_2582fc;
        }
    }
    ctx->pc = 0x2582E4u;
label_2582e4:
    // 0x2582e4: 0x275102d  daddu       $v0, $s3, $s5
    ctx->pc = 0x2582e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 21));
    // 0x2582e8: 0xdc830080  ld          $v1, 0x80($a0)
    ctx->pc = 0x2582e8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2582ec: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2582ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2582f0: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x2582F0u;
    {
        const bool branch_taken_0x2582f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2582F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2582F0u;
            // 0x2582f4: 0x8fa3005c  lw          $v1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2582f0) {
            ctx->pc = 0x2583F0u;
            goto label_2583f0;
        }
    }
    ctx->pc = 0x2582F8u;
    // 0x2582f8: 0x82420026  lb          $v0, 0x26($s2)
    ctx->pc = 0x2582f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 38)));
label_2582fc:
    // 0x2582fc: 0x1440003c  bnez        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x2582FCu;
    {
        const bool branch_taken_0x2582fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x258300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2582FCu;
            // 0x258300: 0x8fa3005c  lw          $v1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2582fc) {
            ctx->pc = 0x2583F0u;
            goto label_2583f0;
        }
    }
    ctx->pc = 0x258304u;
    // 0x258304: 0xde4200a8  ld          $v0, 0xA8($s2)
    ctx->pc = 0x258304u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 168)));
    // 0x258308: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x258308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
    // 0x25830c: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x25830cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x258310: 0x50400038  beql        $v0, $zero, . + 4 + (0x38 << 2)
    ctx->pc = 0x258310u;
    {
        const bool branch_taken_0x258310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x258310) {
            ctx->pc = 0x258314u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x258310u;
            // 0x258314: 0x241e0028  addiu       $fp, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2583F4u;
            goto label_2583f4;
        }
    }
    ctx->pc = 0x258318u;
    // 0x258318: 0x8e420044  lw          $v0, 0x44($s2)
    ctx->pc = 0x258318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x25831c: 0x8e430080  lw          $v1, 0x80($s2)
    ctx->pc = 0x25831cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x258320: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x258320u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x258324: 0x4400032  bltz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x258324u;
    {
        const bool branch_taken_0x258324 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x258328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258324u;
            // 0x258328: 0x8fa3005c  lw          $v1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258324) {
            ctx->pc = 0x2583F0u;
            goto label_2583f0;
        }
    }
    ctx->pc = 0x25832Cu;
label_25832c:
    // 0x25832c: 0x1ac00017  blez        $s6, . + 4 + (0x17 << 2)
    ctx->pc = 0x25832Cu;
    {
        const bool branch_taken_0x25832c = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x258330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25832Cu;
            // 0x258330: 0x3403ffff  ori         $v1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25832c) {
            ctx->pc = 0x25838Cu;
            goto label_25838c;
        }
    }
    ctx->pc = 0x258334u;
    // 0x258334: 0x924400b5  lbu         $a0, 0xB5($s2)
    ctx->pc = 0x258334u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 181)));
    // 0x258338: 0x16103c  dsll32      $v0, $s6, 0
    ctx->pc = 0x258338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 0));
    // 0x25833c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x25833cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x258340: 0x8e46007c  lw          $a2, 0x7C($s2)
    ctx->pc = 0x258340u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
    // 0x258344: 0x831814  dsllv       $v1, $v1, $a0
    ctx->pc = 0x258344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x258348: 0x8e470070  lw          $a3, 0x70($s2)
    ctx->pc = 0x258348u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x25834c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x25834cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x258350: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x258350u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x258354: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x258354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x258358: 0x43282b  sltu        $a1, $v0, $v1
    ctx->pc = 0x258358u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x25835c: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x25835cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x258360: 0x65100a  movz        $v0, $v1, $a1
    ctx->pc = 0x258360u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x258364: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x258364u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x258368: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x258368u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x25836c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x25836cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x258370: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x258370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x258374: 0x44182a  slt         $v1, $v0, $a0
    ctx->pc = 0x258374u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x258378: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x258378u;
    {
        const bool branch_taken_0x258378 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25837Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258378u;
            // 0x25837c: 0x21078  dsll        $v0, $v0, 1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x258378) {
            ctx->pc = 0x2583ECu;
            goto label_2583ec;
        }
    }
    ctx->pc = 0x258380u;
    // 0x258380: 0x48102a  slt         $v0, $v0, $t0
    ctx->pc = 0x258380u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x258384: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x258384u;
    {
        const bool branch_taken_0x258384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258384u;
            // 0x258388: 0x8fa3005c  lw          $v1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258384) {
            ctx->pc = 0x2583F0u;
            goto label_2583f0;
        }
    }
    ctx->pc = 0x25838Cu;
label_25838c:
    // 0x25838c: 0x96510028  lhu         $s1, 0x28($s2)
    ctx->pc = 0x25838cu;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x258390: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x258390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x258394: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x258394u;
    {
        const bool branch_taken_0x258394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x258398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258394u;
            // 0x258398: 0x8fa3005c  lw          $v1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258394) {
            ctx->pc = 0x2583F0u;
            goto label_2583f0;
        }
    }
    ctx->pc = 0x25839Cu;
    // 0x25839c: 0x32820007  andi        $v0, $s4, 0x7
    ctx->pc = 0x25839cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)7);
    // 0x2583a0: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x2583A0u;
    {
        const bool branch_taken_0x2583a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2583a0) {
            ctx->pc = 0x2583A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2583A0u;
            // 0x2583a4: 0x241e0028  addiu       $fp, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2583F4u;
            goto label_2583f4;
        }
    }
    ctx->pc = 0x2583A8u;
    // 0x2583a8: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x2583a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x2583ac: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x2583acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x2583b0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2583b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2583b4: 0x5c40000e  bgtzl       $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2583B4u;
    {
        const bool branch_taken_0x2583b4 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2583b4) {
            ctx->pc = 0x2583B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2583B4u;
            // 0x2583b8: 0x8fa3005c  lw          $v1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2583F0u;
            goto label_2583f0;
        }
    }
    ctx->pc = 0x2583BCu;
    // 0x2583bc: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x2583bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2583c0: 0xdcc20080  ld          $v0, 0x80($a2)
    ctx->pc = 0x2583c0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 128)));
    // 0x2583c4: 0x10400289  beqz        $v0, . + 4 + (0x289 << 2)
    ctx->pc = 0x2583C4u;
    {
        const bool branch_taken_0x2583c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2583C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2583C4u;
            // 0x2583c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2583c4) {
            ctx->pc = 0x258DECu;
            goto label_258dec;
        }
    }
    ctx->pc = 0x2583CCu;
    // 0x2583cc: 0xde420008  ld          $v0, 0x8($s2)
    ctx->pc = 0x2583ccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2583d0: 0x14400286  bnez        $v0, . + 4 + (0x286 << 2)
    ctx->pc = 0x2583D0u;
    {
        const bool branch_taken_0x2583d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2583D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2583D0u;
            // 0x2583d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2583d0) {
            ctx->pc = 0x258DECu;
            goto label_258dec;
        }
    }
    ctx->pc = 0x2583D8u;
    // 0x2583d8: 0xa640001a  sh          $zero, 0x1A($s2)
    ctx->pc = 0x2583d8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 26), (uint16_t)GPR_U32(ctx, 0));
    // 0x2583dc: 0xc096388  jal         func_258E20
    ctx->pc = 0x2583DCu;
    SET_GPR_U32(ctx, 31, 0x2583E4u);
    ctx->pc = 0x2583E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2583DCu;
            // 0x2583e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x258E20u;
    if (runtime->hasFunction(0x258E20u)) {
        auto targetFn = runtime->lookupFunction(0x258E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2583E4u; }
        if (ctx->pc != 0x2583E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00258E20_0x258e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2583E4u; }
        if (ctx->pc != 0x2583E4u) { return; }
    }
    ctx->pc = 0x2583E4u;
label_2583e4:
    // 0x2583e4: 0x10000281  b           . + 4 + (0x281 << 2)
    ctx->pc = 0x2583E4u;
    {
        const bool branch_taken_0x2583e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2583E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2583E4u;
            // 0x2583e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2583e4) {
            ctx->pc = 0x258DECu;
            goto label_258dec;
        }
    }
    ctx->pc = 0x2583ECu;
label_2583ec:
    // 0x2583ec: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x2583ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_2583f0:
    // 0x2583f0: 0x241e0028  addiu       $fp, $zero, 0x28
    ctx->pc = 0x2583f0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_2583f4:
    // 0x2583f4: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x2583f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x2583f8: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x2583f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x2583fc: 0x2f00b  movn        $fp, $zero, $v0
    ctx->pc = 0x2583fcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 0));
    // 0x258400: 0x32820002  andi        $v0, $s4, 0x2
    ctx->pc = 0x258400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)2);
    // 0x258404: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x258404u;
    {
        const bool branch_taken_0x258404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258404u;
            // 0x258408: 0xafbe0060  sw          $fp, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258404) {
            ctx->pc = 0x2584C0u;
            goto label_2584c0;
        }
    }
    ctx->pc = 0x25840Cu;
    // 0x25840c: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x25840cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x258410: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x258410u;
    {
        const bool branch_taken_0x258410 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x258414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258410u;
            // 0x258414: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258410) {
            ctx->pc = 0x258424u;
            goto label_258424;
        }
    }
    ctx->pc = 0x258418u;
    // 0x258418: 0xc0932e6  jal         func_24CB98
    ctx->pc = 0x258418u;
    SET_GPR_U32(ctx, 31, 0x258420u);
    ctx->pc = 0x24CB98u;
    if (runtime->hasFunction(0x24CB98u)) {
        auto targetFn = runtime->lookupFunction(0x24CB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258420u; }
        if (ctx->pc != 0x258420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0024CB98_0x24cb98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258420u; }
        if (ctx->pc != 0x258420u) { return; }
    }
    ctx->pc = 0x258420u;
label_258420:
    // 0x258420: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x258420u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_258424:
    // 0x258424: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x258424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x258428: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x258428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25842c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x25842Cu;
    {
        const bool branch_taken_0x25842c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x258430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25842Cu;
            // 0x258430: 0xae420044  sw          $v0, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25842c) {
            ctx->pc = 0x258438u;
            goto label_258438;
        }
    }
    ctx->pc = 0x258434u;
    // 0x258434: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x258434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_258438:
    // 0x258438: 0xc0968ca  jal         func_25A328
    ctx->pc = 0x258438u;
    SET_GPR_U32(ctx, 31, 0x258440u);
    ctx->pc = 0x25843Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258438u;
            // 0x25843c: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25A328u;
    if (runtime->hasFunction(0x25A328u)) {
        auto targetFn = runtime->lookupFunction(0x25A328u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258440u; }
        if (ctx->pc != 0x258440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025A328_0x25a328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258440u; }
        if (ctx->pc != 0x258440u) { return; }
    }
    ctx->pc = 0x258440u;
label_258440:
    // 0x258440: 0x96510028  lhu         $s1, 0x28($s2)
    ctx->pc = 0x258440u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x258444: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x258444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x258448: 0x32220008  andi        $v0, $s1, 0x8
    ctx->pc = 0x258448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8);
    // 0x25844c: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x25844Cu;
    {
        const bool branch_taken_0x25844c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x258450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25844Cu;
            // 0x258450: 0xa6430022  sh          $v1, 0x22($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 34), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25844c) {
            ctx->pc = 0x2584C4u;
            goto label_2584c4;
        }
    }
    ctx->pc = 0x258454u;
    // 0x258454: 0x92450022  lbu         $a1, 0x22($s2)
    ctx->pc = 0x258454u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 34)));
    // 0x258458: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x258458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25845c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x25845cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x258460: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x258460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x258464: 0xa3a40001  sb          $a0, 0x1($sp)
    ctx->pc = 0x258464u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x258468: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x258468u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x25846c: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x25846cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x258470: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x258470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x258474: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x258474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x258478: 0x32230020  andi        $v1, $s1, 0x20
    ctx->pc = 0x258478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)32);
    // 0x25847c: 0xa3a20002  sb          $v0, 0x2($sp)
    ctx->pc = 0x25847cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x258480: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x258480u;
    {
        const bool branch_taken_0x258480 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x258484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258480u;
            // 0x258484: 0xa3a50003  sb          $a1, 0x3($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258480) {
            ctx->pc = 0x2584C4u;
            goto label_2584c4;
        }
    }
    ctx->pc = 0x258488u;
    // 0x258488: 0x32820010  andi        $v0, $s4, 0x10
    ctx->pc = 0x258488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)16);
    // 0x25848c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25848Cu;
    {
        const bool branch_taken_0x25848c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25848Cu;
            // 0x258490: 0x32220040  andi        $v0, $s1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25848c) {
            ctx->pc = 0x25849Cu;
            goto label_25849c;
        }
    }
    ctx->pc = 0x258494u;
    // 0x258494: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x258494u;
    {
        const bool branch_taken_0x258494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258494u;
            // 0x258498: 0x32230088  andi        $v1, $s1, 0x88 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)136);
        ctx->in_delay_slot = false;
        if (branch_taken_0x258494) {
            ctx->pc = 0x2584C8u;
            goto label_2584c8;
        }
    }
    ctx->pc = 0x25849Cu;
label_25849c:
    // 0x25849c: 0x924200b6  lbu         $v0, 0xB6($s2)
    ctx->pc = 0x25849cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 182)));
    // 0x2584a0: 0x3c040103  lui         $a0, 0x103
    ctx->pc = 0x2584a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)259 << 16));
    // 0x2584a4: 0x34840300  ori         $a0, $a0, 0x300
    ctx->pc = 0x2584a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)768);
    // 0x2584a8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2584a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2584ac: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x2584acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x2584b0: 0xc08a254  jal         func_228950
    ctx->pc = 0x2584B0u;
    SET_GPR_U32(ctx, 31, 0x2584B8u);
    ctx->pc = 0x2584B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2584B0u;
            // 0x2584b4: 0x442025  or          $a0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (runtime->hasFunction(0x228950u)) {
        auto targetFn = runtime->lookupFunction(0x228950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2584B8u; }
        if (ctx->pc != 0x2584B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228950_0x228950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2584B8u; }
        if (ctx->pc != 0x2584B8u) { return; }
    }
    ctx->pc = 0x2584B8u;
label_2584b8:
    // 0x2584b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2584B8u;
    {
        const bool branch_taken_0x2584b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2584BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2584B8u;
            // 0x2584bc: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2584b8) {
            ctx->pc = 0x2584C4u;
            goto label_2584c4;
        }
    }
    ctx->pc = 0x2584C0u;
label_2584c0:
    // 0x2584c0: 0x96510028  lhu         $s1, 0x28($s2)
    ctx->pc = 0x2584c0u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 40)));
label_2584c4:
    // 0x2584c4: 0x32230088  andi        $v1, $s1, 0x88
    ctx->pc = 0x2584c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)136);
label_2584c8:
    // 0x2584c8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x2584c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2584cc: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2584CCu;
    {
        const bool branch_taken_0x2584cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2584D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2584CCu;
            // 0x2584d0: 0x8fa30040  lw          $v1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2584cc) {
            ctx->pc = 0x25853Cu;
            goto label_25853c;
        }
    }
    ctx->pc = 0x2584D4u;
    // 0x2584d4: 0x32820004  andi        $v0, $s4, 0x4
    ctx->pc = 0x2584d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)4);
    // 0x2584d8: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2584D8u;
    {
        const bool branch_taken_0x2584d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2584DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2584D8u;
            // 0x2584dc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2584d8) {
            ctx->pc = 0x25853Cu;
            goto label_25853c;
        }
    }
    ctx->pc = 0x2584E0u;
    // 0x2584e0: 0x32830012  andi        $v1, $s4, 0x12
    ctx->pc = 0x2584e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)18);
    // 0x2584e4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2584E4u;
    {
        const bool branch_taken_0x2584e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2584E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2584E4u;
            // 0x2584e8: 0x32220100  andi        $v0, $s1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2584e4) {
            ctx->pc = 0x2584F4u;
            goto label_2584f4;
        }
    }
    ctx->pc = 0x2584ECu;
    // 0x2584ec: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2584ECu;
    {
        const bool branch_taken_0x2584ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2584F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2584ECu;
            // 0x2584f0: 0x8fa30040  lw          $v1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2584ec) {
            ctx->pc = 0x25853Cu;
            goto label_25853c;
        }
    }
    ctx->pc = 0x2584F4u;
label_2584f4:
    // 0x2584f4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2584f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2584f8: 0x3c040101  lui         $a0, 0x101
    ctx->pc = 0x2584f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)257 << 16));
    // 0x2584fc: 0x3484080a  ori         $a0, $a0, 0x80A
    ctx->pc = 0x2584fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2058);
    // 0x258500: 0x3a28021  addu        $s0, $sp, $v0
    ctx->pc = 0x258500u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x258504: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x258504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x258508: 0xc08a254  jal         func_228950
    ctx->pc = 0x258508u;
    SET_GPR_U32(ctx, 31, 0x258510u);
    ctx->pc = 0x25850Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258508u;
            // 0x25850c: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (runtime->hasFunction(0x228950u)) {
        auto targetFn = runtime->lookupFunction(0x228950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258510u; }
        if (ctx->pc != 0x258510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228950_0x228950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258510u; }
        if (ctx->pc != 0x258510u) { return; }
    }
    ctx->pc = 0x258510u;
label_258510:
    // 0x258510: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x258510u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x258514: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x258514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x258518: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x258518u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x25851c: 0xc08a254  jal         func_228950
    ctx->pc = 0x25851Cu;
    SET_GPR_U32(ctx, 31, 0x258524u);
    ctx->pc = 0x258520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25851Cu;
            // 0x258520: 0x8c641528  lw          $a0, 0x1528($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5416)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (runtime->hasFunction(0x228950u)) {
        auto targetFn = runtime->lookupFunction(0x228950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258524u; }
        if (ctx->pc != 0x258524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228950_0x228950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258524u; }
        if (ctx->pc != 0x258524u) { return; }
    }
    ctx->pc = 0x258524u;
label_258524:
    // 0x258524: 0x8e4400b8  lw          $a0, 0xB8($s2)
    ctx->pc = 0x258524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
    // 0x258528: 0xc08a254  jal         func_228950
    ctx->pc = 0x258528u;
    SET_GPR_U32(ctx, 31, 0x258530u);
    ctx->pc = 0x25852Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258528u;
            // 0x25852c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (runtime->hasFunction(0x228950u)) {
        auto targetFn = runtime->lookupFunction(0x228950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258530u; }
        if (ctx->pc != 0x258530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228950_0x228950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258530u; }
        if (ctx->pc != 0x258530u) { return; }
    }
    ctx->pc = 0x258530u;
label_258530:
    // 0x258530: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x258530u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x258534: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x258534u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x258538: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x258538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_25853c:
    // 0x25853c: 0x1260009f  beqz        $s3, . + 4 + (0x9F << 2)
    ctx->pc = 0x25853Cu;
    {
        const bool branch_taken_0x25853c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x258540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25853Cu;
            // 0x258540: 0x3c3f021  addu        $fp, $fp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25853c) {
            ctx->pc = 0x2587BCu;
            goto label_2587bc;
        }
    }
    ctx->pc = 0x258544u;
    // 0x258544: 0x82420026  lb          $v0, 0x26($s2)
    ctx->pc = 0x258544u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 38)));
    // 0x258548: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x258548u;
    {
        const bool branch_taken_0x258548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25854Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258548u;
            // 0x25854c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258548) {
            ctx->pc = 0x258570u;
            goto label_258570;
        }
    }
    ctx->pc = 0x258550u;
    // 0x258550: 0x56620008  bnel        $s3, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x258550u;
    {
        const bool branch_taken_0x258550 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x258550) {
            ctx->pc = 0x258554u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x258550u;
            // 0x258554: 0x8e420044  lw          $v0, 0x44($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x258574u;
            goto label_258574;
        }
    }
    ctx->pc = 0x258558u;
    // 0x258558: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x258558u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x25855c: 0x24831308  addiu       $v1, $a0, 0x1308
    ctx->pc = 0x25855cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4872));
    // 0x258560: 0xdc6200c0  ld          $v0, 0xC0($v1)
    ctx->pc = 0x258560u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x258564: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x258564u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x258568: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x258568u;
    {
        const bool branch_taken_0x258568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25856Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258568u;
            // 0x25856c: 0xfc6200c0  sd          $v0, 0xC0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 192), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258568) {
            ctx->pc = 0x2585E8u;
            goto label_2585e8;
        }
    }
    ctx->pc = 0x258570u;
label_258570:
    // 0x258570: 0x8e420044  lw          $v0, 0x44($s2)
    ctx->pc = 0x258570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_258574:
    // 0x258574: 0x8e430080  lw          $v1, 0x80($s2)
    ctx->pc = 0x258574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x258578: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x258578u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25857c: 0x4410013  bgez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x25857Cu;
    {
        const bool branch_taken_0x25857c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x258580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25857Cu;
            // 0x258580: 0x3c03003a  lui         $v1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25857c) {
            ctx->pc = 0x2585CCu;
            goto label_2585cc;
        }
    }
    ctx->pc = 0x258584u;
    // 0x258584: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x258584u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x258588: 0x24c21308  addiu       $v0, $a2, 0x1308
    ctx->pc = 0x258588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4872));
    // 0x25858c: 0xdc4300a8  ld          $v1, 0xA8($v0)
    ctx->pc = 0x25858cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x258590: 0xdc4400b0  ld          $a0, 0xB0($v0)
    ctx->pc = 0x258590u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x258594: 0x64630001  daddiu      $v1, $v1, 0x1
    ctx->pc = 0x258594u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
    // 0x258598: 0x93202d  daddu       $a0, $a0, $s3
    ctx->pc = 0x258598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 19));
    // 0x25859c: 0xfc4300a8  sd          $v1, 0xA8($v0)
    ctx->pc = 0x25859cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 168), GPR_U64(ctx, 3));
    // 0x2585a0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2585A0u;
    {
        const bool branch_taken_0x2585a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2585A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2585A0u;
            // 0x2585a4: 0xfc4400b0  sd          $a0, 0xB0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 176), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2585a0) {
            ctx->pc = 0x2585E8u;
            goto label_2585e8;
        }
    }
    ctx->pc = 0x2585A8u;
label_2585a8:
    // 0x2585a8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2585a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2585ac: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x2585acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2585b0: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x2585b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x2585b4: 0xa6230012  sh          $v1, 0x12($s1)
    ctx->pc = 0x2585b4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 3));
    // 0x2585b8: 0xa6230010  sh          $v1, 0x10($s1)
    ctx->pc = 0x2585b8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2585bc: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2585bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2585c0: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2585c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x2585c4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2585C4u;
    {
        const bool branch_taken_0x2585c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2585C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2585C4u;
            // 0x2585c8: 0xae20001c  sw          $zero, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2585c4) {
            ctx->pc = 0x258620u;
            goto label_258620;
        }
    }
    ctx->pc = 0x2585CCu;
label_2585cc:
    // 0x2585cc: 0x24621308  addiu       $v0, $v1, 0x1308
    ctx->pc = 0x2585ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4872));
    // 0x2585d0: 0xdc430098  ld          $v1, 0x98($v0)
    ctx->pc = 0x2585d0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x2585d4: 0xdc4400a0  ld          $a0, 0xA0($v0)
    ctx->pc = 0x2585d4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x2585d8: 0x64630001  daddiu      $v1, $v1, 0x1
    ctx->pc = 0x2585d8u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
    // 0x2585dc: 0x93202d  daddu       $a0, $a0, $s3
    ctx->pc = 0x2585dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 19));
    // 0x2585e0: 0xfc430098  sd          $v1, 0x98($v0)
    ctx->pc = 0x2585e0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 152), GPR_U64(ctx, 3));
    // 0x2585e4: 0xfc4400a0  sd          $a0, 0xA0($v0)
    ctx->pc = 0x2585e4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 160), GPR_U64(ctx, 4));
label_2585e8:
    // 0x2585e8: 0xc08c682  jal         func_231A08
    ctx->pc = 0x2585E8u;
    SET_GPR_U32(ctx, 31, 0x2585F0u);
    ctx->pc = 0x231A08u;
    if (runtime->hasFunction(0x231A08u)) {
        auto targetFn = runtime->lookupFunction(0x231A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2585F0u; }
        if (ctx->pc != 0x2585F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A08_0x231a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2585F0u; }
        if (ctx->pc != 0x2585F0u) { return; }
    }
    ctx->pc = 0x2585F0u;
label_2585f0:
    // 0x2585f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2585f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2585f4: 0xc098552  jal         func_261548
    ctx->pc = 0x2585F4u;
    SET_GPR_U32(ctx, 31, 0x2585FCu);
    ctx->pc = 0x2585F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2585F4u;
            // 0x2585f8: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (runtime->hasFunction(0x261548u)) {
        auto targetFn = runtime->lookupFunction(0x261548u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2585FCu; }
        if (ctx->pc != 0x2585FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261548_0x261548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2585FCu; }
        if (ctx->pc != 0x2585FCu) { return; }
    }
    ctx->pc = 0x2585FCu;
label_2585fc:
    // 0x2585fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2585fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258600: 0xc08c698  jal         func_231A60
    ctx->pc = 0x258600u;
    SET_GPR_U32(ctx, 31, 0x258608u);
    ctx->pc = 0x258604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258600u;
            // 0x258604: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258608u; }
        if (ctx->pc != 0x258608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258608u; }
        if (ctx->pc != 0x258608u) { return; }
    }
    ctx->pc = 0x258608u;
label_258608:
    // 0x258608: 0x1620ffe7  bnez        $s1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x258608u;
    {
        const bool branch_taken_0x258608 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x25860Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258608u;
            // 0x25860c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258608) {
            ctx->pc = 0x2585A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2585a8;
        }
    }
    ctx->pc = 0x258610u;
    // 0x258610: 0xc08a8cc  jal         func_22A330
    ctx->pc = 0x258610u;
    SET_GPR_U32(ctx, 31, 0x258618u);
    ctx->pc = 0x258614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258610u;
            // 0x258614: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A330u;
    if (runtime->hasFunction(0x22A330u)) {
        auto targetFn = runtime->lookupFunction(0x22A330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258618u; }
        if (ctx->pc != 0x258618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A330_0x22a330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258618u; }
        if (ctx->pc != 0x258618u) { return; }
    }
    ctx->pc = 0x258618u;
label_258618:
    // 0x258618: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x258618u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25861c: 0x0  nop
    ctx->pc = 0x25861cu;
    // NOP
label_258620:
    // 0x258620: 0x1220005d  beqz        $s1, . + 4 + (0x5D << 2)
    ctx->pc = 0x258620u;
    {
        const bool branch_taken_0x258620 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x258624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258620u;
            // 0x258624: 0x3c17003a  lui         $s7, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258620) {
            ctx->pc = 0x258798u;
            goto label_258798;
        }
    }
    ctx->pc = 0x258628u;
    // 0x258628: 0x8ee2f9e8  lw          $v0, -0x618($s7)
    ctx->pc = 0x258628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294965736)));
    // 0x25862c: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x25862cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x258630: 0x2c4300e1  sltiu       $v1, $v0, 0xE1
    ctx->pc = 0x258630u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)225) ? 1 : 0);
    // 0x258634: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x258634u;
    {
        const bool branch_taken_0x258634 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x258638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258634u;
            // 0x258638: 0x2103c  dsll32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258634) {
            ctx->pc = 0x258650u;
            goto label_258650;
        }
    }
    ctx->pc = 0x25863Cu;
    // 0x25863c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x25863cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x258640: 0x53102d  daddu       $v0, $v0, $s3
    ctx->pc = 0x258640u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 19));
    // 0x258644: 0x28420801  slti        $v0, $v0, 0x801
    ctx->pc = 0x258644u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2049) ? 1 : 0);
    // 0x258648: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x258648u;
    {
        const bool branch_taken_0x258648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x258648) {
            ctx->pc = 0x2586D4u;
            goto label_2586d4;
        }
    }
    ctx->pc = 0x258650u;
label_258650:
    // 0x258650: 0xc08c682  jal         func_231A08
    ctx->pc = 0x258650u;
    SET_GPR_U32(ctx, 31, 0x258658u);
    ctx->pc = 0x231A08u;
    if (runtime->hasFunction(0x231A08u)) {
        auto targetFn = runtime->lookupFunction(0x231A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258658u; }
        if (ctx->pc != 0x258658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A08_0x231a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258658u; }
        if (ctx->pc != 0x258658u) { return; }
    }
    ctx->pc = 0x258658u;
label_258658:
    // 0x258658: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x258658u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25865c: 0xc098552  jal         func_261548
    ctx->pc = 0x25865Cu;
    SET_GPR_U32(ctx, 31, 0x258664u);
    ctx->pc = 0x258660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25865Cu;
            // 0x258660: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (runtime->hasFunction(0x261548u)) {
        auto targetFn = runtime->lookupFunction(0x261548u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258664u; }
        if (ctx->pc != 0x258664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261548_0x261548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258664u; }
        if (ctx->pc != 0x258664u) { return; }
    }
    ctx->pc = 0x258664u;
label_258664:
    // 0x258664: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x258664u;
    {
        const bool branch_taken_0x258664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x258668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258664u;
            // 0x258668: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258664) {
            ctx->pc = 0x258680u;
            goto label_258680;
        }
    }
    ctx->pc = 0x25866Cu;
    // 0x25866c: 0xc08a8ec  jal         func_22A3B0
    ctx->pc = 0x25866Cu;
    SET_GPR_U32(ctx, 31, 0x258674u);
    ctx->pc = 0x258670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25866Cu;
            // 0x258670: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A3B0u;
    if (runtime->hasFunction(0x22A3B0u)) {
        auto targetFn = runtime->lookupFunction(0x22A3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258674u; }
        if (ctx->pc != 0x258674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A3B0_0x22a3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258674u; }
        if (ctx->pc != 0x258674u) { return; }
    }
    ctx->pc = 0x258674u;
label_258674:
    // 0x258674: 0xc098552  jal         func_261548
    ctx->pc = 0x258674u;
    SET_GPR_U32(ctx, 31, 0x25867Cu);
    ctx->pc = 0x258678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258674u;
            // 0x258678: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (runtime->hasFunction(0x261548u)) {
        auto targetFn = runtime->lookupFunction(0x261548u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25867Cu; }
        if (ctx->pc != 0x25867Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261548_0x261548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25867Cu; }
        if (ctx->pc != 0x25867Cu) { return; }
    }
    ctx->pc = 0x25867Cu;
label_25867c:
    // 0x25867c: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x25867cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
label_258680:
    // 0x258680: 0xc08c698  jal         func_231A60
    ctx->pc = 0x258680u;
    SET_GPR_U32(ctx, 31, 0x258688u);
    ctx->pc = 0x258684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258680u;
            // 0x258684: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258688u; }
        if (ctx->pc != 0x258688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258688u; }
        if (ctx->pc != 0x258688u) { return; }
    }
    ctx->pc = 0x258688u;
label_258688:
    // 0x258688: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x258688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x25868c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x25868Cu;
    {
        const bool branch_taken_0x25868c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x258690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25868Cu;
            // 0x258690: 0x24030800  addiu       $v1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25868c) {
            ctx->pc = 0x2586B8u;
            goto label_2586b8;
        }
    }
    ctx->pc = 0x258694u;
    // 0x258694: 0x96220012  lhu         $v0, 0x12($s1)
    ctx->pc = 0x258694u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x258698: 0xae240008  sw          $a0, 0x8($s1)
    ctx->pc = 0x258698u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
    // 0x25869c: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x25869cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9);
    // 0x2586a0: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x2586a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
    // 0x2586a4: 0xa6220012  sh          $v0, 0x12($s1)
    ctx->pc = 0x2586a4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x2586a8: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x2586a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    // 0x2586ac: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x2586acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
    // 0x2586b0: 0xae310038  sw          $s1, 0x38($s1)
    ctx->pc = 0x2586b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 17));
    // 0x2586b4: 0xae310034  sw          $s1, 0x34($s1)
    ctx->pc = 0x2586b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 17));
label_2586b8:
    // 0x2586b8: 0x96220012  lhu         $v0, 0x12($s1)
    ctx->pc = 0x2586b8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x2586bc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2586bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2586c0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2586C0u;
    {
        const bool branch_taken_0x2586c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2586c0) {
            ctx->pc = 0x2586D4u;
            goto label_2586d4;
        }
    }
    ctx->pc = 0x2586C8u;
    // 0x2586c8: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x2586C8u;
    SET_GPR_U32(ctx, 31, 0x2586D0u);
    ctx->pc = 0x2586CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2586C8u;
            // 0x2586cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (runtime->hasFunction(0x22A758u)) {
        auto targetFn = runtime->lookupFunction(0x22A758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2586D0u; }
        if (ctx->pc != 0x2586D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A758_0x22a758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2586D0u; }
        if (ctx->pc != 0x2586D0u) { return; }
    }
    ctx->pc = 0x2586D0u;
label_2586d0:
    // 0x2586d0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2586d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2586d4:
    // 0x2586d4: 0x12200030  beqz        $s1, . + 4 + (0x30 << 2)
    ctx->pc = 0x2586D4u;
    {
        const bool branch_taken_0x2586d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2586D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2586D4u;
            // 0x2586d8: 0x8ee4f9e8  lw          $a0, -0x618($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294965736)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2586d4) {
            ctx->pc = 0x258798u;
            goto label_258798;
        }
    }
    ctx->pc = 0x2586DCu;
    // 0x2586dc: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2586dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2586e0: 0x96220012  lhu         $v0, 0x12($s1)
    ctx->pc = 0x2586e0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x2586e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2586e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2586e8: 0xae3e000c  sw          $fp, 0xC($s1)
    ctx->pc = 0x2586e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 30));
    // 0x2586ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2586ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2586f0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2586F0u;
    {
        const bool branch_taken_0x2586f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2586F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2586F0u;
            // 0x2586f4: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2586f0) {
            ctx->pc = 0x258720u;
            goto label_258720;
        }
    }
    ctx->pc = 0x2586F8u;
    // 0x2586f8: 0x7e2021  addu        $a0, $v1, $fp
    ctx->pc = 0x2586f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x2586fc: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2586fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x258700: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x258700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x258704: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x258704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x258708: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x258708u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x25870c: 0x53102a  slt         $v0, $v0, $s3
    ctx->pc = 0x25870cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x258710: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x258710u;
    {
        const bool branch_taken_0x258710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258710u;
            // 0x258714: 0x8fa20028  lw          $v0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258710) {
            ctx->pc = 0x258738u;
            goto label_258738;
        }
    }
    ctx->pc = 0x258718u;
    // 0x258718: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x258718u;
    {
        const bool branch_taken_0x258718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x258718) {
            ctx->pc = 0x25876Cu;
            goto label_25876c;
        }
    }
    ctx->pc = 0x258720u;
label_258720:
    // 0x258720: 0x7e1021  addu        $v0, $v1, $fp
    ctx->pc = 0x258720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x258724: 0x2442ff00  addiu       $v0, $v0, -0x100
    ctx->pc = 0x258724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967040));
    // 0x258728: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x258728u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x25872c: 0x53102a  slt         $v0, $v0, $s3
    ctx->pc = 0x25872cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x258730: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x258730u;
    {
        const bool branch_taken_0x258730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x258734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258730u;
            // 0x258734: 0x8fa20028  lw          $v0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258730) {
            ctx->pc = 0x25876Cu;
            goto label_25876c;
        }
    }
    ctx->pc = 0x258738u;
label_258738:
    // 0x258738: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x258738u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x25873c: 0x13b83c  dsll32      $s7, $s3, 0
    ctx->pc = 0x25873cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 19) << (32 + 0));
    // 0x258740: 0x17b83f  dsra32      $s7, $s7, 0
    ctx->pc = 0x258740u;
    SET_GPR_S64(ctx, 23, GPR_S64(ctx, 23) >> (32 + 0));
    // 0x258744: 0x8e270008  lw          $a3, 0x8($s1)
    ctx->pc = 0x258744u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x258748: 0x8cc400a8  lw          $a0, 0xA8($a2)
    ctx->pc = 0x258748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 168)));
    // 0x25874c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x25874cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x258750: 0xfe3821  addu        $a3, $a3, $fp
    ctx->pc = 0x258750u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 30)));
    // 0x258754: 0xc08ac18  jal         func_22B060
    ctx->pc = 0x258754u;
    SET_GPR_U32(ctx, 31, 0x25875Cu);
    ctx->pc = 0x258758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258754u;
            // 0x258758: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B060u;
    if (runtime->hasFunction(0x22B060u)) {
        auto targetFn = runtime->lookupFunction(0x22B060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25875Cu; }
        if (ctx->pc != 0x25875Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022B060_0x22b060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25875Cu; }
        if (ctx->pc != 0x25875Cu) { return; }
    }
    ctx->pc = 0x25875Cu;
label_25875c:
    // 0x25875c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x25875cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x258760: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x258760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x258764: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x258764u;
    {
        const bool branch_taken_0x258764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258764u;
            // 0x258768: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258764) {
            ctx->pc = 0x2587A0u;
            goto label_2587a0;
        }
    }
    ctx->pc = 0x25876Cu;
label_25876c:
    // 0x25876c: 0x13b83c  dsll32      $s7, $s3, 0
    ctx->pc = 0x25876cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 19) << (32 + 0));
    // 0x258770: 0x17b83f  dsra32      $s7, $s7, 0
    ctx->pc = 0x258770u;
    SET_GPR_S64(ctx, 23, GPR_S64(ctx, 23) >> (32 + 0));
    // 0x258774: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x258774u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x258778: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x258778u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25877c: 0x8c4400a8  lw          $a0, 0xA8($v0)
    ctx->pc = 0x25877cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x258780: 0xc08aa68  jal         func_22A9A0
    ctx->pc = 0x258780u;
    SET_GPR_U32(ctx, 31, 0x258788u);
    ctx->pc = 0x258784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258780u;
            // 0x258784: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A9A0u;
    if (runtime->hasFunction(0x22A9A0u)) {
        auto targetFn = runtime->lookupFunction(0x22A9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258788u; }
        if (ctx->pc != 0x258788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A9A0_0x22a9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258788u; }
        if (ctx->pc != 0x258788u) { return; }
    }
    ctx->pc = 0x258788u;
label_258788:
    // 0x258788: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x258788u;
    {
        const bool branch_taken_0x258788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25878Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258788u;
            // 0x25878c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258788) {
            ctx->pc = 0x2587A0u;
            goto label_2587a0;
        }
    }
    ctx->pc = 0x258790u;
    // 0x258790: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x258790u;
    SET_GPR_U32(ctx, 31, 0x258798u);
    ctx->pc = 0x258794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258790u;
            // 0x258794: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (runtime->hasFunction(0x22A758u)) {
        auto targetFn = runtime->lookupFunction(0x22A758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258798u; }
        if (ctx->pc != 0x258798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A758_0x22a758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258798u; }
        if (ctx->pc != 0x258798u) { return; }
    }
    ctx->pc = 0x258798u;
label_258798:
    // 0x258798: 0x10000151  b           . + 4 + (0x151 << 2)
    ctx->pc = 0x258798u;
    {
        const bool branch_taken_0x258798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25879Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258798u;
            // 0x25879c: 0x24030069  addiu       $v1, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258798) {
            ctx->pc = 0x258CE0u;
            goto label_258ce0;
        }
    }
    ctx->pc = 0x2587A0u;
label_2587a0:
    // 0x2587a0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2587a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2587a4: 0x36840008  ori         $a0, $s4, 0x8
    ctx->pc = 0x2587a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)8);
    // 0x2587a8: 0xdc620080  ld          $v0, 0x80($v1)
    ctx->pc = 0x2587a8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2587ac: 0x2b3182d  daddu       $v1, $s5, $s3
    ctx->pc = 0x2587acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 19));
    // 0x2587b0: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x2587b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x2587b4: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x2587B4u;
    {
        const bool branch_taken_0x2587b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2587B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2587B4u;
            // 0x2587b8: 0x83a00a  movz        $s4, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2587b4) {
            ctx->pc = 0x258954u;
            goto label_258954;
        }
    }
    ctx->pc = 0x2587BCu;
label_2587bc:
    // 0x2587bc: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x2587bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x2587c0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2587C0u;
    {
        const bool branch_taken_0x2587c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2587C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2587C0u;
            // 0x2587c4: 0x3c04003a  lui         $a0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2587c0) {
            ctx->pc = 0x2587DCu;
            goto label_2587dc;
        }
    }
    ctx->pc = 0x2587C8u;
    // 0x2587c8: 0x24831308  addiu       $v1, $a0, 0x1308
    ctx->pc = 0x2587c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4872));
    // 0x2587cc: 0xdc6200b8  ld          $v0, 0xB8($v1)
    ctx->pc = 0x2587ccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 184)));
    // 0x2587d0: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x2587d0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x2587d4: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2587D4u;
    {
        const bool branch_taken_0x2587d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2587D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2587D4u;
            // 0x2587d8: 0xfc6200b8  sd          $v0, 0xB8($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 184), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2587d4) {
            ctx->pc = 0x25885Cu;
            goto label_25885c;
        }
    }
    ctx->pc = 0x2587DCu;
label_2587dc:
    // 0x2587dc: 0x32820007  andi        $v0, $s4, 0x7
    ctx->pc = 0x2587dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)7);
    // 0x2587e0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2587E0u;
    {
        const bool branch_taken_0x2587e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2587E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2587E0u;
            // 0x2587e4: 0x3c06003a  lui         $a2, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2587e0) {
            ctx->pc = 0x2587FCu;
            goto label_2587fc;
        }
    }
    ctx->pc = 0x2587E8u;
    // 0x2587e8: 0x24c31308  addiu       $v1, $a2, 0x1308
    ctx->pc = 0x2587e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4872));
    // 0x2587ec: 0xdc6200d8  ld          $v0, 0xD8($v1)
    ctx->pc = 0x2587ecu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 216)));
    // 0x2587f0: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x2587f0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x2587f4: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2587F4u;
    {
        const bool branch_taken_0x2587f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2587F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2587F4u;
            // 0x2587f8: 0xfc6200d8  sd          $v0, 0xD8($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 216), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2587f4) {
            ctx->pc = 0x25885Cu;
            goto label_25885c;
        }
    }
    ctx->pc = 0x2587FCu;
label_2587fc:
    // 0x2587fc: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x2587fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x258800: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x258800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x258804: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x258804u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x258808: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x258808u;
    {
        const bool branch_taken_0x258808 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x25880Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258808u;
            // 0x25880c: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258808) {
            ctx->pc = 0x258848u;
            goto label_258848;
        }
    }
    ctx->pc = 0x258810u;
    // 0x258810: 0x24431308  addiu       $v1, $v0, 0x1308
    ctx->pc = 0x258810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4872));
    // 0x258814: 0xdc6200c8  ld          $v0, 0xC8($v1)
    ctx->pc = 0x258814u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 200)));
    // 0x258818: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x258818u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x25881c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x25881Cu;
    {
        const bool branch_taken_0x25881c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25881Cu;
            // 0x258820: 0xfc6200c8  sd          $v0, 0xC8($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 200), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25881c) {
            ctx->pc = 0x25885Cu;
            goto label_25885c;
        }
    }
    ctx->pc = 0x258824u;
label_258824:
    // 0x258824: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x258824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x258828: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x258828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x25882c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x25882cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x258830: 0xa6230012  sh          $v1, 0x12($s1)
    ctx->pc = 0x258830u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 3));
    // 0x258834: 0xa6230010  sh          $v1, 0x10($s1)
    ctx->pc = 0x258834u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x258838: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x258838u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x25883c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x25883cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x258840: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x258840u;
    {
        const bool branch_taken_0x258840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258840u;
            // 0x258844: 0xae20001c  sw          $zero, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258840) {
            ctx->pc = 0x258890u;
            goto label_258890;
        }
    }
    ctx->pc = 0x258848u;
label_258848:
    // 0x258848: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x258848u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x25884c: 0x24831308  addiu       $v1, $a0, 0x1308
    ctx->pc = 0x25884cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4872));
    // 0x258850: 0xdc6200d0  ld          $v0, 0xD0($v1)
    ctx->pc = 0x258850u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 208)));
    // 0x258854: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x258854u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x258858: 0xfc6200d0  sd          $v0, 0xD0($v1)
    ctx->pc = 0x258858u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 208), GPR_U64(ctx, 2));
label_25885c:
    // 0x25885c: 0xc08c682  jal         func_231A08
    ctx->pc = 0x25885Cu;
    SET_GPR_U32(ctx, 31, 0x258864u);
    ctx->pc = 0x231A08u;
    if (runtime->hasFunction(0x231A08u)) {
        auto targetFn = runtime->lookupFunction(0x231A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258864u; }
        if (ctx->pc != 0x258864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A08_0x231a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258864u; }
        if (ctx->pc != 0x258864u) { return; }
    }
    ctx->pc = 0x258864u;
label_258864:
    // 0x258864: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x258864u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258868: 0xc098552  jal         func_261548
    ctx->pc = 0x258868u;
    SET_GPR_U32(ctx, 31, 0x258870u);
    ctx->pc = 0x25886Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258868u;
            // 0x25886c: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (runtime->hasFunction(0x261548u)) {
        auto targetFn = runtime->lookupFunction(0x261548u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258870u; }
        if (ctx->pc != 0x258870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261548_0x261548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258870u; }
        if (ctx->pc != 0x258870u) { return; }
    }
    ctx->pc = 0x258870u;
label_258870:
    // 0x258870: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x258870u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258874: 0xc08c698  jal         func_231A60
    ctx->pc = 0x258874u;
    SET_GPR_U32(ctx, 31, 0x25887Cu);
    ctx->pc = 0x258878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258874u;
            // 0x258878: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25887Cu; }
        if (ctx->pc != 0x25887Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25887Cu; }
        if (ctx->pc != 0x25887Cu) { return; }
    }
    ctx->pc = 0x25887Cu;
label_25887c:
    // 0x25887c: 0x1620ffe9  bnez        $s1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x25887Cu;
    {
        const bool branch_taken_0x25887c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x258880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25887Cu;
            // 0x258880: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25887c) {
            ctx->pc = 0x258824u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_258824;
        }
    }
    ctx->pc = 0x258884u;
    // 0x258884: 0xc08a8cc  jal         func_22A330
    ctx->pc = 0x258884u;
    SET_GPR_U32(ctx, 31, 0x25888Cu);
    ctx->pc = 0x258888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258884u;
            // 0x258888: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A330u;
    if (runtime->hasFunction(0x22A330u)) {
        auto targetFn = runtime->lookupFunction(0x22A330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25888Cu; }
        if (ctx->pc != 0x25888Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A330_0x22a330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25888Cu; }
        if (ctx->pc != 0x25888Cu) { return; }
    }
    ctx->pc = 0x25888Cu;
label_25888c:
    // 0x25888c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25888cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_258890:
    // 0x258890: 0x1220ffc1  beqz        $s1, . + 4 + (-0x3F << 2)
    ctx->pc = 0x258890u;
    {
        const bool branch_taken_0x258890 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x258894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258890u;
            // 0x258894: 0x3c15003a  lui         $s5, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258890) {
            ctx->pc = 0x258798u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_258798;
        }
    }
    ctx->pc = 0x258898u;
    // 0x258898: 0x8ea2f9e8  lw          $v0, -0x618($s5)
    ctx->pc = 0x258898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294965736)));
    // 0x25889c: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x25889cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x2588a0: 0x2c4200e1  sltiu       $v0, $v0, 0xE1
    ctx->pc = 0x2588a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)225) ? 1 : 0);
    // 0x2588a4: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2588A4u;
    {
        const bool branch_taken_0x2588a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2588a4) {
            ctx->pc = 0x258934u;
            goto label_258934;
        }
    }
    ctx->pc = 0x2588ACu;
    // 0x2588ac: 0xc08c682  jal         func_231A08
    ctx->pc = 0x2588ACu;
    SET_GPR_U32(ctx, 31, 0x2588B4u);
    ctx->pc = 0x231A08u;
    if (runtime->hasFunction(0x231A08u)) {
        auto targetFn = runtime->lookupFunction(0x231A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2588B4u; }
        if (ctx->pc != 0x2588B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A08_0x231a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2588B4u; }
        if (ctx->pc != 0x2588B4u) { return; }
    }
    ctx->pc = 0x2588B4u;
label_2588b4:
    // 0x2588b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2588b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2588b8: 0xc098552  jal         func_261548
    ctx->pc = 0x2588B8u;
    SET_GPR_U32(ctx, 31, 0x2588C0u);
    ctx->pc = 0x2588BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2588B8u;
            // 0x2588bc: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (runtime->hasFunction(0x261548u)) {
        auto targetFn = runtime->lookupFunction(0x261548u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2588C0u; }
        if (ctx->pc != 0x2588C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261548_0x261548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2588C0u; }
        if (ctx->pc != 0x2588C0u) { return; }
    }
    ctx->pc = 0x2588C0u;
label_2588c0:
    // 0x2588c0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2588C0u;
    {
        const bool branch_taken_0x2588c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2588C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2588C0u;
            // 0x2588c4: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2588c0) {
            ctx->pc = 0x2588E0u;
            goto label_2588e0;
        }
    }
    ctx->pc = 0x2588C8u;
    // 0x2588c8: 0xc08a8ec  jal         func_22A3B0
    ctx->pc = 0x2588C8u;
    SET_GPR_U32(ctx, 31, 0x2588D0u);
    ctx->pc = 0x2588CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2588C8u;
            // 0x2588cc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A3B0u;
    if (runtime->hasFunction(0x22A3B0u)) {
        auto targetFn = runtime->lookupFunction(0x22A3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2588D0u; }
        if (ctx->pc != 0x2588D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A3B0_0x22a3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2588D0u; }
        if (ctx->pc != 0x2588D0u) { return; }
    }
    ctx->pc = 0x2588D0u;
label_2588d0:
    // 0x2588d0: 0xc098552  jal         func_261548
    ctx->pc = 0x2588D0u;
    SET_GPR_U32(ctx, 31, 0x2588D8u);
    ctx->pc = 0x2588D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2588D0u;
            // 0x2588d4: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (runtime->hasFunction(0x261548u)) {
        auto targetFn = runtime->lookupFunction(0x261548u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2588D8u; }
        if (ctx->pc != 0x2588D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261548_0x261548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2588D8u; }
        if (ctx->pc != 0x2588D8u) { return; }
    }
    ctx->pc = 0x2588D8u;
label_2588d8:
    // 0x2588d8: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x2588d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x2588dc: 0x0  nop
    ctx->pc = 0x2588dcu;
    // NOP
label_2588e0:
    // 0x2588e0: 0xc08c698  jal         func_231A60
    ctx->pc = 0x2588E0u;
    SET_GPR_U32(ctx, 31, 0x2588E8u);
    ctx->pc = 0x2588E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2588E0u;
            // 0x2588e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2588E8u; }
        if (ctx->pc != 0x2588E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2588E8u; }
        if (ctx->pc != 0x2588E8u) { return; }
    }
    ctx->pc = 0x2588E8u;
label_2588e8:
    // 0x2588e8: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x2588e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2588ec: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2588ECu;
    {
        const bool branch_taken_0x2588ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2588F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2588ECu;
            // 0x2588f0: 0x24030800  addiu       $v1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2588ec) {
            ctx->pc = 0x258918u;
            goto label_258918;
        }
    }
    ctx->pc = 0x2588F4u;
    // 0x2588f4: 0x96220012  lhu         $v0, 0x12($s1)
    ctx->pc = 0x2588f4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x2588f8: 0xae240008  sw          $a0, 0x8($s1)
    ctx->pc = 0x2588f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
    // 0x2588fc: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x2588fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9);
    // 0x258900: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x258900u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
    // 0x258904: 0xa6220012  sh          $v0, 0x12($s1)
    ctx->pc = 0x258904u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x258908: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x258908u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    // 0x25890c: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x25890cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
    // 0x258910: 0xae310038  sw          $s1, 0x38($s1)
    ctx->pc = 0x258910u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 17));
    // 0x258914: 0xae310034  sw          $s1, 0x34($s1)
    ctx->pc = 0x258914u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 17));
label_258918:
    // 0x258918: 0x96220012  lhu         $v0, 0x12($s1)
    ctx->pc = 0x258918u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x25891c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25891cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x258920: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x258920u;
    {
        const bool branch_taken_0x258920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x258920) {
            ctx->pc = 0x258934u;
            goto label_258934;
        }
    }
    ctx->pc = 0x258928u;
    // 0x258928: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x258928u;
    SET_GPR_U32(ctx, 31, 0x258930u);
    ctx->pc = 0x25892Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258928u;
            // 0x25892c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (runtime->hasFunction(0x22A758u)) {
        auto targetFn = runtime->lookupFunction(0x22A758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258930u; }
        if (ctx->pc != 0x258930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A758_0x22a758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258930u; }
        if (ctx->pc != 0x258930u) { return; }
    }
    ctx->pc = 0x258930u;
label_258930:
    // 0x258930: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x258930u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_258934:
    // 0x258934: 0x1220ff98  beqz        $s1, . + 4 + (-0x68 << 2)
    ctx->pc = 0x258934u;
    {
        const bool branch_taken_0x258934 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x258938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258934u;
            // 0x258938: 0x8ea3f9e8  lw          $v1, -0x618($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294965736)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258934) {
            ctx->pc = 0x258798u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_258798;
        }
    }
    ctx->pc = 0x25893Cu;
    // 0x25893c: 0x13b83c  dsll32      $s7, $s3, 0
    ctx->pc = 0x25893cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 19) << (32 + 0));
    // 0x258940: 0x17b83f  dsra32      $s7, $s7, 0
    ctx->pc = 0x258940u;
    SET_GPR_S64(ctx, 23, GPR_S64(ctx, 23) >> (32 + 0));
    // 0x258944: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x258944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x258948: 0xae3e000c  sw          $fp, 0xC($s1)
    ctx->pc = 0x258948u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 30));
    // 0x25894c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25894cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x258950: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x258950u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_258954:
    // 0x258954: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x258954u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x258958: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x258958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25895c: 0x8fa6005c  lw          $a2, 0x5C($sp)
    ctx->pc = 0x25895cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x258960: 0x14c20004  bne         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x258960u;
    {
        const bool branch_taken_0x258960 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x258964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258960u;
            // 0x258964: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258960) {
            ctx->pc = 0x258974u;
            goto label_258974;
        }
    }
    ctx->pc = 0x258968u;
    // 0x258968: 0x8e350008  lw          $s5, 0x8($s1)
    ctx->pc = 0x258968u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x25896c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25896Cu;
    {
        const bool branch_taken_0x25896c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25896Cu;
            // 0x258970: 0x26b00014  addiu       $s0, $s5, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25896c) {
            ctx->pc = 0x258978u;
            goto label_258978;
        }
    }
    ctx->pc = 0x258974u;
label_258974:
    // 0x258974: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x258974u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_258978:
    // 0x258978: 0x8e43002c  lw          $v1, 0x2C($s2)
    ctx->pc = 0x258978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x25897c: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x25897Cu;
    {
        const bool branch_taken_0x25897c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25897c) {
            ctx->pc = 0x258980u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x25897Cu;
            // 0x258980: 0x8c62000c  lw          $v0, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x258998u;
            goto label_258998;
        }
    }
    ctx->pc = 0x258984u;
    // 0x258984: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x258984u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x258988: 0xc08b5e0  jal         func_22D780
    ctx->pc = 0x258988u;
    SET_GPR_U32(ctx, 31, 0x258990u);
    ctx->pc = 0x25898Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258988u;
            // 0x25898c: 0x24846f98  addiu       $a0, $a0, 0x6F98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28568));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D780u;
    if (runtime->hasFunction(0x22D780u)) {
        auto targetFn = runtime->lookupFunction(0x22D780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258990u; }
        if (ctx->pc != 0x258990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D780_0x22d780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258990u; }
        if (ctx->pc != 0x258990u) { return; }
    }
    ctx->pc = 0x258990u;
label_258990:
    // 0x258990: 0x8e43002c  lw          $v1, 0x2C($s2)
    ctx->pc = 0x258990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x258994: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x258994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_258998:
    // 0x258998: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x258998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25899c: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x25899cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2589a0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2589A0u;
    {
        const bool branch_taken_0x2589a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2589A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2589A0u;
            // 0x2589a4: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2589a0) {
            ctx->pc = 0x2589B4u;
            goto label_2589b4;
        }
    }
    ctx->pc = 0x2589A8u;
    // 0x2589a8: 0xc08b5e0  jal         func_22D780
    ctx->pc = 0x2589A8u;
    SET_GPR_U32(ctx, 31, 0x2589B0u);
    ctx->pc = 0x2589ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2589A8u;
            // 0x2589ac: 0x24846f98  addiu       $a0, $a0, 0x6F98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28568));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D780u;
    if (runtime->hasFunction(0x22D780u)) {
        auto targetFn = runtime->lookupFunction(0x22D780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2589B0u; }
        if (ctx->pc != 0x2589B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D780_0x22d780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2589B0u; }
        if (ctx->pc != 0x2589B0u) { return; }
    }
    ctx->pc = 0x2589B0u;
label_2589b0:
    // 0x2589b0: 0x8e43002c  lw          $v1, 0x2C($s2)
    ctx->pc = 0x2589b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_2589b4:
    // 0x2589b4: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2589b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2589b8: 0x8fa60060  lw          $a2, 0x60($sp)
    ctx->pc = 0x2589b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2589bc: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x2589BCu;
    SET_GPR_U32(ctx, 31, 0x2589C4u);
    ctx->pc = 0x2589C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2589BCu;
            // 0x2589c0: 0x8e250008  lw          $a1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (runtime->hasFunction(0x22D3E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2589C4u; }
        if (ctx->pc != 0x2589C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D3E0_0x22d3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2589C4u; }
        if (ctx->pc != 0x2589C4u) { return; }
    }
    ctx->pc = 0x2589C4u;
label_2589c4:
    // 0x2589c4: 0x56600008  bnel        $s3, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2589C4u;
    {
        const bool branch_taken_0x2589c4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x2589c4) {
            ctx->pc = 0x2589C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2589C4u;
            // 0x2589c8: 0x8e440044  lw          $a0, 0x44($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2589E8u;
            goto label_2589e8;
        }
    }
    ctx->pc = 0x2589CCu;
    // 0x2589cc: 0x32820003  andi        $v0, $s4, 0x3
    ctx->pc = 0x2589ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)3);
    // 0x2589d0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2589D0u;
    {
        const bool branch_taken_0x2589d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2589d0) {
            ctx->pc = 0x2589D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2589D0u;
            // 0x2589d4: 0x8e440044  lw          $a0, 0x44($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2589E8u;
            goto label_2589e8;
        }
    }
    ctx->pc = 0x2589D8u;
    // 0x2589d8: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x2589d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2589dc: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2589DCu;
    {
        const bool branch_taken_0x2589dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2589dc) {
            ctx->pc = 0x2589E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2589DCu;
            // 0x2589e0: 0x8e440080  lw          $a0, 0x80($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2589E8u;
            goto label_2589e8;
        }
    }
    ctx->pc = 0x2589E4u;
    // 0x2589e4: 0x8e440044  lw          $a0, 0x44($s2)
    ctx->pc = 0x2589e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_2589e8:
    // 0x2589e8: 0xc08a254  jal         func_228950
    ctx->pc = 0x2589E8u;
    SET_GPR_U32(ctx, 31, 0x2589F0u);
    ctx->pc = 0x228950u;
    if (runtime->hasFunction(0x228950u)) {
        auto targetFn = runtime->lookupFunction(0x228950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2589F0u; }
        if (ctx->pc != 0x2589F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228950_0x228950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2589F0u; }
        if (ctx->pc != 0x2589F0u) { return; }
    }
    ctx->pc = 0x2589F0u;
label_2589f0:
    // 0x2589f0: 0xaa020007  swl         $v0, 0x7($s0)
    ctx->pc = 0x2589f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2589f4: 0xba020004  swr         $v0, 0x4($s0)
    ctx->pc = 0x2589f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2589f8: 0xc08a254  jal         func_228950
    ctx->pc = 0x2589F8u;
    SET_GPR_U32(ctx, 31, 0x258A00u);
    ctx->pc = 0x2589FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2589F8u;
            // 0x2589fc: 0x8e440070  lw          $a0, 0x70($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (runtime->hasFunction(0x228950u)) {
        auto targetFn = runtime->lookupFunction(0x228950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258A00u; }
        if (ctx->pc != 0x258A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228950_0x228950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258A00u; }
        if (ctx->pc != 0x258A00u) { return; }
    }
    ctx->pc = 0x258A00u;
label_258a00:
    // 0x258a00: 0xaa02000b  swl         $v0, 0xB($s0)
    ctx->pc = 0x258a00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x258a04: 0xba020008  swr         $v0, 0x8($s0)
    ctx->pc = 0x258a04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x258a08: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x258a08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x258a0c: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x258A0Cu;
    {
        const bool branch_taken_0x258a0c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x258A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258A0Cu;
            // 0x258a10: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258a0c) {
            ctx->pc = 0x258A3Cu;
            goto label_258a3c;
        }
    }
    ctx->pc = 0x258A14u;
    // 0x258a14: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x258A14u;
    SET_GPR_U32(ctx, 31, 0x258A1Cu);
    ctx->pc = 0x258A18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258A14u;
            // 0x258a18: 0x26050014  addiu       $a1, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (runtime->hasFunction(0x22D3E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258A1Cu; }
        if (ctx->pc != 0x258A1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D3E0_0x22d3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258A1Cu; }
        if (ctx->pc != 0x258A1Cu) { return; }
    }
    ctx->pc = 0x258A1Cu;
label_258a1c:
    // 0x258a1c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x258a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x258a20: 0x9203000c  lbu         $v1, 0xC($s0)
    ctx->pc = 0x258a20u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x258a24: 0x24820014  addiu       $v0, $a0, 0x14
    ctx->pc = 0x258a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x258a28: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x258a28u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x258a2c: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x258a2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x258a30: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x258a30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x258a34: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x258a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x258a38: 0xa203000c  sb          $v1, 0xC($s0)
    ctx->pc = 0x258a38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 3));
label_258a3c:
    // 0x258a3c: 0xa214000d  sb          $s4, 0xD($s0)
    ctx->pc = 0x258a3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 20));
    // 0x258a40: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x258a40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x258a44: 0xdcc20050  ld          $v0, 0x50($a2)
    ctx->pc = 0x258a44u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x258a48: 0x210ba  dsrl        $v0, $v0, 2
    ctx->pc = 0x258a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 2);
    // 0x258a4c: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x258a4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x258a50: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x258A50u;
    {
        const bool branch_taken_0x258a50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258A50u;
            // 0x258a54: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258a50) {
            ctx->pc = 0x258A60u;
            goto label_258a60;
        }
    }
    ctx->pc = 0x258A58u;
    // 0x258a58: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x258a58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x258a5c: 0x2b00b  movn        $s6, $zero, $v0
    ctx->pc = 0x258a5cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 0));
label_258a60:
    // 0x258a60: 0x924400b5  lbu         $a0, 0xB5($s2)
    ctx->pc = 0x258a60u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 181)));
    // 0x258a64: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x258a64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x258a68: 0x8e460070  lw          $a2, 0x70($s2)
    ctx->pc = 0x258a68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x258a6c: 0x8e42007c  lw          $v0, 0x7C($s2)
    ctx->pc = 0x258a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
    // 0x258a70: 0x831814  dsllv       $v1, $v1, $a0
    ctx->pc = 0x258a70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x258a74: 0x76282a  slt         $a1, $v1, $s6
    ctx->pc = 0x258a74u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x258a78: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x258a78u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x258a7c: 0x65b00b  movn        $s6, $v1, $a1
    ctx->pc = 0x258a7cu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 3));
    // 0x258a80: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x258a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x258a84: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x258a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x258a88: 0x2c2182a  slt         $v1, $s6, $v0
    ctx->pc = 0x258a88u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x258a8c: 0x43b00b  movn        $s6, $v0, $v1
    ctx->pc = 0x258a8cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 2));
    // 0x258a90: 0x962017  dsrav       $a0, $s6, $a0
    ctx->pc = 0x258a90u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 22) >> (GPR_U32(ctx, 4) & 0x3F));
    // 0x258a94: 0xc08a262  jal         func_228988
    ctx->pc = 0x258A94u;
    SET_GPR_U32(ctx, 31, 0x258A9Cu);
    ctx->pc = 0x258A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258A94u;
            // 0x258a98: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (runtime->hasFunction(0x228988u)) {
        auto targetFn = runtime->lookupFunction(0x228988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258A9Cu; }
        if (ctx->pc != 0x258A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228988_0x228988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258A9Cu; }
        if (ctx->pc != 0x258A9Cu) { return; }
    }
    ctx->pc = 0x258A9Cu;
label_258a9c:
    // 0x258a9c: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x258a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x258aa0: 0xa202000e  sb          $v0, 0xE($s0)
    ctx->pc = 0x258aa0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 14), (uint8_t)GPR_U32(ctx, 2));
    // 0x258aa4: 0xa203000f  sb          $v1, 0xF($s0)
    ctx->pc = 0x258aa4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 3));
    // 0x258aa8: 0x8e440048  lw          $a0, 0x48($s2)
    ctx->pc = 0x258aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x258aac: 0x8e420044  lw          $v0, 0x44($s2)
    ctx->pc = 0x258aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x258ab0: 0x821823  subu        $v1, $a0, $v0
    ctx->pc = 0x258ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x258ab4: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x258AB4u;
    {
        const bool branch_taken_0x258ab4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x258AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258AB4u;
            // 0x258ab8: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x258ab4) {
            ctx->pc = 0x258AE8u;
            goto label_258ae8;
        }
    }
    ctx->pc = 0x258ABCu;
    // 0x258abc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x258abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258ac0: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x258ac0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x258ac4: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x258ac4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x258ac8: 0xc08a262  jal         func_228988
    ctx->pc = 0x258AC8u;
    SET_GPR_U32(ctx, 31, 0x258AD0u);
    ctx->pc = 0x258ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258AC8u;
            // 0x258acc: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (runtime->hasFunction(0x228988u)) {
        auto targetFn = runtime->lookupFunction(0x228988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258AD0u; }
        if (ctx->pc != 0x258AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228988_0x228988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258AD0u; }
        if (ctx->pc != 0x258AD0u) { return; }
    }
    ctx->pc = 0x258AD0u;
label_258ad0:
    // 0x258ad0: 0x36830020  ori         $v1, $s4, 0x20
    ctx->pc = 0x258ad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)32);
    // 0x258ad4: 0x22202  srl         $a0, $v0, 8
    ctx->pc = 0x258ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x258ad8: 0xa203000d  sb          $v1, 0xD($s0)
    ctx->pc = 0x258ad8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 3));
    // 0x258adc: 0xa2040013  sb          $a0, 0x13($s0)
    ctx->pc = 0x258adcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 19), (uint8_t)GPR_U32(ctx, 4));
    // 0x258ae0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x258AE0u;
    {
        const bool branch_taken_0x258ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258AE0u;
            // 0x258ae4: 0xa2020012  sb          $v0, 0x12($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 18), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258ae0) {
            ctx->pc = 0x258AF0u;
            goto label_258af0;
        }
    }
    ctx->pc = 0x258AE8u;
label_258ae8:
    // 0x258ae8: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x258ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x258aec: 0xae420048  sw          $v0, 0x48($s2)
    ctx->pc = 0x258aecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 2));
label_258af0:
    // 0x258af0: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x258af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x258af4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x258af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x258af8: 0x5462001a  bnel        $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x258AF8u;
    {
        const bool branch_taken_0x258af8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x258af8) {
            ctx->pc = 0x258AFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x258AF8u;
            // 0x258afc: 0x82420026  lb          $v0, 0x26($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 38)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x258B64u;
            goto label_258b64;
        }
    }
    ctx->pc = 0x258B00u;
    // 0x258b00: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x258b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x258b04: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x258b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x258b08: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x258b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x258b0c: 0x262102d  daddu       $v0, $s3, $v0
    ctx->pc = 0x258b0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 2));
    // 0x258b10: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x258B10u;
    {
        const bool branch_taken_0x258b10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258B10u;
            // 0x258b14: 0x24820014  addiu       $v0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258b10) {
            ctx->pc = 0x258B34u;
            goto label_258b34;
        }
    }
    ctx->pc = 0x258B18u;
    // 0x258b18: 0x3264ffff  andi        $a0, $s3, 0xFFFF
    ctx->pc = 0x258b18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x258b1c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x258b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x258b20: 0xc08a262  jal         func_228988
    ctx->pc = 0x258B20u;
    SET_GPR_U32(ctx, 31, 0x258B28u);
    ctx->pc = 0x258B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258B20u;
            // 0x258b24: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (runtime->hasFunction(0x228988u)) {
        auto targetFn = runtime->lookupFunction(0x228988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258B28u; }
        if (ctx->pc != 0x258B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228988_0x228988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258B28u; }
        if (ctx->pc != 0x258B28u) { return; }
    }
    ctx->pc = 0x258B28u;
label_258b28:
    // 0x258b28: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x258b28u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x258b2c: 0xa2a2000a  sb          $v0, 0xA($s5)
    ctx->pc = 0x258b2cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 10), (uint8_t)GPR_U32(ctx, 2));
    // 0x258b30: 0xa2a3000b  sb          $v1, 0xB($s5)
    ctx->pc = 0x258b30u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 11), (uint8_t)GPR_U32(ctx, 3));
label_258b34:
    // 0x258b34: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x258b34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258b38: 0xc048c96  jal         func_123258
    ctx->pc = 0x258B38u;
    SET_GPR_U32(ctx, 31, 0x258B40u);
    ctx->pc = 0x258B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258B38u;
            // 0x258b3c: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123258u;
    if (runtime->hasFunction(0x123258u)) {
        auto targetFn = runtime->lookupFunction(0x123258u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258B40u; }
        if (ctx->pc != 0x258B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123258_0x123258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258B40u; }
        if (ctx->pc != 0x258B40u) { return; }
    }
    ctx->pc = 0x258B40u;
label_258b40:
    // 0x258b40: 0xa2000010  sb          $zero, 0x10($s0)
    ctx->pc = 0x258b40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x258b44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x258b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258b48: 0xa2000011  sb          $zero, 0x11($s0)
    ctx->pc = 0x258b48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 17), (uint8_t)GPR_U32(ctx, 0));
    // 0x258b4c: 0xc092d7e  jal         func_24B5F8
    ctx->pc = 0x258B4Cu;
    SET_GPR_U32(ctx, 31, 0x258B54u);
    ctx->pc = 0x258B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258B4Cu;
            // 0x258b50: 0x3d72821  addu        $a1, $fp, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24B5F8u;
    if (runtime->hasFunction(0x24B5F8u)) {
        auto targetFn = runtime->lookupFunction(0x24B5F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258B54u; }
        if (ctx->pc != 0x258B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0024B5F8_0x24b5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258B54u; }
        if (ctx->pc != 0x258B54u) { return; }
    }
    ctx->pc = 0x258B54u;
label_258b54:
    // 0x258b54: 0x21a3a  dsrl        $v1, $v0, 8
    ctx->pc = 0x258b54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> 8);
    // 0x258b58: 0xa2020010  sb          $v0, 0x10($s0)
    ctx->pc = 0x258b58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x258b5c: 0xa2030011  sb          $v1, 0x11($s0)
    ctx->pc = 0x258b5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 17), (uint8_t)GPR_U32(ctx, 3));
    // 0x258b60: 0x82420026  lb          $v0, 0x26($s2)
    ctx->pc = 0x258b60u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 38)));
label_258b64:
    // 0x258b64: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x258B64u;
    {
        const bool branch_taken_0x258b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x258b64) {
            ctx->pc = 0x258B68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x258B64u;
            // 0x258b68: 0x8e440044  lw          $a0, 0x44($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x258B7Cu;
            goto label_258b7c;
        }
    }
    ctx->pc = 0x258B6Cu;
    // 0x258b6c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x258b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x258b70: 0x54400028  bnel        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x258B70u;
    {
        const bool branch_taken_0x258b70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x258b70) {
            ctx->pc = 0x258B74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x258B70u;
            // 0x258b74: 0x8e430044  lw          $v1, 0x44($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x258C14u;
            goto label_258c14;
        }
    }
    ctx->pc = 0x258B78u;
    // 0x258b78: 0x8e440044  lw          $a0, 0x44($s2)
    ctx->pc = 0x258b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_258b7c:
    // 0x258b7c: 0x32820003  andi        $v0, $s4, 0x3
    ctx->pc = 0x258b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)3);
    // 0x258b80: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x258B80u;
    {
        const bool branch_taken_0x258b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258B80u;
            // 0x258b84: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258b80) {
            ctx->pc = 0x258B94u;
            goto label_258b94;
        }
    }
    ctx->pc = 0x258B88u;
    // 0x258b88: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x258b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x258b8c: 0xae420044  sw          $v0, 0x44($s2)
    ctx->pc = 0x258b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
    // 0x258b90: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x258b90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_258b94:
    // 0x258b94: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x258b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x258b98: 0x1171821  addu        $v1, $t0, $s7
    ctx->pc = 0x258b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 23)));
    // 0x258b9c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x258b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x258ba0: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x258BA0u;
    {
        const bool branch_taken_0x258ba0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x258BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258BA0u;
            // 0x258ba4: 0xae430044  sw          $v1, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258ba0) {
            ctx->pc = 0x258BD4u;
            goto label_258bd4;
        }
    }
    ctx->pc = 0x258BA8u;
    // 0x258ba8: 0x8642009a  lh          $v0, 0x9A($s2)
    ctx->pc = 0x258ba8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 154)));
    // 0x258bac: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x258BACu;
    {
        const bool branch_taken_0x258bac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x258BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258BACu;
            // 0x258bb0: 0xae430080  sw          $v1, 0x80($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258bac) {
            ctx->pc = 0x258BD4u;
            goto label_258bd4;
        }
    }
    ctx->pc = 0x258BB4u;
    // 0x258bb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x258bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x258bb8: 0xae44009c  sw          $a0, 0x9C($s2)
    ctx->pc = 0x258bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 4));
    // 0x258bbc: 0xa642009a  sh          $v0, 0x9A($s2)
    ctx->pc = 0x258bbcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 154), (uint16_t)GPR_U32(ctx, 2));
    // 0x258bc0: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x258bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x258bc4: 0x24c31308  addiu       $v1, $a2, 0x1308
    ctx->pc = 0x258bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4872));
    // 0x258bc8: 0xdc620030  ld          $v0, 0x30($v1)
    ctx->pc = 0x258bc8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x258bcc: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x258bccu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x258bd0: 0xfc620030  sd          $v0, 0x30($v1)
    ctx->pc = 0x258bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 48), GPR_U64(ctx, 2));
label_258bd4:
    // 0x258bd4: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x258bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x258bd8: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x258BD8u;
    {
        const bool branch_taken_0x258bd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x258BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258BD8u;
            // 0x258bdc: 0x8fa30028  lw          $v1, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258bd8) {
            ctx->pc = 0x258C2Cu;
            goto label_258c2c;
        }
    }
    ctx->pc = 0x258BE0u;
    // 0x258be0: 0x8e430044  lw          $v1, 0x44($s2)
    ctx->pc = 0x258be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x258be4: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x258be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x258be8: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x258BE8u;
    {
        const bool branch_taken_0x258be8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x258BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258BE8u;
            // 0x258bec: 0x3c03003a  lui         $v1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258be8) {
            ctx->pc = 0x258C28u;
            goto label_258c28;
        }
    }
    ctx->pc = 0x258BF0u;
    // 0x258bf0: 0x8644001c  lh          $a0, 0x1C($s2)
    ctx->pc = 0x258bf0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x258bf4: 0x8c62f990  lw          $v0, -0x670($v1)
    ctx->pc = 0x258bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294965648)));
    // 0x258bf8: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x258bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x258bfc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x258bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x258c00: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x258C00u;
    {
        const bool branch_taken_0x258c00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x258C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258C00u;
            // 0x258c04: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258c00) {
            ctx->pc = 0x258C28u;
            goto label_258c28;
        }
    }
    ctx->pc = 0x258C08u;
    // 0x258c08: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x258c08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x258c0c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x258C0Cu;
    {
        const bool branch_taken_0x258c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258C0Cu;
            // 0x258c10: 0xa640001a  sh          $zero, 0x1A($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 26), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258c0c) {
            ctx->pc = 0x258C28u;
            goto label_258c28;
        }
    }
    ctx->pc = 0x258C14u;
label_258c14:
    // 0x258c14: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x258c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x258c18: 0x771821  addu        $v1, $v1, $s7
    ctx->pc = 0x258c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x258c1c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x258c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x258c20: 0x5c400001  bgtzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x258C20u;
    {
        const bool branch_taken_0x258c20 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x258c20) {
            ctx->pc = 0x258C24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x258C20u;
            // 0x258c24: 0xae430080  sw          $v1, 0x80($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x258C28u;
            goto label_258c28;
        }
    }
    ctx->pc = 0x258C28u;
label_258c28:
    // 0x258c28: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x258c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_258c2c:
    // 0x258c2c: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x258c2cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x258c30: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x258c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x258c34: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x258C34u;
    {
        const bool branch_taken_0x258c34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258C34u;
            // 0x258c38: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258c34) {
            ctx->pc = 0x258C58u;
            goto label_258c58;
        }
    }
    ctx->pc = 0x258C3Cu;
    // 0x258c3c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x258c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x258c40: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x258C40u;
    {
        const bool branch_taken_0x258c40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x258C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258C40u;
            // 0x258c44: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258c40) {
            ctx->pc = 0x258C58u;
            goto label_258c58;
        }
    }
    ctx->pc = 0x258C48u;
    // 0x258c48: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x258c48u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x258c4c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x258c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x258c50: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x258c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x258c54: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x258c54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_258c58:
    // 0x258c58: 0x3d71021  addu        $v0, $fp, $s7
    ctx->pc = 0x258c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 23)));
    // 0x258c5c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x258c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x258c60: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x258c60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x258c64: 0x8fa6005c  lw          $a2, 0x5C($sp)
    ctx->pc = 0x258c64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x258c68: 0x14c3001b  bne         $a2, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x258C68u;
    {
        const bool branch_taken_0x258c68 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x258C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258C68u;
            // 0x258c6c: 0x2403006a  addiu       $v1, $zero, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258c68) {
            ctx->pc = 0x258CD8u;
            goto label_258cd8;
        }
    }
    ctx->pc = 0x258C70u;
    // 0x258c70: 0x96220018  lhu         $v0, 0x18($s1)
    ctx->pc = 0x258c70u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x258c74: 0x21a3a  dsrl        $v1, $v0, 8
    ctx->pc = 0x258c74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> 8);
    // 0x258c78: 0xa2a20002  sb          $v0, 0x2($s5)
    ctx->pc = 0x258c78u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x258c7c: 0xa2a30003  sb          $v1, 0x3($s5)
    ctx->pc = 0x258c7cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x258c80: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x258c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x258c84: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x258C84u;
    {
        const bool branch_taken_0x258c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258C84u;
            // 0x258c88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258c84) {
            ctx->pc = 0x258CACu;
            goto label_258cac;
        }
    }
    ctx->pc = 0x258C8Cu;
    // 0x258c8c: 0x90420040  lbu         $v0, 0x40($v0)
    ctx->pc = 0x258c8cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x258c90: 0xa2a20008  sb          $v0, 0x8($s5)
    ctx->pc = 0x258c90u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x258c94: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x258c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x258c98: 0x90620039  lbu         $v0, 0x39($v1)
    ctx->pc = 0x258c98u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 57)));
    // 0x258c9c: 0xa2a20001  sb          $v0, 0x1($s5)
    ctx->pc = 0x258c9cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x258ca0: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x258ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x258ca4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x258CA4u;
    {
        const bool branch_taken_0x258ca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x258ca4) {
            ctx->pc = 0x258CA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x258CA4u;
            // 0x258ca8: 0x8c45004c  lw          $a1, 0x4C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x258CACu;
            goto label_258cac;
        }
    }
    ctx->pc = 0x258CACu;
label_258cac:
    // 0x258cac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x258cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x258cb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x258cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258cb4: 0x8e4300c8  lw          $v1, 0xC8($s2)
    ctx->pc = 0x258cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 200)));
    // 0x258cb8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x258cb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258cbc: 0x94470002  lhu         $a3, 0x2($v0)
    ctx->pc = 0x258cbcu;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x258cc0: 0x8fa6002c  lw          $a2, 0x2C($sp)
    ctx->pc = 0x258cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x258cc4: 0x30e70010  andi        $a3, $a3, 0x10
    ctx->pc = 0x258cc4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16);
    // 0x258cc8: 0x34e20400  ori         $v0, $a3, 0x400
    ctx->pc = 0x258cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)1024);
    // 0x258ccc: 0xc0942d4  jal         func_250B50
    ctx->pc = 0x258CCCu;
    SET_GPR_U32(ctx, 31, 0x258CD4u);
    ctx->pc = 0x258CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258CCCu;
            // 0x258cd0: 0x43380b  movn        $a3, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x250B50u;
    if (runtime->hasFunction(0x250B50u)) {
        auto targetFn = runtime->lookupFunction(0x250B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258CD4u; }
        if (ctx->pc != 0x258CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00250B50_0x250b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258CD4u; }
        if (ctx->pc != 0x258CD4u) { return; }
    }
    ctx->pc = 0x258CD4u;
label_258cd4:
    // 0x258cd4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x258cd4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_258cd8:
    // 0x258cd8: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x258CD8u;
    {
        const bool branch_taken_0x258cd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x258CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258CD8u;
            // 0x258cdc: 0x3c04003a  lui         $a0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258cd8) {
            ctx->pc = 0x258D30u;
            goto label_258d30;
        }
    }
    ctx->pc = 0x258CE0u;
label_258ce0:
    // 0x258ce0: 0x24020069  addiu       $v0, $zero, 0x69
    ctx->pc = 0x258ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    // 0x258ce4: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x258CE4u;
    {
        const bool branch_taken_0x258ce4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x258CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258CE4u;
            // 0x258ce8: 0x24020076  addiu       $v0, $zero, 0x76 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258ce4) {
            ctx->pc = 0x258D08u;
            goto label_258d08;
        }
    }
    ctx->pc = 0x258CECu;
    // 0x258cec: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x258cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x258cf0: 0x1080003e  beqz        $a0, . + 4 + (0x3E << 2)
    ctx->pc = 0x258CF0u;
    {
        const bool branch_taken_0x258cf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x258CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258CF0u;
            // 0x258cf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258cf0) {
            ctx->pc = 0x258DECu;
            goto label_258dec;
        }
    }
    ctx->pc = 0x258CF8u;
    // 0x258cf8: 0xc09687a  jal         func_25A1E8
    ctx->pc = 0x258CF8u;
    SET_GPR_U32(ctx, 31, 0x258D00u);
    ctx->pc = 0x258CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258CF8u;
            // 0x258cfc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25A1E8u;
    if (runtime->hasFunction(0x25A1E8u)) {
        auto targetFn = runtime->lookupFunction(0x25A1E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258D00u; }
        if (ctx->pc != 0x258D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025A1E8_0x25a1e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258D00u; }
        if (ctx->pc != 0x258D00u) { return; }
    }
    ctx->pc = 0x258D00u;
label_258d00:
    // 0x258d00: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x258D00u;
    {
        const bool branch_taken_0x258d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258D00u;
            // 0x258d04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258d00) {
            ctx->pc = 0x258DECu;
            goto label_258dec;
        }
    }
    ctx->pc = 0x258D08u;
label_258d08:
    // 0x258d08: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x258D08u;
    {
        const bool branch_taken_0x258d08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x258D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258D08u;
            // 0x258d0c: 0x24020073  addiu       $v0, $zero, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258d08) {
            ctx->pc = 0x258D18u;
            goto label_258d18;
        }
    }
    ctx->pc = 0x258D10u;
    // 0x258d10: 0x14620036  bne         $v1, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x258D10u;
    {
        const bool branch_taken_0x258d10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x258D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258D10u;
            // 0x258d14: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258d10) {
            ctx->pc = 0x258DECu;
            goto label_258dec;
        }
    }
    ctx->pc = 0x258D18u;
label_258d18:
    // 0x258d18: 0x86420018  lh          $v0, 0x18($s2)
    ctx->pc = 0x258d18u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x258d1c: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x258d1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x258d20: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x258D20u;
    {
        const bool branch_taken_0x258d20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x258D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258D20u;
            // 0x258d24: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258d20) {
            ctx->pc = 0x258DECu;
            goto label_258dec;
        }
    }
    ctx->pc = 0x258D28u;
    // 0x258d28: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x258D28u;
    {
        const bool branch_taken_0x258d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258D28u;
            // 0x258d2c: 0xa64300b2  sh          $v1, 0xB2($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 178), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258d28) {
            ctx->pc = 0x258DE8u;
            goto label_258de8;
        }
    }
    ctx->pc = 0x258D30u;
label_258d30:
    // 0x258d30: 0x24831308  addiu       $v1, $a0, 0x1308
    ctx->pc = 0x258d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4872));
    // 0x258d34: 0xdc620090  ld          $v0, 0x90($v1)
    ctx->pc = 0x258d34u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 144)));
    // 0x258d38: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x258d38u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x258d3c: 0xfc620090  sd          $v0, 0x90($v1)
    ctx->pc = 0x258d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 144), GPR_U64(ctx, 2));
    // 0x258d40: 0x96510028  lhu         $s1, 0x28($s2)
    ctx->pc = 0x258d40u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x258d44: 0x32220002  andi        $v0, $s1, 0x2
    ctx->pc = 0x258d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
    // 0x258d48: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x258D48u;
    {
        const bool branch_taken_0x258d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x258d48) {
            ctx->pc = 0x258D60u;
            goto label_258d60;
        }
    }
    ctx->pc = 0x258D50u;
    // 0x258d50: 0xdc620040  ld          $v0, 0x40($v1)
    ctx->pc = 0x258d50u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x258d54: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x258d54u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x258d58: 0xfc620040  sd          $v0, 0x40($v1)
    ctx->pc = 0x258d58u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 64), GPR_U64(ctx, 2));
    // 0x258d5c: 0x96510028  lhu         $s1, 0x28($s2)
    ctx->pc = 0x258d5cu;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 40)));
label_258d60:
    // 0x258d60: 0x1ac0000a  blez        $s6, . + 4 + (0xA << 2)
    ctx->pc = 0x258D60u;
    {
        const bool branch_taken_0x258d60 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x258D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258D60u;
            // 0x258d64: 0x8e450070  lw          $a1, 0x70($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258d60) {
            ctx->pc = 0x258D8Cu;
            goto label_258d8c;
        }
    }
    ctx->pc = 0x258D68u;
    // 0x258d68: 0x16183c  dsll32      $v1, $s6, 0
    ctx->pc = 0x258d68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) << (32 + 0));
    // 0x258d6c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x258d6cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x258d70: 0x8e42007c  lw          $v0, 0x7C($s2)
    ctx->pc = 0x258d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
    // 0x258d74: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x258d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x258d78: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x258d78u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x258d7c: 0x5c400003  bgtzl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x258D7Cu;
    {
        const bool branch_taken_0x258d7c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x258d7c) {
            ctx->pc = 0x258D80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x258D7Cu;
            // 0x258d80: 0xae43007c  sw          $v1, 0x7C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x258D8Cu;
            goto label_258d8c;
        }
    }
    ctx->pc = 0x258D84u;
    // 0x258d84: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x258D84u;
    {
        const bool branch_taken_0x258d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258D84u;
            // 0x258d88: 0x3223fffe  andi        $v1, $s1, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x258d84) {
            ctx->pc = 0x258D90u;
            goto label_258d90;
        }
    }
    ctx->pc = 0x258D8Cu;
label_258d8c:
    // 0x258d8c: 0x3223fffe  andi        $v1, $s1, 0xFFFE
    ctx->pc = 0x258d8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65534);
label_258d90:
    // 0x258d90: 0xae4500c0  sw          $a1, 0xC0($s2)
    ctx->pc = 0x258d90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 5));
    // 0x258d94: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x258d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x258d98: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x258D98u;
    {
        const bool branch_taken_0x258d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258D98u;
            // 0x258d9c: 0xa6430028  sh          $v1, 0x28($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 40), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258d98) {
            ctx->pc = 0x258DC4u;
            goto label_258dc4;
        }
    }
    ctx->pc = 0x258DA0u;
    // 0x258da0: 0x3062fffd  andi        $v0, $v1, 0xFFFD
    ctx->pc = 0x258da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65533);
    // 0x258da4: 0xa6420028  sh          $v0, 0x28($s2)
    ctx->pc = 0x258da4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 40), (uint16_t)GPR_U32(ctx, 2));
    // 0x258da8: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x258da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x258dac: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x258DACu;
    {
        const bool branch_taken_0x258dac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x258DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258DACu;
            // 0x258db0: 0x8e42003c  lw          $v0, 0x3C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258dac) {
            ctx->pc = 0x258DC0u;
            goto label_258dc0;
        }
    }
    ctx->pc = 0x258DB4u;
    // 0x258db4: 0xac62003c  sw          $v0, 0x3C($v1)
    ctx->pc = 0x258db4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 2));
    // 0x258db8: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x258db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x258dbc: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x258dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_258dc0:
    // 0x258dc0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x258dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_258dc4:
    // 0x258dc4: 0x8fa60054  lw          $a2, 0x54($sp)
    ctx->pc = 0x258dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x258dc8: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x258DC8u;
    {
        const bool branch_taken_0x258dc8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x258DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258DC8u;
            // 0x258dcc: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258dc8) {
            ctx->pc = 0x258DE8u;
            goto label_258de8;
        }
    }
    ctx->pc = 0x258DD0u;
    // 0x258dd0: 0x8c4312c0  lw          $v1, 0x12C0($v0)
    ctx->pc = 0x258dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4800)));
    // 0x258dd4: 0x1060fce7  beqz        $v1, . + 4 + (-0x319 << 2)
    ctx->pc = 0x258DD4u;
    {
        const bool branch_taken_0x258dd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x258DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258DD4u;
            // 0x258dd8: 0x8fa20058  lw          $v0, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258dd4) {
            ctx->pc = 0x258174u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_258174;
        }
    }
    ctx->pc = 0x258DDCu;
    // 0x258ddc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x258ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x258de0: 0x1440fce4  bnez        $v0, . + 4 + (-0x31C << 2)
    ctx->pc = 0x258DE0u;
    {
        const bool branch_taken_0x258de0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x258DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258DE0u;
            // 0x258de4: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258de0) {
            ctx->pc = 0x258174u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_258174;
        }
    }
    ctx->pc = 0x258DE8u;
label_258de8:
    // 0x258de8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x258de8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_258dec:
    // 0x258dec: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x258decu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x258df0: 0xdfbe00f0  ld          $fp, 0xF0($sp)
    ctx->pc = 0x258df0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x258df4: 0xdfb700e0  ld          $s7, 0xE0($sp)
    ctx->pc = 0x258df4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x258df8: 0xdfb600d0  ld          $s6, 0xD0($sp)
    ctx->pc = 0x258df8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x258dfc: 0xdfb500c0  ld          $s5, 0xC0($sp)
    ctx->pc = 0x258dfcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x258e00: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x258e00u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x258e04: 0xdfb300a0  ld          $s3, 0xA0($sp)
    ctx->pc = 0x258e04u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x258e08: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x258e08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x258e0c: 0xdfb10080  ld          $s1, 0x80($sp)
    ctx->pc = 0x258e0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x258e10: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x258e10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x258e14: 0x3e00008  jr          $ra
    ctx->pc = 0x258E14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x258E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258E14u;
            // 0x258e18: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x258E1Cu;
    // 0x258e1c: 0x0  nop
    ctx->pc = 0x258e1cu;
    // NOP
    ctx->pc = 0x258e20u;
}
