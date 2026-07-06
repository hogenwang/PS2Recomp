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

// Function: sub_00247F30
// Address: 0x247f30 - 0x248080
void sub_00247F30_0x247f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247F30_0x247f30");
#endif

    switch (ctx->pc) {
        case 0x247f8cu: goto label_247f8c;
        case 0x248014u: goto label_248014;
        case 0x248028u: goto label_248028;
        case 0x248058u: goto label_248058;
        default: break;
    }

    ctx->pc = 0x247f30u;

    // 0x247f30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x247f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x247f34: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x247f34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x247f38: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x247f38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x247f3c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x247f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x247f40: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x247f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x247f44: 0x2462ae28  addiu       $v0, $v1, -0x51D8
    ctx->pc = 0x247f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946344));
    // 0x247f48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x247f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x247f4c: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x247f4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x247f50: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x247f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x247f54: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x247f54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247f58: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x247f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x247f5c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x247f5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247f60: 0xa067ae28  sb          $a3, -0x51D8($v1)
    ctx->pc = 0x247f60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294946344), (uint8_t)GPR_U32(ctx, 7));
    // 0x247f64: 0x6302b  sltu        $a2, $zero, $a2
    ctx->pc = 0x247f64u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x247f68: 0xa0480001  sb          $t0, 0x1($v0)
    ctx->pc = 0x247f68u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 8));
    // 0x247f6c: 0x8a630003  lwl         $v1, 0x3($s3)
    ctx->pc = 0x247f6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x247f70: 0x9a630000  lwr         $v1, 0x0($s3)
    ctx->pc = 0x247f70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x247f74: 0xa8430007  swl         $v1, 0x7($v0)
    ctx->pc = 0x247f74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x247f78: 0xb8430004  swr         $v1, 0x4($v0)
    ctx->pc = 0x247f78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x247f7c: 0xa446000e  sh          $a2, 0xE($v0)
    ctx->pc = 0x247f7cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 6));
    // 0x247f80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x247f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247f84: 0xc090bf0  jal         func_242FC0
    ctx->pc = 0x247F84u;
    SET_GPR_U32(ctx, 31, 0x247F8Cu);
    ctx->pc = 0x247F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247F84u;
    // 0x247f88: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x242FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242FC0u, 0x247F84u, 0x247F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247F8Cu;
label_247f8c:
    // 0x247f8c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x247f8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247f90: 0x12200032  beqz        $s1, . + 4 + (0x32 << 2)
    ctx->pc = 0x247F90u;
    {
        const bool branch_taken_0x247f90 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x247F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247F90u;
        // 0x247f94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247f90) {
            ctx->pc = 0x24805Cu;
            goto label_24805c;
        }
    }
    ctx->pc = 0x247F98u;
    // 0x247f98: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x247f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x247f9c: 0x8e240034  lw          $a0, 0x34($s1)
    ctx->pc = 0x247f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x247fa0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x247fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x247fa4: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x247fa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x247fa8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x247FA8u;
    {
        const bool branch_taken_0x247fa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x247FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247FA8u;
        // 0x247fac: 0xae220038  sw          $v0, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247fa8) {
            ctx->pc = 0x247FBCu;
            goto label_247fbc;
        }
    }
    ctx->pc = 0x247FB0u;
    // 0x247fb0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x247fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x247fb4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x247FB4u;
    {
        const bool branch_taken_0x247fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247FB4u;
        // 0x247fb8: 0x24526a10  addiu       $s2, $v0, 0x6A10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 27152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247fb4) {
            ctx->pc = 0x247FF0u;
            goto label_247ff0;
        }
    }
    ctx->pc = 0x247FBCu;
label_247fbc:
    // 0x247fbc: 0x30820400  andi        $v0, $a0, 0x400
    ctx->pc = 0x247fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1024);
    // 0x247fc0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x247FC0u;
    {
        const bool branch_taken_0x247fc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x247fc0) {
            ctx->pc = 0x247FC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x247FC0u;
            // 0x247fc4: 0x8e220030  lw          $v0, 0x30($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x247FD4u;
            goto label_247fd4;
        }
    }
    ctx->pc = 0x247FC8u;
    // 0x247fc8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x247fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x247fcc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x247FCCu;
    {
        const bool branch_taken_0x247fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247FCCu;
        // 0x247fd0: 0x24526a30  addiu       $s2, $v0, 0x6A30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 27184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247fcc) {
            ctx->pc = 0x247FF0u;
            goto label_247ff0;
        }
    }
    ctx->pc = 0x247FD4u;
