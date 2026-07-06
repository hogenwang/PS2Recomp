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

// Function: sub_0025BE80
// Address: 0x25be80 - 0x25c248
void sub_0025BE80_0x25be80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025BE80_0x25be80");
#endif

    switch (ctx->pc) {
        case 0x25bee4u: goto label_25bee4;
        case 0x25bf0cu: goto label_25bf0c;
        case 0x25bf30u: goto label_25bf30;
        case 0x25bf50u: goto label_25bf50;
        case 0x25bf68u: goto label_25bf68;
        case 0x25bfccu: goto label_25bfcc;
        case 0x25c020u: goto label_25c020;
        case 0x25c058u: goto label_25c058;
        case 0x25c07cu: goto label_25c07c;
        case 0x25c0ecu: goto label_25c0ec;
        case 0x25c10cu: goto label_25c10c;
        case 0x25c208u: goto label_25c208;
        case 0x25c234u: goto label_25c234;
        default: break;
    }

    ctx->pc = 0x25be80u;

    // 0x25be80: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x25be80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x25be84: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25be84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25be88: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x25be88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x25be8c: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x25be8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x25be90: 0x24fe0008  addiu       $fp, $a3, 0x8
    ctx->pc = 0x25be90u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x25be94: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x25be94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x25be98: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x25be98u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25be9c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x25be9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x25bea0: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x25bea0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bea4: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x25bea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x25bea8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x25bea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x25beac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25beacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25beb0: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x25beb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x25beb4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x25beb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x25beb8: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x25beb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x25bebc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x25bebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x25bec0: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x25bec0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x25bec4: 0x1462006e  bne         $v1, $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x25BEC4u;
    {
        const bool branch_taken_0x25bec4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x25BEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BEC4u;
        // 0x25bec8: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bec4) {
            ctx->pc = 0x25C080u;
            goto label_25c080;
        }
    }
    ctx->pc = 0x25BECCu;
    // 0x25becc: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x25beccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x25bed0: 0x1443006c  bne         $v0, $v1, . + 4 + (0x6C << 2)
    ctx->pc = 0x25BED0u;
    {
        const bool branch_taken_0x25bed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x25BED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BED0u;
        // 0x25bed4: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bed0) {
            ctx->pc = 0x25C084u;
            goto label_25c084;
        }
    }
    ctx->pc = 0x25BED8u;
    // 0x25bed8: 0x3c04f000  lui         $a0, 0xF000
    ctx->pc = 0x25bed8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61440 << 16));
    // 0x25bedc: 0xc08a254  jal         func_228950
    ctx->pc = 0x25BEDCu;
    SET_GPR_U32(ctx, 31, 0x25BEE4u);
    ctx->pc = 0x25BEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BEDCu;
    // 0x25bee0: 0x26530004  addiu       $s3, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228950u, 0x25BEDCu, 0x25BEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BEE4u;
label_25bee4:
    // 0x25bee4: 0x26350004  addiu       $s5, $s1, 0x4
    ctx->pc = 0x25bee4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x25bee8: 0x8a700003  lwl         $s0, 0x3($s3)
    ctx->pc = 0x25bee8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 16) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 16, (int32_t)merged); }
    // 0x25beec: 0x9a700000  lwr         $s0, 0x0($s3)
    ctx->pc = 0x25beecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 16) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 16) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 16, merged64); }
    // 0x25bef0: 0x26440002  addiu       $a0, $s2, 0x2
    ctx->pc = 0x25bef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x25bef4: 0x26230002  addiu       $v1, $s1, 0x2
    ctx->pc = 0x25bef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x25bef8: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x25bef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x25befc: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x25befcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x25bf00: 0x3c04e000  lui         $a0, 0xE000
    ctx->pc = 0x25bf00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57344 << 16));
    // 0x25bf04: 0xc08a254  jal         func_228950
    ctx->pc = 0x25BF04u;
    SET_GPR_U32(ctx, 31, 0x25BF0Cu);
    ctx->pc = 0x25BF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BF04u;
    // 0x25bf08: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228950u, 0x25BF04u, 0x25BF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BF0Cu;
