#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011CF28
// Address: 0x11cf28 - 0x11d1c8
void sub_0011CF28_0x11cf28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011CF28_0x11cf28");
#endif

    switch (ctx->pc) {
        case 0x11cf84u: goto label_11cf84;
        case 0x11cfdcu: goto label_11cfdc;
        case 0x11cff8u: goto label_11cff8;
        case 0x11d01cu: goto label_11d01c;
        case 0x11d06cu: goto label_11d06c;
        case 0x11d110u: goto label_11d110;
        case 0x11d1a0u: goto label_11d1a0;
        default: break;
    }

    ctx->pc = 0x11cf28u;

    // 0x11cf28: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x11cf28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x11cf2c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x11cf2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x11cf30: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x11cf30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x11cf34: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x11cf34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cf38: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x11cf38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x11cf3c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x11cf3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cf40: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x11cf40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x11cf44: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x11cf44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cf48: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x11cf48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x11cf4c: 0x3282003f  andi        $v0, $s4, 0x3F
    ctx->pc = 0x11cf4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)63);
    // 0x11cf50: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x11cf50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x11cf54: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x11cf54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x11cf58: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x11cf58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x11cf5c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x11cf5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x11cf60: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x11CF60u;
    {
        const bool branch_taken_0x11cf60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CF64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CF60u;
            // 0x11cf64: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cf60) {
            ctx->pc = 0x11CF8Cu;
            goto label_11cf8c;
        }
    }
    ctx->pc = 0x11CF68u;
    // 0x11cf68: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x11cf68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x11cf6c: 0x8c43b98c  lw          $v1, -0x4674($v0)
    ctx->pc = 0x11cf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949260)));
    // 0x11cf70: 0x10600040  beqz        $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x11CF70u;
    {
        const bool branch_taken_0x11cf70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CF74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CF70u;
            // 0x11cf74: 0x3c04003e  lui         $a0, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cf70) {
            ctx->pc = 0x11D074u;
            goto label_11d074;
        }
    }
    ctx->pc = 0x11CF78u;
    // 0x11cf78: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x11cf78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cf7c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x11CF7Cu;
    SET_GPR_U32(ctx, 31, 0x11CF84u);
    ctx->pc = 0x11CF80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11CF7Cu;
            // 0x11cf80: 0x2484b488  addiu       $a0, $a0, -0x4B78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947976));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CF84u; }
        if (ctx->pc != 0x11CF84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CF84u; }
        if (ctx->pc != 0x11CF84u) { return; }
    }
    ctx->pc = 0x11CF84u;
label_11cf84:
    // 0x11cf84: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x11CF84u;
    {
        const bool branch_taken_0x11cf84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CF88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CF84u;
            // 0x11cf88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cf84) {
            ctx->pc = 0x11D0DCu;
            goto label_11d0dc;
        }
    }
    ctx->pc = 0x11CF8Cu;