label_247fd4:
    // 0x247fd4: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x247fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x247fd8: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x247fd8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x247fdc: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x247FDCu;
    {
        const bool branch_taken_0x247fdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x247FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247FDCu;
        // 0x247fe0: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247fdc) {
            ctx->pc = 0x247FECu;
            goto label_247fec;
        }
    }
    ctx->pc = 0x247FE4u;
    // 0x247fe4: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x247FE4u;
    {
        const bool branch_taken_0x247fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247FE4u;
        // 0x247fe8: 0x8e220054  lw          $v0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247fe4) {
            ctx->pc = 0x24805Cu;
            goto label_24805c;
        }
    }
    ctx->pc = 0x247FECu;
label_247fec:
    // 0x247fec: 0x24526a50  addiu       $s2, $v0, 0x6A50
    ctx->pc = 0x247fecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 27216));
label_247ff0:
    // 0x247ff0: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x247FF0u;
    {
        const bool branch_taken_0x247ff0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x247FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247FF0u;
        // 0x247ff4: 0x3c10003f  lui         $s0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247ff0) {
            ctx->pc = 0x248058u;
            goto label_248058;
        }
    }
    ctx->pc = 0x247FF8u;
    // 0x247ff8: 0x8a620003  lwl         $v0, 0x3($s3)
    ctx->pc = 0x247ff8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x247ffc: 0x9a620000  lwr         $v0, 0x0($s3)
    ctx->pc = 0x247ffcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x248000: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x248000u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x248004: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x248004u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x248008: 0x26106a70  addiu       $s0, $s0, 0x6A70
    ctx->pc = 0x248008u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27248));
    // 0x24800c: 0xc092576  jal         func_2495D8
    ctx->pc = 0x24800Cu;
    SET_GPR_U32(ctx, 31, 0x248014u);
    ctx->pc = 0x248010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24800Cu;
    // 0x248010: 0x442024  and         $a0, $v0, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2495D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2495D8u, 0x24800Cu, 0x248014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248014u;
label_248014:
    // 0x248014: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x248014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248018: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x248018u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24801c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x24801cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248020: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x248020u;
    SET_GPR_U32(ctx, 31, 0x248028u);
    ctx->pc = 0x248024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248020u;
    // 0x248024: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x248020u, 0x248028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248028u;
label_248028:
    // 0x248028: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x248028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x24802c: 0x1c40000b  bgtz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x24802Cu;
    {
        const bool branch_taken_0x24802c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x248030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24802Cu;
        // 0x248030: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24802c) {
            ctx->pc = 0x24805Cu;
            goto label_24805c;
        }
    }
    ctx->pc = 0x248034u;
    // 0x248034: 0x8e280034  lw          $t0, 0x34($s1)
    ctx->pc = 0x248034u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x248038: 0x31022000  andi        $v0, $t0, 0x2000
    ctx->pc = 0x248038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)8192);
    // 0x24803c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24803Cu;
    {
        const bool branch_taken_0x24803c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x248040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24803Cu;
        // 0x248040: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24803c) {
            ctx->pc = 0x248058u;
            goto label_248058;
        }
    }
    ctx->pc = 0x248044u;
    // 0x248044: 0x8e270010  lw          $a3, 0x10($s1)
    ctx->pc = 0x248044u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x248048: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x248048u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x24804c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x24804cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248050: 0xc090d8e  jal         func_243638
    ctx->pc = 0x248050u;
    SET_GPR_U32(ctx, 31, 0x248058u);
    ctx->pc = 0x248054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248050u;
    // 0x248054: 0x8e260030  lw          $a2, 0x30($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243638u, 0x248050u, 0x248058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248058u;
label_248058:
    // 0x248058: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x248058u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24805c:
    // 0x24805c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x24805cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x248060: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x248060u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x248064: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x248064u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x248068: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x248068u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24806c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24806cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x248070: 0x3e00008  jr          $ra
    ctx->pc = 0x248070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248070u;
        // 0x248074: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248078u;
    // 0x248078: 0x3e00008  jr          $ra
    ctx->pc = 0x248078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24807Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248078u;
        // 0x24807c: 0x2402005f  addiu       $v0, $zero, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248080u;
}