label_25bf0c:
    // 0x25bf0c: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x25BF0Cu;
    {
        const bool branch_taken_0x25bf0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x25BF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BF0Cu;
        // 0x25bf10: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bf0c) {
            ctx->pc = 0x25BF38u;
            goto label_25bf38;
        }
    }
    ctx->pc = 0x25BF14u;
    // 0x25bf14: 0x8a640003  lwl         $a0, 0x3($s3)
    ctx->pc = 0x25bf14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x25bf18: 0x9a640000  lwr         $a0, 0x0($s3)
    ctx->pc = 0x25bf18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x25bf1c: 0x3c14ffff  lui         $s4, 0xFFFF
    ctx->pc = 0x25bf1cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65535 << 16));
    // 0x25bf20: 0x14a03e  dsrl32      $s4, $s4, 0
    ctx->pc = 0x25bf20u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) >> (32 + 0));
    // 0x25bf24: 0x8ec50014  lw          $a1, 0x14($s6)
    ctx->pc = 0x25bf24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
    // 0x25bf28: 0xc092ad2  jal         func_24AB48
    ctx->pc = 0x25BF28u;
    SET_GPR_U32(ctx, 31, 0x25BF30u);
    ctx->pc = 0x25BF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BF28u;
    // 0x25bf2c: 0x942024  and         $a0, $a0, $s4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24AB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24AB48u, 0x25BF28u, 0x25BF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BF30u;
label_25bf30:
    // 0x25bf30: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x25BF30u;
    {
        const bool branch_taken_0x25bf30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BF30u;
        // 0x25bf34: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bf30) {
            ctx->pc = 0x25BFF4u;
            goto label_25bff4;
        }
    }
    ctx->pc = 0x25BF38u;
label_25bf38:
    // 0x25bf38: 0x8c5016e0  lw          $s0, 0x16E0($v0)
    ctx->pc = 0x25bf38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5856)));
    // 0x25bf3c: 0x244316e0  addiu       $v1, $v0, 0x16E0
    ctx->pc = 0x25bf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 5856));
    // 0x25bf40: 0x1203004f  beq         $s0, $v1, . + 4 + (0x4F << 2)
    ctx->pc = 0x25BF40u;
    {
        const bool branch_taken_0x25bf40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x25BF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BF40u;
        // 0x25bf44: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bf40) {
            ctx->pc = 0x25C080u;
            goto label_25c080;
        }
    }
    ctx->pc = 0x25BF48u;
    // 0x25bf48: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x25bf48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x25bf4c: 0x0  nop
    ctx->pc = 0x25bf4cu;
    // NOP
label_25bf50:
    // 0x25bf50: 0x9603001a  lhu         $v1, 0x1A($s0)
    ctx->pc = 0x25bf50u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x25bf54: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x25bf54u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25bf58: 0x54620022  bnel        $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x25BF58u;
    {
        const bool branch_taken_0x25bf58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x25bf58) {
            ctx->pc = 0x25BF5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BF58u;
            // 0x25bf5c: 0x8e100008  lw          $s0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BFE4u;
            goto label_25bfe4;
        }
    }
    ctx->pc = 0x25BF60u;
    // 0x25bf60: 0xc08a254  jal         func_228950
    ctx->pc = 0x25BF60u;
    SET_GPR_U32(ctx, 31, 0x25BF68u);
    ctx->pc = 0x25BF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BF60u;
    // 0x25bf64: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228950u, 0x25BF60u, 0x25BF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BF68u;