label_11cf8c:
    // 0x11cf8c: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x11cf8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x11cf90: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x11cf90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x11cf94: 0x72631818  mult1       $v1, $s3, $v1
    ctx->pc = 0x11cf94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x11cf98: 0x2442018  mult        $a0, $s2, $a0
    ctx->pc = 0x11cf98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x11cf9c: 0x3c1e0041  lui         $fp, 0x41
    ctx->pc = 0x11cf9cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)65 << 16));
    // 0x11cfa0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11cfa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11cfa4: 0x27c2db50  addiu       $v0, $fp, -0x24B0
    ctx->pc = 0x11cfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294957904));
    // 0x11cfa8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x11cfa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x11cfac: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x11cfacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x11cfb0: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x11cfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x11cfb4: 0x1465000b  bne         $v1, $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x11CFB4u;
    {
        const bool branch_taken_0x11cfb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x11CFB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CFB4u;
            // 0x11cfb8: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cfb4) {
            ctx->pc = 0x11CFE4u;
            goto label_11cfe4;
        }
    }
    ctx->pc = 0x11CFBCu;
    // 0x11cfbc: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x11cfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x11cfc0: 0x8c43b98c  lw          $v1, -0x4674($v0)
    ctx->pc = 0x11cfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949260)));
    // 0x11cfc4: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x11CFC4u;
    {
        const bool branch_taken_0x11cfc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CFC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CFC4u;
            // 0x11cfc8: 0x3c04003e  lui         $a0, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cfc4) {
            ctx->pc = 0x11D074u;
            goto label_11d074;
        }
    }
    ctx->pc = 0x11CFCCu;
    // 0x11cfcc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x11cfccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cfd0: 0x2484b4b8  addiu       $a0, $a0, -0x4B48
    ctx->pc = 0x11cfd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948024));
    // 0x11cfd4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x11CFD4u;
    SET_GPR_U32(ctx, 31, 0x11CFDCu);
    ctx->pc = 0x11CFD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11CFD4u;
            // 0x11cfd8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CFDCu; }
        if (ctx->pc != 0x11CFDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CFDCu; }
        if (ctx->pc != 0x11CFDCu) { return; }
    }
    ctx->pc = 0x11CFDCu;
label_11cfdc:
    // 0x11cfdc: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x11CFDCu;
    {
        const bool branch_taken_0x11cfdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CFE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CFDCu;
            // 0x11cfe0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cfdc) {
            ctx->pc = 0x11D0DCu;
            goto label_11d0dc;
        }
    }
    ctx->pc = 0x11CFE4u;
label_11cfe4:
    // 0x11cfe4: 0x3c170041  lui         $s7, 0x41
    ctx->pc = 0x11cfe4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)65 << 16));
    // 0x11cfe8: 0x24160005  addiu       $s6, $zero, 0x5
    ctx->pc = 0x11cfe8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x11cfec: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x11cfecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11cff0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x11cff0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11cff4: 0x0  nop
    ctx->pc = 0x11cff4u;
    // NOP
label_11cff8:
    // 0x11cff8: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x11cff8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x11cffc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11cffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d000: 0xa2160070  sb          $s6, 0x70($s0)
    ctx->pc = 0x11d000u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 112), (uint8_t)GPR_U32(ctx, 22));
    // 0x11d004: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x11d004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x11d008: 0xa2150071  sb          $s5, 0x71($s0)
    ctx->pc = 0x11d008u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 113), (uint8_t)GPR_U32(ctx, 21));
    // 0x11d00c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x11d00cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x11d010: 0xa2000067  sb          $zero, 0x67($s0)
    ctx->pc = 0x11d010u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 103), (uint8_t)GPR_U32(ctx, 0));
    // 0x11d014: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x11D014u;
    SET_GPR_U32(ctx, 31, 0x11D01Cu);
    ctx->pc = 0x11D018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D014u;
            // 0x11d018: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D01Cu; }
        if (ctx->pc != 0x11D01Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D01Cu; }
        if (ctx->pc != 0x11D01Cu) { return; }
    }
    ctx->pc = 0x11D01Cu;
label_11d01c:
    // 0x11d01c: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x11d01cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x11d020: 0x621fff5  bgez        $s1, . + 4 + (-0xB << 2)
    ctx->pc = 0x11D020u;
    {
        const bool branch_taken_0x11d020 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x11D024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D020u;
            // 0x11d024: 0x26100080  addiu       $s0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d020) {
            ctx->pc = 0x11CFF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11cff8;
        }
    }
    ctx->pc = 0x11D028u;
    // 0x11d028: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x11d028u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d02c: 0x26f0dd40  addiu       $s0, $s7, -0x22C0
    ctx->pc = 0x11d02cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4294958400));
    // 0x11d030: 0xaef1dd40  sw          $s1, -0x22C0($s7)
    ctx->pc = 0x11d030u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4294958400), GPR_U32(ctx, 17));
    // 0x11d034: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x11d034u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x11d038: 0xae130004  sw          $s3, 0x4($s0)
    ctx->pc = 0x11d038u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
    // 0x11d03c: 0x2484db00  addiu       $a0, $a0, -0x2500
    ctx->pc = 0x11d03cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957824));
    // 0x11d040: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x11d040u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x11d044: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11d044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d048: 0xae140010  sw          $s4, 0x10($s0)
    ctx->pc = 0x11d048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 20));
    // 0x11d04c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11d04cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d050: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x11d050u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d054: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x11d054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11d058: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x11d058u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x11d05c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x11d05cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d060: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x11d060u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x11d064: 0xc04434c  jal         func_110D30
    ctx->pc = 0x11D064u;
    SET_GPR_U32(ctx, 31, 0x11D06Cu);
    ctx->pc = 0x11D068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D064u;
            // 0x11d068: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (runtime->hasFunction(0x110D30u)) {
        auto targetFn = runtime->lookupFunction(0x110D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D06Cu; }
        if (ctx->pc != 0x11D06Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSifRpcCallPacket_0x110d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D06Cu; }
        if (ctx->pc != 0x11D06Cu) { return; }
    }
    ctx->pc = 0x11D06Cu;
label_11d06c:
    // 0x11d06c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D06Cu;
    {
        const bool branch_taken_0x11d06c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11D070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D06Cu;
            // 0x11d070: 0x2403001c  addiu       $v1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d06c) {
            ctx->pc = 0x11D07Cu;
            goto label_11d07c;
        }
    }
    ctx->pc = 0x11D074u;
label_11d074:
    // 0x11d074: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x11D074u;
    {
        const bool branch_taken_0x11d074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D074u;
            // 0x11d078: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d074) {
            ctx->pc = 0x11D0DCu;
            goto label_11d0dc;
        }
    }
    ctx->pc = 0x11D07Cu;
label_11d07c:
    // 0x11d07c: 0x24070070  addiu       $a3, $zero, 0x70
    ctx->pc = 0x11d07cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x11d080: 0x72673818  mult1       $a3, $s3, $a3
    ctx->pc = 0x11d080u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 7); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x11d084: 0x2431818  mult        $v1, $s2, $v1
    ctx->pc = 0x11d084u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x11d088: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x11d088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x11d08c: 0x122940  sll         $a1, $s2, 5
    ctx->pc = 0x11d08cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x11d090: 0x2442dc40  addiu       $v0, $v0, -0x23C0
    ctx->pc = 0x11d090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958144));
    // 0x11d094: 0x27c4db50  addiu       $a0, $fp, -0x24B0
    ctx->pc = 0x11d094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294957904));
    // 0x11d098: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x11d098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x11d09c: 0x1331c0  sll         $a2, $s3, 7
    ctx->pc = 0x11d09cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 7));
    // 0x11d0a0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x11d0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x11d0a4: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x11d0a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x11d0a8: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x11d0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x11d0ac: 0x8e080014  lw          $t0, 0x14($s0)
    ctx->pc = 0x11d0acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x11d0b0: 0xac510010  sw          $s1, 0x10($v0)
    ctx->pc = 0x11d0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 17));
    // 0x11d0b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11d0b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d0b8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x11d0b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d0bc: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x11d0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x11d0c0: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x11d0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x11d0c4: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x11d0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x11d0c8: 0xace80008  sw          $t0, 0x8($a3)
    ctx->pc = 0x11d0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 8));
    // 0x11d0cc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x11d0ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d0d0: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x11d0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
    // 0x11d0d4: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x11d0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x11d0d8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x11d0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_11d0dc:
    // 0x11d0dc: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x11d0dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x11d0e0: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x11d0e0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x11d0e4: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x11d0e4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11d0e8: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x11d0e8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11d0ec: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x11d0ecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11d0f0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x11d0f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11d0f4: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x11d0f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11d0f8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x11d0f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11d0fc: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x11d0fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11d100: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11d100u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11d104: 0x3e00008  jr          $ra
    ctx->pc = 0x11D104u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D104u;
            // 0x11d108: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11D10Cu;
    // 0x11d10c: 0x0  nop
    ctx->pc = 0x11d10cu;
    // NOP