label_25bf68:
    // 0x25bf68: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x25bf68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x25bf6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x25bf6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bf70: 0x50640006  beql        $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25BF70u;
    {
        const bool branch_taken_0x25bf70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x25bf70) {
            ctx->pc = 0x25BF74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BF70u;
            // 0x25bf74: 0x8e030048  lw          $v1, 0x48($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BF8Cu;
            goto label_25bf8c;
        }
    }
    ctx->pc = 0x25BF78u;
    // 0x25bf78: 0x8a620003  lwl         $v0, 0x3($s3)
    ctx->pc = 0x25bf78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x25bf7c: 0x9a620000  lwr         $v0, 0x0($s3)
    ctx->pc = 0x25bf7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x25bf80: 0x54620018  bnel        $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x25BF80u;
    {
        const bool branch_taken_0x25bf80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x25bf80) {
            ctx->pc = 0x25BF84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BF80u;
            // 0x25bf84: 0x8e100008  lw          $s0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BFE4u;
            goto label_25bfe4;
        }
    }
    ctx->pc = 0x25BF88u;
    // 0x25bf88: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x25bf88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_25bf8c:
    // 0x25bf8c: 0x5064000b  beql        $v1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x25BF8Cu;
    {
        const bool branch_taken_0x25bf8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x25bf8c) {
            ctx->pc = 0x25BF90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BF8Cu;
            // 0x25bf90: 0x8e07001c  lw          $a3, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BFBCu;
            goto label_25bfbc;
        }
    }
    ctx->pc = 0x25BF94u;
    // 0x25bf94: 0x8aa20003  lwl         $v0, 0x3($s5)
    ctx->pc = 0x25bf94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x25bf98: 0x9aa20000  lwr         $v0, 0x0($s5)
    ctx->pc = 0x25bf98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x25bf9c: 0x54620011  bnel        $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x25BF9Cu;
    {
        const bool branch_taken_0x25bf9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x25bf9c) {
            ctx->pc = 0x25BFA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BF9Cu;
            // 0x25bfa0: 0x8e100008  lw          $s0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BFE4u;
            goto label_25bfe4;
        }
    }
    ctx->pc = 0x25BFA4u;
    // 0x25bfa4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x25bfa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25bfa8: 0x96030018  lhu         $v1, 0x18($s0)
    ctx->pc = 0x25bfa8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x25bfac: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x25bfacu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25bfb0: 0x5462000c  bnel        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x25BFB0u;
    {
        const bool branch_taken_0x25bfb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x25bfb0) {
            ctx->pc = 0x25BFB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25BFB0u;
            // 0x25bfb4: 0x8e100008  lw          $s0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25BFE4u;
            goto label_25bfe4;
        }
    }
    ctx->pc = 0x25BFB8u;
    // 0x25bfb8: 0x8e07001c  lw          $a3, 0x1C($s0)
    ctx->pc = 0x25bfb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_25bfbc:
    // 0x25bfbc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x25bfbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bfc0: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x25bfc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bfc4: 0xc096f52  jal         func_25BD48
    ctx->pc = 0x25BFC4u;
    SET_GPR_U32(ctx, 31, 0x25BFCCu);
    ctx->pc = 0x25BFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BFC4u;
    // 0x25bfc8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BD48u, 0x25BFC4u, 0x25BFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BFCCu;
label_25bfcc:
    // 0x25bfcc: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x25bfccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x25bfd0: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x25bfd0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x25bfd4: 0x30420204  andi        $v0, $v0, 0x204
    ctx->pc = 0x25bfd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)516);
    // 0x25bfd8: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x25BFD8u;
    {
        const bool branch_taken_0x25bfd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BFD8u;
        // 0x25bfdc: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bfd8) {
            ctx->pc = 0x25C080u;
            goto label_25c080;
        }
    }
    ctx->pc = 0x25BFE0u;
    // 0x25bfe0: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x25bfe0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_25bfe4:
    // 0x25bfe4: 0x1612ffda  bne         $s0, $s2, . + 4 + (-0x26 << 2)
    ctx->pc = 0x25BFE4u;
    {
        const bool branch_taken_0x25bfe4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x25BFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BFE4u;
        // 0x25bfe8: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bfe4) {
            ctx->pc = 0x25BF50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25bf50;
        }
    }
    ctx->pc = 0x25BFECu;
    // 0x25bfec: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x25BFECu;
    {
        const bool branch_taken_0x25bfec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BFECu;
        // 0x25bff0: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bfec) {
            ctx->pc = 0x25C084u;
            goto label_25c084;
        }
    }
    ctx->pc = 0x25BFF4u;