label_11d110:
    // 0x11d110: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x11d110u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d114: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x11d114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x11d118: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x11d118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x11d11c: 0x70e31818  mult1       $v1, $a3, $v1
    ctx->pc = 0x11d11cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x11d120: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x11d120u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x11d124: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x11d124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x11d128: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11d128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11d12c: 0x2442db50  addiu       $v0, $v0, -0x24B0
    ctx->pc = 0x11d12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957904));
    // 0x11d130: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x11d130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x11d134: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x11d134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x11d138: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x11d138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11d13c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x11d13cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x11d140: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x11d140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x11d144: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x11d144u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11d148: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x11d148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11d14c: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x11D14Cu;
    {
        const bool branch_taken_0x11d14c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D14Cu;
            // 0x11d150: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d14c) {
            ctx->pc = 0x11D1B4u;
            goto label_11d1b4;
        }
    }
    ctx->pc = 0x11D154u;
    // 0x11d154: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x11d154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x11d158: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x11d158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x11d15c: 0x2450dd40  addiu       $s0, $v0, -0x22C0
    ctx->pc = 0x11d15cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958400));
    // 0x11d160: 0xac43dd40  sw          $v1, -0x22C0($v0)
    ctx->pc = 0x11d160u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294958400), GPR_U32(ctx, 3));
    // 0x11d164: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x11d164u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d168: 0xae070004  sw          $a3, 0x4($s0)
    ctx->pc = 0x11d168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 7));
    // 0x11d16c: 0xae050008  sw          $a1, 0x8($s0)
    ctx->pc = 0x11d16cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
    // 0x11d170: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x11d170u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x11d174: 0xae060010  sw          $a2, 0x10($s0)
    ctx->pc = 0x11d174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
    // 0x11d178: 0x2484db00  addiu       $a0, $a0, -0x2500
    ctx->pc = 0x11d178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957824));
    // 0x11d17c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11d17cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d180: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11d180u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d184: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x11d184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11d188: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x11d188u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d18c: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x11d18cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x11d190: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x11d190u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d194: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x11d194u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x11d198: 0xc04434c  jal         func_110D30
    ctx->pc = 0x11D198u;
    SET_GPR_U32(ctx, 31, 0x11D1A0u);
    ctx->pc = 0x11D19Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D198u;
            // 0x11d19c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (runtime->hasFunction(0x110D30u)) {
        auto targetFn = runtime->lookupFunction(0x110D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D1A0u; }
        if (ctx->pc != 0x11D1A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSifRpcCallPacket_0x110d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D1A0u; }
        if (ctx->pc != 0x11D1A0u) { return; }
    }
    ctx->pc = 0x11D1A0u;
label_11d1a0:
    // 0x11d1a0: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D1A0u;
    {
        const bool branch_taken_0x11d1a0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x11d1a0) {
            ctx->pc = 0x11D1A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11D1A0u;
            // 0x11d1a4: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11D1B0u;
            goto label_11d1b0;
        }
    }
    ctx->pc = 0x11D1A8u;
    // 0x11d1a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11D1A8u;
    {
        const bool branch_taken_0x11d1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D1ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D1A8u;
            // 0x11d1ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d1a8) {
            ctx->pc = 0x11D1B4u;
            goto label_11d1b4;
        }
    }
    ctx->pc = 0x11D1B0u;
label_11d1b0:
    // 0x11d1b0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x11d1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_11d1b4:
    // 0x11d1b4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x11d1b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11d1b8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x11d1b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11d1bc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11d1bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11d1c0: 0x3e00008  jr          $ra
    ctx->pc = 0x11D1C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D1C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D1C0u;
            // 0x11d1c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11D1C8u;
    ctx->pc = 0x11d1c8u;
}