label_25bff4:
    // 0x25bff4: 0x8aa50003  lwl         $a1, 0x3($s5)
    ctx->pc = 0x25bff4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 5) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 5, (int32_t)merged); }
    // 0x25bff8: 0x9aa50000  lwr         $a1, 0x0($s5)
    ctx->pc = 0x25bff8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 5) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 5) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 5, merged64); }
    // 0x25bffc: 0x8a670003  lwl         $a3, 0x3($s3)
    ctx->pc = 0x25bffcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x25c000: 0x9a670000  lwr         $a3, 0x0($s3)
    ctx->pc = 0x25c000u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x25c004: 0x245516e0  addiu       $s5, $v0, 0x16E0
    ctx->pc = 0x25c004u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 5856));
    // 0x25c008: 0x96260002  lhu         $a2, 0x2($s1)
    ctx->pc = 0x25c008u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x25c00c: 0xb42824  and         $a1, $a1, $s4
    ctx->pc = 0x25c00cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 20));
    // 0x25c010: 0x96480002  lhu         $t0, 0x2($s2)
    ctx->pc = 0x25c010u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x25c014: 0xf43824  and         $a3, $a3, $s4
    ctx->pc = 0x25c014u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 20));
    // 0x25c018: 0xc093182  jal         func_24C608
    ctx->pc = 0x25C018u;
    SET_GPR_U32(ctx, 31, 0x25C020u);
    ctx->pc = 0x25C01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C018u;
    // 0x25c01c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C608u, 0x25C018u, 0x25C020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C020u;
label_25c020:
    // 0x25c020: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25c020u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c024: 0x56000011  bnel        $s0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x25C024u;
    {
        const bool branch_taken_0x25c024 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x25c024) {
            ctx->pc = 0x25C028u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25C024u;
            // 0x25c028: 0x8e07001c  lw          $a3, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25C06Cu;
            goto label_25c06c;
        }
    }
    ctx->pc = 0x25C02Cu;
    // 0x25c02c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x25c02cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x25c030: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x25c030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c034: 0x24421708  addiu       $v0, $v0, 0x1708
    ctx->pc = 0x25c034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5896));
    // 0x25c038: 0xdc430038  ld          $v1, 0x38($v0)
    ctx->pc = 0x25c038u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x25c03c: 0x64630001  daddiu      $v1, $v1, 0x1
    ctx->pc = 0x25c03cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
    // 0x25c040: 0xfc430038  sd          $v1, 0x38($v0)
    ctx->pc = 0x25c040u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 56), GPR_U64(ctx, 3));
    // 0x25c044: 0x8a650003  lwl         $a1, 0x3($s3)
    ctx->pc = 0x25c044u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 5) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 5, (int32_t)merged); }
    // 0x25c048: 0x9a650000  lwr         $a1, 0x0($s3)
    ctx->pc = 0x25c048u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 5) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 5) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 5, merged64); }
    // 0x25c04c: 0x96460002  lhu         $a2, 0x2($s2)
    ctx->pc = 0x25c04cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x25c050: 0xc0931d8  jal         func_24C760
    ctx->pc = 0x25C050u;
    SET_GPR_U32(ctx, 31, 0x25C058u);
    ctx->pc = 0x25C054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C050u;
    // 0x25c054: 0xb42824  and         $a1, $a1, $s4 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C760u, 0x25C050u, 0x25C058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C058u;
label_25c058:
    // 0x25c058: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25c058u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c05c: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x25C05Cu;
    {
        const bool branch_taken_0x25c05c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x25c05c) {
            ctx->pc = 0x25C060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25C05Cu;
            // 0x25c060: 0x8e07001c  lw          $a3, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25C06Cu;
            goto label_25c06c;
        }
    }
    ctx->pc = 0x25C064u;
    // 0x25c064: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x25C064u;
    {
        const bool branch_taken_0x25c064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C064u;
        // 0x25c068: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c064) {
            ctx->pc = 0x25C084u;
            goto label_25c084;
        }
    }
    ctx->pc = 0x25C06Cu;
label_25c06c:
    // 0x25c06c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x25c06cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c070: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x25c070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c074: 0xc096f52  jal         func_25BD48
    ctx->pc = 0x25C074u;
    SET_GPR_U32(ctx, 31, 0x25C07Cu);
    ctx->pc = 0x25C078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C074u;
    // 0x25c078: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BD48u, 0x25C074u, 0x25C07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C07Cu;
label_25c07c:
    // 0x25c07c: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x25c07cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25c080:
    // 0x25c080: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x25c080u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_25c084:
    // 0x25c084: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x25c084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25c088: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x25c088u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x25c08c: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x25c08cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25c090: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x25c090u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25c094: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x25c094u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25c098: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x25c098u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25c09c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x25c09cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25c0a0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x25c0a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25c0a4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x25c0a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25c0a8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x25c0a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25c0ac: 0x3e00008  jr          $ra
    ctx->pc = 0x25C0ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25C0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C0ACu;
        // 0x25c0b0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C0ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25C0B4u;
    // 0x25c0b4: 0x0  nop
    ctx->pc = 0x25c0b4u;
    // NOP
    // 0x25c0b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25c0b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25c0bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25c0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25c0c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25c0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25c0c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25c0c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c0c8: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x25c0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x25c0cc: 0xa4450038  sh          $a1, 0x38($v0)
    ctx->pc = 0x25c0ccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 56), (uint16_t)GPR_U32(ctx, 5));
    // 0x25c0d0: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x25c0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x25c0d4: 0x94820078  lhu         $v0, 0x78($a0)
    ctx->pc = 0x25c0d4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x25c0d8: 0x3042003c  andi        $v0, $v0, 0x3C
    ctx->pc = 0x25c0d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)60);
    // 0x25c0dc: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x25C0DCu;
    {
        const bool branch_taken_0x25c0dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c0dc) {
            ctx->pc = 0x25C0E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25C0DCu;
            // 0x25c0e0: 0x948200b0  lhu         $v0, 0xB0($a0) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25C0F8u;
            goto label_25c0f8;
        }
    }
    ctx->pc = 0x25C0E4u;
    // 0x25c0e4: 0xc08c23c  jal         func_2308F0
    ctx->pc = 0x25C0E4u;
    SET_GPR_U32(ctx, 31, 0x25C0ECu);
    ctx->pc = 0x25C0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C0E4u;
    // 0x25c0e8: 0x24850048  addiu       $a1, $a0, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2308F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2308F0u, 0x25C0E4u, 0x25C0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C0ECu;
label_25c0ec:
    // 0x25c0ec: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x25c0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x25c0f0: 0x948200b0  lhu         $v0, 0xB0($a0)
    ctx->pc = 0x25c0f0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x25c0f4: 0x0  nop
    ctx->pc = 0x25c0f4u;
    // NOP
label_25c0f8:
    // 0x25c0f8: 0x3042003c  andi        $v0, $v0, 0x3C
    ctx->pc = 0x25c0f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)60);
    // 0x25c0fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25C0FCu;
    {
        const bool branch_taken_0x25c0fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C0FCu;
        // 0x25c100: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c0fc) {
            ctx->pc = 0x25C110u;
            goto label_25c110;
        }
    }
    ctx->pc = 0x25C104u;
    // 0x25c104: 0xc08c23c  jal         func_2308F0
    ctx->pc = 0x25C104u;
    SET_GPR_U32(ctx, 31, 0x25C10Cu);
    ctx->pc = 0x25C108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C104u;
    // 0x25c108: 0x24850080  addiu       $a1, $a0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2308F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2308F0u, 0x25C104u, 0x25C10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C10Cu;
label_25c10c:
    // 0x25c10c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25c10cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_25c110:
    // 0x25c110: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25c110u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25c114: 0x3e00008  jr          $ra
    ctx->pc = 0x25C114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25C118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C114u;
        // 0x25c118: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25C11Cu;
    // 0x25c11c: 0x0  nop
    ctx->pc = 0x25c11cu;
    // NOP
    // 0x25c120: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25c120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25c124: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x25c124u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c128: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25c128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25c12c: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x25c12cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x25c130: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x25c130u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c134: 0x91650001  lbu         $a1, 0x1($t3)
    ctx->pc = 0x25c134u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x25c138: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x25c138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25c13c: 0x14a3003d  bne         $a1, $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x25C13Cu;
    {
        const bool branch_taken_0x25c13c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x25C140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C13Cu;
        // 0x25c140: 0x244ac0b8  addiu       $t2, $v0, -0x3F48 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c13c) {
            ctx->pc = 0x25C234u;
            goto label_25c234;
        }
    }
    ctx->pc = 0x25C144u;
    // 0x25c144: 0x91630000  lbu         $v1, 0x0($t3)
    ctx->pc = 0x25c144u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x25c148: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x25c148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x25c14c: 0x1462003a  bne         $v1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x25C14Cu;
    {
        const bool branch_taken_0x25c14c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x25C150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C14Cu;
        // 0x25c150: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c14c) {
            ctx->pc = 0x25C238u;
            goto label_25c238;
        }
    }
    ctx->pc = 0x25C154u;
    // 0x25c154: 0x2d020015  sltiu       $v0, $t0, 0x15
    ctx->pc = 0x25c154u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x25c158: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x25C158u;
    {
        const bool branch_taken_0x25c158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C158u;
        // 0x25c15c: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c158) {
            ctx->pc = 0x25C234u;
            goto label_25c234;
        }
    }
    ctx->pc = 0x25C160u;
    // 0x25c160: 0x82080  sll         $a0, $t0, 2
    ctx->pc = 0x25c160u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x25c164: 0x24421050  addiu       $v0, $v0, 0x1050
    ctx->pc = 0x25c164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4176));
    // 0x25c168: 0x2503fff2  addiu       $v1, $t0, -0xE
    ctx->pc = 0x25c168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967282));
    // 0x25c16c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x25c16cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x25c170: 0x2c630004  sltiu       $v1, $v1, 0x4
    ctx->pc = 0x25c170u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x25c174: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x25C174u;
    {
        const bool branch_taken_0x25c174 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C174u;
        // 0x25c178: 0x8c890000  lw          $t1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c174) {
            ctx->pc = 0x25C18Cu;
            goto label_25c18c;
        }
    }
    ctx->pc = 0x25C17Cu;
    // 0x25c17c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x25c17cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x25c180: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25c180u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c184: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x25C184u;
    {
        const bool branch_taken_0x25c184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C184u;
        // 0x25c188: 0x244ac4c0  addiu       $t2, $v0, -0x3B40 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c184) {
            ctx->pc = 0x25C1A0u;
            goto label_25c1a0;
        }
    }
    ctx->pc = 0x25C18Cu;
label_25c18c:
    // 0x25c18c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x25c18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x25c190: 0x51020003  beql        $t0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25C190u;
    {
        const bool branch_taken_0x25c190 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x25c190) {
            ctx->pc = 0x25C194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25C190u;
            // 0x25c194: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25C1A0u;
            goto label_25c1a0;
        }
    }
    ctx->pc = 0x25C198u;
    // 0x25c198: 0x11200027  beqz        $t1, . + 4 + (0x27 << 2)
    ctx->pc = 0x25C198u;
    {
        const bool branch_taken_0x25c198 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C198u;
        // 0x25c19c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c198) {
            ctx->pc = 0x25C238u;
            goto label_25c238;
        }
    }
    ctx->pc = 0x25C1A0u;
label_25c1a0:
    // 0x25c1a0: 0x10c0001b  beqz        $a2, . + 4 + (0x1B << 2)
    ctx->pc = 0x25C1A0u;
    {
        const bool branch_taken_0x25c1a0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C1A0u;
        // 0x25c1a4: 0x3c04003a  lui         $a0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c1a0) {
            ctx->pc = 0x25C210u;
            goto label_25c210;
        }
    }
    ctx->pc = 0x25C1A8u;
    // 0x25c1a8: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x25c1a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x25c1ac: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x25c1acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x25c1b0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x25c1b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x25c1b4: 0x89650007  lwl         $a1, 0x7($t3)
    ctx->pc = 0x25c1b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 5) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 5, (int32_t)merged); }
    // 0x25c1b8: 0x99650004  lwr         $a1, 0x4($t3)
    ctx->pc = 0x25c1b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 5) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 5) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 5, merged64); }
    // 0x25c1bc: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x25c1bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x25c1c0: 0x88c7000f  lwl         $a3, 0xF($a2)
    ctx->pc = 0x25c1c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x25c1c4: 0x98c7000c  lwr         $a3, 0xC($a2)
    ctx->pc = 0x25c1c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x25c1c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x25c1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x25c1cc: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x25c1ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x25c1d0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x25c1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x25c1d4: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x25c1d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x25c1d8: 0x90480001  lbu         $t0, 0x1($v0)
    ctx->pc = 0x25c1d8u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x25c1dc: 0x248416e0  addiu       $a0, $a0, 0x16E0
    ctx->pc = 0x25c1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5856));
    // 0x25c1e0: 0x90460003  lbu         $a2, 0x3($v0)
    ctx->pc = 0x25c1e0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x25c1e4: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x25c1e4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x25c1e8: 0x84238  dsll        $t0, $t0, 8
    ctx->pc = 0x25c1e8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 8);
    // 0x25c1ec: 0x904b0000  lbu         $t3, 0x0($v0)
    ctx->pc = 0x25c1ecu;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25c1f0: 0x63238  dsll        $a2, $a2, 8
    ctx->pc = 0x25c1f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 8);
    // 0x25c1f4: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x25c1f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x25c1f8: 0x10b4025  or          $t0, $t0, $t3
    ctx->pc = 0x25c1f8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 11));
    // 0x25c1fc: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x25c1fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x25c200: 0xc093044  jal         func_24C110
    ctx->pc = 0x25C200u;
    SET_GPR_U32(ctx, 31, 0x25C208u);
    ctx->pc = 0x25C204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C200u;
    // 0x25c204: 0x3108ffff  andi        $t0, $t0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C110u, 0x25C200u, 0x25C208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C208u;
label_25c208:
    // 0x25c208: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x25C208u;
    {
        const bool branch_taken_0x25c208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C208u;
        // 0x25c20c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c208) {
            ctx->pc = 0x25C238u;
            goto label_25c238;
        }
    }
    ctx->pc = 0x25C210u;
label_25c210:
    // 0x25c210: 0x89650007  lwl         $a1, 0x7($t3)
    ctx->pc = 0x25c210u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 5) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 5, (int32_t)merged); }
    // 0x25c214: 0x99650004  lwr         $a1, 0x4($t3)
    ctx->pc = 0x25c214u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 5) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 5) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 5, merged64); }
    // 0x25c218: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x25c218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x25c21c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x25c21cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x25c220: 0x248416e0  addiu       $a0, $a0, 0x16E0
    ctx->pc = 0x25c220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5856));
    // 0x25c224: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x25c224u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x25c228: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x25c228u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c22c: 0xc093098  jal         func_24C260
    ctx->pc = 0x25C22Cu;
    SET_GPR_U32(ctx, 31, 0x25C234u);
    ctx->pc = 0x25C230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C22Cu;
    // 0x25c230: 0x140382d  daddu       $a3, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C260u, 0x25C22Cu, 0x25C234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C234u;
label_25c234:
    // 0x25c234: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25c234u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25c238:
    // 0x25c238: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25c238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25c23c: 0x3e00008  jr          $ra
    ctx->pc = 0x25C23Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25C240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C23Cu;
        // 0x25c240: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C23Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25C244u;
    // 0x25c244: 0x0  nop
    ctx->pc = 0x25c244u;
    // NOP
}
