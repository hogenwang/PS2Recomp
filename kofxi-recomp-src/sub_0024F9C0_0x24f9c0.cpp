#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0024F9C0
// Address: 0x24f9c0 - 0x24fef8
void sub_0024F9C0_0x24f9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024F9C0_0x24f9c0");
#endif

    switch (ctx->pc) {
        case 0x24fa48u: goto label_24fa48;
        case 0x24fafcu: goto label_24fafc;
        case 0x24fb48u: goto label_24fb48;
        case 0x24fb64u: goto label_24fb64;
        case 0x24fb78u: goto label_24fb78;
        case 0x24fb98u: goto label_24fb98;
        case 0x24fbc4u: goto label_24fbc4;
        case 0x24fbd8u: goto label_24fbd8;
        case 0x24fbe4u: goto label_24fbe4;
        case 0x24fc3cu: goto label_24fc3c;
        case 0x24fc44u: goto label_24fc44;
        case 0x24fc64u: goto label_24fc64;
        case 0x24fd5cu: goto label_24fd5c;
        case 0x24fd70u: goto label_24fd70;
        case 0x24fd94u: goto label_24fd94;
        case 0x24fd9cu: goto label_24fd9c;
        case 0x24fdc4u: goto label_24fdc4;
        case 0x24fde4u: goto label_24fde4;
        case 0x24fe3cu: goto label_24fe3c;
        case 0x24feb0u: goto label_24feb0;
        default: break;
    }

    ctx->pc = 0x24f9c0u;

    // 0x24f9c0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x24f9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x24f9c4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x24f9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x24f9c8: 0xffb700a0  sd          $s7, 0xA0($sp)
    ctx->pc = 0x24f9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
    // 0x24f9cc: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x24f9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x24f9d0: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x24f9d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x24f9d4: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x24f9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x24f9d8: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x24f9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x24f9dc: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x24f9dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x24f9e0: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x24f9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x24f9e4: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x24f9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x24f9e8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x24f9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x24f9ec: 0xafa40014  sw          $a0, 0x14($sp)
    ctx->pc = 0x24f9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
    // 0x24f9f0: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x24f9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x24f9f4: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x24f9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x24f9f8: 0x8c940008  lw          $s4, 0x8($a0)
    ctx->pc = 0x24f9f8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x24f9fc: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x24f9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x24fa00: 0x8a830013  lwl         $v1, 0x13($s4)
    ctx->pc = 0x24fa00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x24fa04: 0x9a830010  lwr         $v1, 0x10($s4)
    ctx->pc = 0x24fa04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x24fa08: 0xaba30003  swl         $v1, 0x3($sp)
    ctx->pc = 0x24fa08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x24fa0c: 0xbba30000  swr         $v1, 0x0($sp)
    ctx->pc = 0x24fa0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x24fa10: 0x92820000  lbu         $v0, 0x0($s4)
    ctx->pc = 0x24fa10u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x24fa14: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x24fa14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x24fa18: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24fa18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24fa1c: 0x2457ffec  addiu       $s7, $v0, -0x14
    ctx->pc = 0x24fa1cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
    // 0x24fa20: 0x1ae000fa  blez        $s7, . + 4 + (0xFA << 2)
    ctx->pc = 0x24FA20u;
    {
        const bool branch_taken_0x24fa20 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x24FA24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24FA20u;
            // 0x24fa24: 0x26910014  addiu       $s1, $s4, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fa20) {
            ctx->pc = 0x24FE0Cu;
            goto label_24fe0c;
        }
    }
    ctx->pc = 0x24FA28u;
    // 0x24fa28: 0x92920014  lbu         $s2, 0x14($s4)
    ctx->pc = 0x24fa28u;
    SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x24fa2c: 0x124000f7  beqz        $s2, . + 4 + (0xF7 << 2)
    ctx->pc = 0x24FA2Cu;
    {
        const bool branch_taken_0x24fa2c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FA30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24FA2Cu;
            // 0x24fa30: 0x3c07003a  lui         $a3, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fa2c) {
            ctx->pc = 0x24FE0Cu;
            goto label_24fe0c;
        }
    }
    ctx->pc = 0x24FA34u;
    // 0x24fa34: 0x2682fffe  addiu       $v0, $s4, -0x2
    ctx->pc = 0x24fa34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967294));
    // 0x24fa38: 0x24e71040  addiu       $a3, $a3, 0x1040
    ctx->pc = 0x24fa38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4160));
    // 0x24fa3c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x24fa3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x24fa40: 0x24fe0004  addiu       $fp, $a3, 0x4
    ctx->pc = 0x24fa40u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x24fa44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24fa44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24fa48:
    // 0x24fa48: 0x16430003  bne         $s2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24FA48u;
    {
        const bool branch_taken_0x24fa48 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x24FA4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24FA48u;
            // 0x24fa4c: 0x2ee20002  sltiu       $v0, $s7, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fa48) {
            ctx->pc = 0x24FA58u;
            goto label_24fa58;
        }
    }
    ctx->pc = 0x24FA50u;
    // 0x24fa50: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x24FA50u;
    {
        const bool branch_taken_0x24fa50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FA54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24FA50u;
            // 0x24fa54: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fa50) {
            ctx->pc = 0x24FA7Cu;
            goto label_24fa7c;
        }
    }
    ctx->pc = 0x24FA58u;
label_24fa58:
    // 0x24fa58: 0x1440010f  bnez        $v0, . + 4 + (0x10F << 2)
    ctx->pc = 0x24FA58u;
    {
        const bool branch_taken_0x24fa58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24FA5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24FA58u;
            // 0x24fa5c: 0x2682ffff  addiu       $v0, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fa58) {
            ctx->pc = 0x24FE98u;
            goto label_24fe98;
        }
    }
    ctx->pc = 0x24FA60u;
    // 0x24fa60: 0x92360001  lbu         $s6, 0x1($s1)
    ctx->pc = 0x24fa60u;
    SET_GPR_U32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x24fa64: 0x2ec20002  sltiu       $v0, $s6, 0x2
    ctx->pc = 0x24fa64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x24fa68: 0x1440010b  bnez        $v0, . + 4 + (0x10B << 2)
    ctx->pc = 0x24FA68u;
    {
        const bool branch_taken_0x24fa68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24FA6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24FA68u;
            // 0x24fa6c: 0x2682ffff  addiu       $v0, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fa68) {
            ctx->pc = 0x24FE98u;
            goto label_24fe98;
        }
    }
    ctx->pc = 0x24FA70u;
    // 0x24fa70: 0x2f6102a  slt         $v0, $s7, $s6
    ctx->pc = 0x24fa70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x24fa74: 0x14400108  bnez        $v0, . + 4 + (0x108 << 2)
    ctx->pc = 0x24FA74u;
    {
        const bool branch_taken_0x24fa74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24FA78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24FA74u;
            // 0x24fa78: 0x2682ffff  addiu       $v0, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fa74) {
            ctx->pc = 0x24FE98u;
            goto label_24fe98;
        }
    }
    ctx->pc = 0x24FA7Cu;
label_24fa7c:
    // 0x24fa7c: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x24fa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x24fa80: 0x1242007d  beq         $s2, $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x24FA80u;
    {
        const bool branch_taken_0x24fa80 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x24FA84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24FA80u;
            // 0x24fa84: 0x2a420045  slti        $v0, $s2, 0x45 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)69) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fa80) {
            ctx->pc = 0x24FC78u;
            goto label_24fc78;
        }
    }
    ctx->pc = 0x24FA88u;
    // 0x24fa88: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24FA88u;
    {
        const bool branch_taken_0x24fa88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FA8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24FA88u;
            // 0x24fa8c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fa88) {
            ctx->pc = 0x24FAA0u;
            goto label_24faa0;
        }
    }
    ctx->pc = 0x24FA90u;
    // 0x24fa90: 0x1242005b  beq         $s2, $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x24FA90u;
    {
        const bool branch_taken_0x24fa90 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x24FA94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24FA90u;
            // 0x24fa94: 0x2ec20003  sltiu       $v0, $s6, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fa90) {
            ctx->pc = 0x24FC00u;
            goto label_24fc00;
        }
    }
    ctx->pc = 0x24FA98u;
    // 0x24fa98: 0x100000d6  b           . + 4 + (0xD6 << 2)
    ctx->pc = 0x24FA98u;
    {
        const bool branch_taken_0x24fa98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FA9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24FA98u;
            // 0x24fa9c: 0x2368821  addu        $s1, $s1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fa98) {
            ctx->pc = 0x24FDF4u;
            goto label_24fdf4;
        }
    }
    ctx->pc = 0x24FAA0u;
label_24faa0:
    // 0x24faa0: 0x24020083  addiu       $v0, $zero, 0x83
    ctx->pc = 0x24faa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
    // 0x24faa4: 0x12420003  beq         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24FAA4u;
    {
        const bool branch_taken_0x24faa4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x24FAA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24FAA4u;
            // 0x24faa8: 0x24040089  addiu       $a0, $zero, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24faa4) {
            ctx->pc = 0x24FAB4u;
            goto label_24fab4;
        }
    }
    ctx->pc = 0x24FAACu;
    // 0x24faac: 0x564400d1  bnel        $s2, $a0, . + 4 + (0xD1 << 2)
    ctx->pc = 0x24FAACu;
    {
        const bool branch_taken_0x24faac = (GPR_U64(ctx, 18) != GPR_U64(ctx, 4));
        if (branch_taken_0x24faac) {
            ctx->pc = 0x24FAB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24FAACu;
            // 0x24fab0: 0x2368821  addu        $s1, $s1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x24FDF4u;
            goto label_24fdf4;
        }
    }
    ctx->pc = 0x24FAB4u;
label_24fab4:
    // 0x24fab4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x24fab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x24fab8: 0x8c43101c  lw          $v1, 0x101C($v0)
    ctx->pc = 0x24fab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4124)));
    // 0x24fabc: 0x106000e3  beqz        $v1, . + 4 + (0xE3 << 2)
    ctx->pc = 0x24FABCu;
    {
        const bool branch_taken_0x24fabc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FAC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24FABCu;
            // 0x24fac0: 0x2ec20003  sltiu       $v0, $s6, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fabc) {
            ctx->pc = 0x24FE4Cu;
            goto label_24fe4c;
        }
    }
    ctx->pc = 0x24FAC4u;
    // 0x24fac4: 0x144000f4  bnez        $v0, . + 4 + (0xF4 << 2)
    ctx->pc = 0x24FAC4u;
    {
        const bool branch_taken_0x24fac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24FAC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24FAC4u;
            // 0x24fac8: 0x2682ffff  addiu       $v0, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fac4) {
            ctx->pc = 0x24FE98u;
            goto label_24fe98;
        }
    }
    ctx->pc = 0x24FACCu;
    // 0x24facc: 0x92300002  lbu         $s0, 0x2($s1)
    ctx->pc = 0x24faccu;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x24fad0: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x24fad0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x24fad4: 0x144000e1  bnez        $v0, . + 4 + (0xE1 << 2)
    ctx->pc = 0x24FAD4u;
    {
        const bool branch_taken_0x24fad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24FAD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24FAD4u;
            // 0x24fad8: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fad4) {
            ctx->pc = 0x24FE5Cu;
            goto label_24fe5c;
        }
    }
    ctx->pc = 0x24FADCu;
    // 0x24fadc: 0x24531040  addiu       $s3, $v0, 0x1040
    ctx->pc = 0x24fadcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4160));
    // 0x24fae0: 0x26750004  addiu       $s5, $s3, 0x4
    ctx->pc = 0x24fae0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x24fae4: 0x8a850013  lwl         $a1, 0x13($s4)
    ctx->pc = 0x24fae4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 5) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 5, (int32_t)merged); }
    // 0x24fae8: 0x9a850010  lwr         $a1, 0x10($s4)
    ctx->pc = 0x24fae8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 5) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 5) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 5, merged64); }
    // 0x24faec: 0xaa650007  swl         $a1, 0x7($s3)
    ctx->pc = 0x24faecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x24faf0: 0xba650004  swr         $a1, 0x4($s3)
    ctx->pc = 0x24faf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x24faf4: 0xc08d360  jal         func_234D80
    ctx->pc = 0x24FAF4u;
    SET_GPR_U32(ctx, 31, 0x24FAFCu);
    ctx->pc = 0x24FAF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24FAF4u;
            // 0x24faf8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234D80u;
    if (runtime->hasFunction(0x234D80u)) {
        auto targetFn = runtime->lookupFunction(0x234D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FAFCu; }
        if (ctx->pc != 0x24FAFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234D80_0x234d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FAFCu; }
        if (ctx->pc != 0x24FAFCu) { return; }
    }
    ctx->pc = 0x24FAFCu;
label_24fafc:
    // 0x24fafc: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x24FAFCu;
    {
        const bool branch_taken_0x24fafc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24fafc) {
            ctx->pc = 0x24FB00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24FAFCu;
            // 0x24fb00: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x24FB20u;
            goto label_24fb20;
        }
    }
    ctx->pc = 0x24FB04u;
    // 0x24fb04: 0x24030089  addiu       $v1, $zero, 0x89
    ctx->pc = 0x24fb04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
    // 0x24fb08: 0x164300ba  bne         $s2, $v1, . + 4 + (0xBA << 2)
    ctx->pc = 0x24FB08u;
    {
        const bool branch_taken_0x24fb08 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x24FB0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24FB08u;
            // 0x24fb0c: 0x2368821  addu        $s1, $s1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fb08) {
            ctx->pc = 0x24FDF4u;
            goto label_24fdf4;
        }
    }
    ctx->pc = 0x24FB10u;
    // 0x24fb10: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x24fb10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24fb14: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x24fb14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x24fb18: 0x100000e0  b           . + 4 + (0xE0 << 2)
    ctx->pc = 0x24FB18u;
    {
        const bool branch_taken_0x24fb18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FB1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24FB18u;
            // 0x24fb1c: 0xafa40018  sw          $a0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fb18) {
            ctx->pc = 0x24FE9Cu;
            goto label_24fe9c;
        }
    }
    ctx->pc = 0x24FB20u;
label_24fb20:
    // 0x24fb20: 0x26020004  addiu       $v0, $s0, 0x4
    ctx->pc = 0x24fb20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x24fb24: 0x2c2102b  sltu        $v0, $s6, $v0
    ctx->pc = 0x24fb24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x24fb28: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24FB28u;
    {
        const bool branch_taken_0x24fb28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FB2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24FB28u;
            // 0x24fb2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fb28) {
            ctx->pc = 0x24FB50u;
            goto label_24fb50;
        }
    }
    ctx->pc = 0x24FB30u;
    // 0x24fb30: 0x8a85000f  lwl         $a1, 0xF($s4)
    ctx->pc = 0x24fb30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 5) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 5, (int32_t)merged); }
    // 0x24fb34: 0x9a85000c  lwr         $a1, 0xC($s4)
    ctx->pc = 0x24fb34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 5) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 5) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 5, merged64); }
    // 0x24fb38: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x24fb38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x24fb3c: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x24fb3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x24fb40: 0xc093fec  jal         func_24FFB0
    ctx->pc = 0x24FB40u;
    SET_GPR_U32(ctx, 31, 0x24FB48u);
    ctx->pc = 0x24FB44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24FB40u;
            // 0x24fb44: 0xa62824  and         $a1, $a1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24FFB0u;
    if (runtime->hasFunction(0x24FFB0u)) {
        auto targetFn = runtime->lookupFunction(0x24FFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FB48u; }
        if (ctx->pc != 0x24FB48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0024FFB0_0x24ffb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FB48u; }
        if (ctx->pc != 0x24FB48u) { return; }
    }
    ctx->pc = 0x24FB48u;
label_24fb48:
    // 0x24fb48: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x24FB48u;
    {
        const bool branch_taken_0x24fb48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FB4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24FB48u;
            // 0x24fb4c: 0x2368821  addu        $s1, $s1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fb48) {
            ctx->pc = 0x24FDF4u;
            goto label_24fdf4;
        }
    }
    ctx->pc = 0x24FB50u;
label_24fb50:
    // 0x24fb50: 0x2308021  addu        $s0, $s1, $s0
    ctx->pc = 0x24fb50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x24fb54: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x24fb54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fb58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24fb58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fb5c: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x24FB5Cu;
    SET_GPR_U32(ctx, 31, 0x24FB64u);
    ctx->pc = 0x24FB60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24FB5Cu;
            // 0x24fb60: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (runtime->hasFunction(0x22D3E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FB64u; }
        if (ctx->pc != 0x24FB64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D3E0_0x22d3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FB64u; }
        if (ctx->pc != 0x24FB64u) { return; }
    }
    ctx->pc = 0x24FB64u;
label_24fb64:
    // 0x24fb64: 0x24070089  addiu       $a3, $zero, 0x89
    ctx->pc = 0x24fb64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
    // 0x24fb68: 0x16470005  bne         $s2, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x24FB68u;
    {
        const bool branch_taken_0x24fb68 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 7));
        if (branch_taken_0x24fb68) {
            ctx->pc = 0x24FB80u;
            goto label_24fb80;
        }
    }
    ctx->pc = 0x24FB70u;
    // 0x24fb70: 0xc08d360  jal         func_234D80
    ctx->pc = 0x24FB70u;
    SET_GPR_U32(ctx, 31, 0x24FB78u);
    ctx->pc = 0x24FB74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24FB70u;
            // 0x24fb74: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234D80u;
    if (runtime->hasFunction(0x234D80u)) {
        auto targetFn = runtime->lookupFunction(0x234D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FB78u; }
        if (ctx->pc != 0x24FB78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234D80_0x234d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FB78u; }
        if (ctx->pc != 0x24FB78u) { return; }
    }
    ctx->pc = 0x24FB78u;
label_24fb78:
    // 0x24fb78: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x24FB78u;
    {
        const bool branch_taken_0x24fb78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24fb78) {
            ctx->pc = 0x24FB98u;
            goto label_24fb98;
        }
    }
    ctx->pc = 0x24FB80u;
label_24fb80:
    // 0x24fb80: 0x8a640007  lwl         $a0, 0x7($s3)
    ctx->pc = 0x24fb80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x24fb84: 0x9a640004  lwr         $a0, 0x4($s3)
    ctx->pc = 0x24fb84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x24fb88: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x24fb88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x24fb8c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x24fb8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x24fb90: 0xc093fbe  jal         func_24FEF8
    ctx->pc = 0x24FB90u;
    SET_GPR_U32(ctx, 31, 0x24FB98u);
    ctx->pc = 0x24FB94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24FB90u;
            // 0x24fb94: 0x822024  and         $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24FEF8u;
    if (runtime->hasFunction(0x24FEF8u)) {
        auto targetFn = runtime->lookupFunction(0x24FEF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FB98u; }
        if (ctx->pc != 0x24FB98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0024FEF8_0x24fef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FB98u; }
        if (ctx->pc != 0x24FB98u) { return; }
    }
    ctx->pc = 0x24FB98u;
label_24fb98:
    // 0x24fb98: 0x104000b2  beqz        $v0, . + 4 + (0xB2 << 2)
    ctx->pc = 0x24FB98u;
    {
        const bool branch_taken_0x24fb98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FB9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24FB98u;
            // 0x24fb9c: 0x3c03003a  lui         $v1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fb98) {
            ctx->pc = 0x24FE64u;
            goto label_24fe64;
        }
    }
    ctx->pc = 0x24FBA0u;
    // 0x24fba0: 0x24631040  addiu       $v1, $v1, 0x1040
    ctx->pc = 0x24fba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4160));
    // 0x24fba4: 0x88640007  lwl         $a0, 0x7($v1)
    ctx->pc = 0x24fba4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x24fba8: 0x98640004  lwr         $a0, 0x4($v1)
    ctx->pc = 0x24fba8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x24fbac: 0xaa840013  swl         $a0, 0x13($s4)
    ctx->pc = 0x24fbacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x24fbb0: 0xba840010  swr         $a0, 0x10($s4)
    ctx->pc = 0x24fbb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x24fbb4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x24fbb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fbb8: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x24fbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x24fbbc: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x24FBBCu;
    SET_GPR_U32(ctx, 31, 0x24FBC4u);
    ctx->pc = 0x24FBC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24FBBCu;
            // 0x24fbc0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (runtime->hasFunction(0x22D3E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FBC4u; }
        if (ctx->pc != 0x24FBC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D3E0_0x22d3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FBC4u; }
        if (ctx->pc != 0x24FBC4u) { return; }
    }
    ctx->pc = 0x24FBC4u;
label_24fbc4:
    // 0x24fbc4: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x24fbc4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x24fbc8: 0x3c04f000  lui         $a0, 0xF000
    ctx->pc = 0x24fbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61440 << 16));
    // 0x24fbcc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x24fbccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x24fbd0: 0xc08a254  jal         func_228950
    ctx->pc = 0x24FBD0u;
    SET_GPR_U32(ctx, 31, 0x24FBD8u);
    ctx->pc = 0x24FBD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24FBD0u;
            // 0x24fbd4: 0xa2220002  sb          $v0, 0x2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (runtime->hasFunction(0x228950u)) {
        auto targetFn = runtime->lookupFunction(0x228950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FBD8u; }
        if (ctx->pc != 0x24FBD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228950_0x228950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FBD8u; }
        if (ctx->pc != 0x24FBD8u) { return; }
    }
    ctx->pc = 0x24FBD8u;
label_24fbd8:
    // 0x24fbd8: 0x3c04e000  lui         $a0, 0xE000
    ctx->pc = 0x24fbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57344 << 16));
    // 0x24fbdc: 0xc08a254  jal         func_228950
    ctx->pc = 0x24FBDCu;
    SET_GPR_U32(ctx, 31, 0x24FBE4u);
    ctx->pc = 0x24FBE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24FBDCu;
            // 0x24fbe0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (runtime->hasFunction(0x228950u)) {
        auto targetFn = runtime->lookupFunction(0x228950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FBE4u; }
        if (ctx->pc != 0x24FBE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228950_0x228950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FBE4u; }
        if (ctx->pc != 0x24FBE4u) { return; }
    }
    ctx->pc = 0x24FBE4u;
label_24fbe4:
    // 0x24fbe4: 0x8a830013  lwl         $v1, 0x13($s4)
    ctx->pc = 0x24fbe4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x24fbe8: 0x9a830010  lwr         $v1, 0x10($s4)
    ctx->pc = 0x24fbe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x24fbec: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x24fbecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x24fbf0: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x24fbf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x24fbf4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x24fbf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x24fbf8: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x24FBF8u;
    {
        const bool branch_taken_0x24fbf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FBFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24FBF8u;
            // 0x24fbfc: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fbf8) {
            ctx->pc = 0x24FDF0u;
            goto label_24fdf0;
        }
    }
    ctx->pc = 0x24FC00u;
label_24fc00:
    // 0x24fc00: 0x144000a5  bnez        $v0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x24FC00u;
    {
        const bool branch_taken_0x24fc00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24FC04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24FC00u;
            // 0x24fc04: 0x2682ffff  addiu       $v0, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fc00) {
            ctx->pc = 0x24FE98u;
            goto label_24fe98;
        }
    }
    ctx->pc = 0x24FC08u;
    // 0x24fc08: 0x92300002  lbu         $s0, 0x2($s1)
    ctx->pc = 0x24fc08u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x24fc0c: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x24fc0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x24fc10: 0x14400098  bnez        $v0, . + 4 + (0x98 << 2)
    ctx->pc = 0x24FC10u;
    {
        const bool branch_taken_0x24fc10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24FC14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24FC10u;
            // 0x24fc14: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fc10) {
            ctx->pc = 0x24FE74u;
            goto label_24fe74;
        }
    }
    ctx->pc = 0x24FC18u;
    // 0x24fc18: 0x26020004  addiu       $v0, $s0, 0x4
    ctx->pc = 0x24fc18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x24fc1c: 0x2c2102b  sltu        $v0, $s6, $v0
    ctx->pc = 0x24fc1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x24fc20: 0x54400074  bnel        $v0, $zero, . + 4 + (0x74 << 2)
    ctx->pc = 0x24FC20u;
    {
        const bool branch_taken_0x24fc20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24fc20) {
            ctx->pc = 0x24FC24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24FC20u;
            // 0x24fc24: 0x2368821  addu        $s1, $s1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x24FDF4u;
            goto label_24fdf4;
        }
    }
    ctx->pc = 0x24FC28u;
    // 0x24fc28: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x24fc28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x24fc2c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x24fc2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fc30: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x24fc30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x24fc34: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x24FC34u;
    SET_GPR_U32(ctx, 31, 0x24FC3Cu);
    ctx->pc = 0x24FC38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24FC34u;
            // 0x24fc38: 0x27d2fffc  addiu       $s2, $fp, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (runtime->hasFunction(0x22D3E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FC3Cu; }
        if (ctx->pc != 0x24FC3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D3E0_0x22d3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FC3Cu; }
        if (ctx->pc != 0x24FC3Cu) { return; }
    }
    ctx->pc = 0x24FC3Cu;
label_24fc3c:
    // 0x24fc3c: 0xc08d360  jal         func_234D80
    ctx->pc = 0x24FC3Cu;
    SET_GPR_U32(ctx, 31, 0x24FC44u);
    ctx->pc = 0x24FC40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24FC3Cu;
            // 0x24fc40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234D80u;
    if (runtime->hasFunction(0x234D80u)) {
        auto targetFn = runtime->lookupFunction(0x234D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FC44u; }
        if (ctx->pc != 0x24FC44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234D80_0x234d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FC44u; }
        if (ctx->pc != 0x24FC44u) { return; }
    }
    ctx->pc = 0x24FC44u;
label_24fc44:
    // 0x24fc44: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x24FC44u;
    {
        const bool branch_taken_0x24fc44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24fc44) {
            ctx->pc = 0x24FC48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24FC44u;
            // 0x24fc48: 0x24440060  addiu       $a0, $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
        ctx->in_delay_slot = false;
            ctx->pc = 0x24FC6Cu;
            goto label_24fc6c;
        }
    }
    ctx->pc = 0x24FC4Cu;
    // 0x24fc4c: 0x8a440007  lwl         $a0, 0x7($s2)
    ctx->pc = 0x24fc4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x24fc50: 0x9a440004  lwr         $a0, 0x4($s2)
    ctx->pc = 0x24fc50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x24fc54: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x24fc54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x24fc58: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x24fc58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x24fc5c: 0xc093fbe  jal         func_24FEF8
    ctx->pc = 0x24FC5Cu;
    SET_GPR_U32(ctx, 31, 0x24FC64u);
    ctx->pc = 0x24FC60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24FC5Cu;
            // 0x24fc60: 0x822024  and         $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24FEF8u;
    if (runtime->hasFunction(0x24FEF8u)) {
        auto targetFn = runtime->lookupFunction(0x24FEF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FC64u; }
        if (ctx->pc != 0x24FC64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0024FEF8_0x24fef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FC64u; }
        if (ctx->pc != 0x24FC64u) { return; }
    }
    ctx->pc = 0x24FC64u;
label_24fc64:
    // 0x24fc64: 0x10400085  beqz        $v0, . + 4 + (0x85 << 2)
    ctx->pc = 0x24FC64u;
    {
        const bool branch_taken_0x24fc64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FC68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24FC64u;
            // 0x24fc68: 0x24440060  addiu       $a0, $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fc64) {
            ctx->pc = 0x24FE7Cu;
            goto label_24fe7c;
        }
    }
    ctx->pc = 0x24FC6Cu;
label_24fc6c:
    // 0x24fc6c: 0x2302821  addu        $a1, $s1, $s0
    ctx->pc = 0x24fc6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x24fc70: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x24FC70u;
    {
        const bool branch_taken_0x24fc70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FC74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24FC70u;
            // 0x24fc74: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fc70) {
            ctx->pc = 0x24FDDCu;
            goto label_24fddc;
        }
    }
    ctx->pc = 0x24FC78u;
label_24fc78:
    // 0x24fc78: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x24fc78u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x24fc7c: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x24fc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x24fc80: 0x2c420025  sltiu       $v0, $v0, 0x25
    ctx->pc = 0x24fc80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)37) ? 1 : 0);
    // 0x24fc84: 0x10400084  beqz        $v0, . + 4 + (0x84 << 2)
    ctx->pc = 0x24FC84u;
    {
        const bool branch_taken_0x24fc84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FC88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24FC84u;
            // 0x24fc88: 0x2682ffff  addiu       $v0, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fc84) {
            ctx->pc = 0x24FE98u;
            goto label_24fe98;
        }
    }
    ctx->pc = 0x24FC8Cu;
    // 0x24fc8c: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x24fc8cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x24fc90: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x24fc90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x24fc94: 0x14400080  bnez        $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x24FC94u;
    {
        const bool branch_taken_0x24fc94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24FC98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24FC94u;
            // 0x24fc98: 0x2682fffe  addiu       $v0, $s4, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fc94) {
            ctx->pc = 0x24FE98u;
            goto label_24fe98;
        }
    }
    ctx->pc = 0x24FC9Cu;
    // 0x24fc9c: 0x92250001  lbu         $a1, 0x1($s1)
    ctx->pc = 0x24fc9cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x24fca0: 0x92240002  lbu         $a0, 0x2($s1)
    ctx->pc = 0x24fca0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x24fca4: 0x24a2fffc  addiu       $v0, $a1, -0x4
    ctx->pc = 0x24fca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
    // 0x24fca8: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x24fca8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x24fcac: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x24FCACu;
    {
        const bool branch_taken_0x24fcac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24fcac) {
            ctx->pc = 0x24FCB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24FCACu;
            // 0x24fcb0: 0x92230003  lbu         $v1, 0x3($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x24FCE4u;
            goto label_24fce4;
        }
    }
    ctx->pc = 0x24FCB4u;
    // 0x24fcb4: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x24fcb4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x24fcb8: 0x21902  srl         $v1, $v0, 4
    ctx->pc = 0x24fcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x24fcbc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x24fcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x24fcc0: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x24fcc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x24fcc4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x24fcc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x24fcc8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x24fcc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x24fccc: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x24fcccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x24fcd0: 0x14600047  bnez        $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x24FCD0u;
    {
        const bool branch_taken_0x24fcd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24FCD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24FCD0u;
            // 0x24fcd4: 0xa2220003  sb          $v0, 0x3($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fcd0) {
            ctx->pc = 0x24FDF0u;
            goto label_24fdf0;
        }
    }
    ctx->pc = 0x24FCD8u;
    // 0x24fcd8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x24fcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24fcdc: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x24FCDCu;
    {
        const bool branch_taken_0x24fcdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FCE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24FCDCu;
            // 0x24fce0: 0x2233023  subu        $a2, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fcdc) {
            ctx->pc = 0x24FE9Cu;
            goto label_24fe9c;
        }
    }
    ctx->pc = 0x24FCE4u;
label_24fce4:
    // 0x24fce4: 0x2241021  addu        $v0, $s1, $a0
    ctx->pc = 0x24fce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x24fce8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x24fce8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24fcec: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x24fcecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x24fcf0: 0x1066000c  beq         $v1, $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x24FCF0u;
    {
        const bool branch_taken_0x24fcf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x24FCF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24FCF0u;
            // 0x24fcf4: 0x2450ffff  addiu       $s0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fcf0) {
            ctx->pc = 0x24FD24u;
            goto label_24fd24;
        }
    }
    ctx->pc = 0x24FCF8u;
    // 0x24fcf8: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x24fcf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x24fcfc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24FCFCu;
    {
        const bool branch_taken_0x24fcfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FD00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24FCFCu;
            // 0x24fd00: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fcfc) {
            ctx->pc = 0x24FD14u;
            goto label_24fd14;
        }
    }
    ctx->pc = 0x24FD04u;
    // 0x24fd04: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x24FD04u;
    {
        const bool branch_taken_0x24fd04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FD08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24FD04u;
            // 0x24fd08: 0x8fa70020  lw          $a3, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fd04) {
            ctx->pc = 0x24FDBCu;
            goto label_24fdbc;
        }
    }
    ctx->pc = 0x24FD0Cu;
    // 0x24fd0c: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x24FD0Cu;
    {
        const bool branch_taken_0x24fd0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FD10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24FD0Cu;
            // 0x24fd10: 0x2271023  subu        $v0, $s1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fd0c) {
            ctx->pc = 0x24FDB4u;
            goto label_24fdb4;
        }
    }
    ctx->pc = 0x24FD14u;
label_24fd14:
    // 0x24fd14: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x24FD14u;
    {
        const bool branch_taken_0x24fd14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24FD18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24FD14u;
            // 0x24fd18: 0x8fa70020  lw          $a3, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fd14) {
            ctx->pc = 0x24FD78u;
            goto label_24fd78;
        }
    }
    ctx->pc = 0x24FD1Cu;
    // 0x24fd1c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x24FD1Cu;
    {
        const bool branch_taken_0x24fd1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FD20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24FD1Cu;
            // 0x24fd20: 0x2271023  subu        $v0, $s1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fd1c) {
            ctx->pc = 0x24FDB4u;
            goto label_24fdb4;
        }
    }
    ctx->pc = 0x24FD24u;
label_24fd24:
    // 0x24fd24: 0x24820007  addiu       $v0, $a0, 0x7
    ctx->pc = 0x24fd24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
    // 0x24fd28: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x24fd28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x24fd2c: 0x14400057  bnez        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x24FD2Cu;
    {
        const bool branch_taken_0x24fd2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24FD30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24FD2Cu;
            // 0x24fd30: 0x3c07003a  lui         $a3, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fd2c) {
            ctx->pc = 0x24FE8Cu;
            goto label_24fe8c;
        }
    }
    ctx->pc = 0x24FD34u;
    // 0x24fd34: 0x24e71040  addiu       $a3, $a3, 0x1040
    ctx->pc = 0x24fd34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4160));
    // 0x24fd38: 0x8ba20003  lwl         $v0, 0x3($sp)
    ctx->pc = 0x24fd38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x24fd3c: 0x9ba20000  lwr         $v0, 0x0($sp)
    ctx->pc = 0x24fd3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x24fd40: 0xa8e20007  swl         $v0, 0x7($a3)
    ctx->pc = 0x24fd40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x24fd44: 0xb8e20004  swr         $v0, 0x4($a3)
    ctx->pc = 0x24fd44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x24fd48: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x24fd48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x24fd4c: 0x24841040  addiu       $a0, $a0, 0x1040
    ctx->pc = 0x24fd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4160));
    // 0x24fd50: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x24fd50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x24fd54: 0xc08d460  jal         func_235180
    ctx->pc = 0x24FD54u;
    SET_GPR_U32(ctx, 31, 0x24FD5Cu);
    ctx->pc = 0x24FD58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24FD54u;
            // 0x24fd58: 0x8cc50014  lw          $a1, 0x14($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x235180u;
    if (runtime->hasFunction(0x235180u)) {
        auto targetFn = runtime->lookupFunction(0x235180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FD5Cu; }
        if (ctx->pc != 0x24FD5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00235180_0x235180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FD5Cu; }
        if (ctx->pc != 0x24FD5Cu) { return; }
    }
    ctx->pc = 0x24FD5Cu;
label_24fd5c:
    // 0x24fd5c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x24FD5Cu;
    {
        const bool branch_taken_0x24fd5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FD60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24FD5Cu;
            // 0x24fd60: 0x24440060  addiu       $a0, $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fd5c) {
            ctx->pc = 0x24FDF0u;
            goto label_24fdf0;
        }
    }
    ctx->pc = 0x24FD64u;
    // 0x24fd64: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x24fd64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fd68: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x24FD68u;
    SET_GPR_U32(ctx, 31, 0x24FD70u);
    ctx->pc = 0x24FD6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24FD68u;
            // 0x24fd6c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (runtime->hasFunction(0x22D3E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FD70u; }
        if (ctx->pc != 0x24FD70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D3E0_0x22d3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FD70u; }
        if (ctx->pc != 0x24FD70u) { return; }
    }
    ctx->pc = 0x24FD70u;
label_24fd70:
    // 0x24fd70: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x24FD70u;
    {
        const bool branch_taken_0x24fd70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FD74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24FD70u;
            // 0x24fd74: 0x92220002  lbu         $v0, 0x2($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fd70) {
            ctx->pc = 0x24FDA8u;
            goto label_24fda8;
        }
    }
    ctx->pc = 0x24FD78u;
label_24fd78:
    // 0x24fd78: 0x24820007  addiu       $v0, $a0, 0x7
    ctx->pc = 0x24fd78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
    // 0x24fd7c: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x24fd7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x24fd80: 0x14400044  bnez        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x24FD80u;
    {
        const bool branch_taken_0x24fd80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24FD84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24FD80u;
            // 0x24fd84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fd80) {
            ctx->pc = 0x24FE94u;
            goto label_24fe94;
        }
    }
    ctx->pc = 0x24FD88u;
    // 0x24fd88: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x24fd88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fd8c: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x24FD8Cu;
    SET_GPR_U32(ctx, 31, 0x24FD94u);
    ctx->pc = 0x24FD90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24FD8Cu;
            // 0x24fd90: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (runtime->hasFunction(0x22D3E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FD94u; }
        if (ctx->pc != 0x24FD94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D3E0_0x22d3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FD94u; }
        if (ctx->pc != 0x24FD94u) { return; }
    }
    ctx->pc = 0x24FD94u;
label_24fd94:
    // 0x24fd94: 0xc08d360  jal         func_234D80
    ctx->pc = 0x24FD94u;
    SET_GPR_U32(ctx, 31, 0x24FD9Cu);
    ctx->pc = 0x24FD98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24FD94u;
            // 0x24fd98: 0x27c4fffc  addiu       $a0, $fp, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234D80u;
    if (runtime->hasFunction(0x234D80u)) {
        auto targetFn = runtime->lookupFunction(0x234D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FD9Cu; }
        if (ctx->pc != 0x24FD9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234D80_0x234d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FD9Cu; }
        if (ctx->pc != 0x24FD9Cu) { return; }
    }
    ctx->pc = 0x24FD9Cu;
label_24fd9c:
    // 0x24fd9c: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x24FD9Cu;
    {
        const bool branch_taken_0x24fd9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24fd9c) {
            ctx->pc = 0x24FDA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24FD9Cu;
            // 0x24fda0: 0x2368821  addu        $s1, $s1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x24FDF4u;
            goto label_24fdf4;
        }
    }
    ctx->pc = 0x24FDA4u;
    // 0x24fda4: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x24fda4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_24fda8:
    // 0x24fda8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x24fda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x24fdac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24FDACu;
    {
        const bool branch_taken_0x24fdac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FDB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24FDACu;
            // 0x24fdb0: 0xa2220002  sb          $v0, 0x2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fdac) {
            ctx->pc = 0x24FDBCu;
            goto label_24fdbc;
        }
    }
    ctx->pc = 0x24FDB4u;
label_24fdb4:
    // 0x24fdb4: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x24FDB4u;
    {
        const bool branch_taken_0x24fdb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FDB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24FDB4u;
            // 0x24fdb8: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fdb4) {
            ctx->pc = 0x24FE9Cu;
            goto label_24fe9c;
        }
    }
    ctx->pc = 0x24FDBCu;
label_24fdbc:
    // 0x24fdbc: 0xc0937d6  jal         func_24DF58
    ctx->pc = 0x24FDBCu;
    SET_GPR_U32(ctx, 31, 0x24FDC4u);
    ctx->pc = 0x24DF58u;
    if (runtime->hasFunction(0x24DF58u)) {
        auto targetFn = runtime->lookupFunction(0x24DF58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FDC4u; }
        if (ctx->pc != 0x24FDC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0024DF58_0x24df58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FDC4u; }
        if (ctx->pc != 0x24FDC4u) { return; }
    }
    ctx->pc = 0x24FDC4u;
label_24fdc4:
    // 0x24fdc4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x24fdc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x24fdc8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x24fdc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x24fdcc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x24fdccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x24fdd0: 0x92250002  lbu         $a1, 0x2($s1)
    ctx->pc = 0x24fdd0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x24fdd4: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x24fdd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x24fdd8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x24fdd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_24fddc:
    // 0x24fddc: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x24FDDCu;
    SET_GPR_U32(ctx, 31, 0x24FDE4u);
    ctx->pc = 0x22D3E0u;
    if (runtime->hasFunction(0x22D3E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FDE4u; }
        if (ctx->pc != 0x24FDE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D3E0_0x22d3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FDE4u; }
        if (ctx->pc != 0x24FDE4u) { return; }
    }
    ctx->pc = 0x24FDE4u;
label_24fde4:
    // 0x24fde4: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x24fde4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x24fde8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x24fde8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x24fdec: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x24fdecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
label_24fdf0:
    // 0x24fdf0: 0x2368821  addu        $s1, $s1, $s6
    ctx->pc = 0x24fdf0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
label_24fdf4:
    // 0x24fdf4: 0x2f6b823  subu        $s7, $s7, $s6
    ctx->pc = 0x24fdf4u;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 22)));
    // 0x24fdf8: 0x1ae00005  blez        $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x24FDF8u;
    {
        const bool branch_taken_0x24fdf8 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x24FDFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24FDF8u;
            // 0x24fdfc: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fdf8) {
            ctx->pc = 0x24FE10u;
            goto label_24fe10;
        }
    }
    ctx->pc = 0x24FE00u;
    // 0x24fe00: 0x92320000  lbu         $s2, 0x0($s1)
    ctx->pc = 0x24fe00u;
    SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x24fe04: 0x1640ff10  bnez        $s2, . + 4 + (-0xF0 << 2)
    ctx->pc = 0x24FE04u;
    {
        const bool branch_taken_0x24fe04 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x24FE08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24FE04u;
            // 0x24fe08: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fe04) {
            ctx->pc = 0x24FA48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24fa48;
        }
    }
    ctx->pc = 0x24FE0Cu;
label_24fe0c:
    // 0x24fe0c: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x24fe0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_24fe10:
    // 0x24fe10: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x24FE10u;
    {
        const bool branch_taken_0x24fe10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FE14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24FE10u;
            // 0x24fe14: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fe10) {
            ctx->pc = 0x24FE44u;
            goto label_24fe44;
        }
    }
    ctx->pc = 0x24FE18u;
    // 0x24fe18: 0x8c431014  lw          $v1, 0x1014($v0)
    ctx->pc = 0x24fe18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4116)));
    // 0x24fe1c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x24FE1Cu;
    {
        const bool branch_taken_0x24fe1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24FE20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24FE1Cu;
            // 0x24fe20: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fe1c) {
            ctx->pc = 0x24FE34u;
            goto label_24fe34;
        }
    }
    ctx->pc = 0x24FE24u;
    // 0x24fe24: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x24fe24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24fe28: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x24fe28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x24fe2c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x24FE2Cu;
    {
        const bool branch_taken_0x24fe2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FE30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24FE2Cu;
            // 0x24fe30: 0xafa30018  sw          $v1, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fe2c) {
            ctx->pc = 0x24FE9Cu;
            goto label_24fe9c;
        }
    }
    ctx->pc = 0x24FE34u;
label_24fe34:
    // 0x24fe34: 0xc094078  jal         func_2501E0
    ctx->pc = 0x24FE34u;
    SET_GPR_U32(ctx, 31, 0x24FE3Cu);
    ctx->pc = 0x24FE38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24FE34u;
            // 0x24fe38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2501E0u;
    if (runtime->hasFunction(0x2501E0u)) {
        auto targetFn = runtime->lookupFunction(0x2501E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FE3Cu; }
        if (ctx->pc != 0x24FE3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002501E0_0x2501e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FE3Cu; }
        if (ctx->pc != 0x24FE3Cu) { return; }
    }
    ctx->pc = 0x24FE3Cu;
label_24fe3c:
    // 0x24fe3c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x24FE3Cu;
    {
        const bool branch_taken_0x24fe3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FE40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24FE3Cu;
            // 0x24fe40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fe3c) {
            ctx->pc = 0x24FEC8u;
            goto label_24fec8;
        }
    }
    ctx->pc = 0x24FE44u;
label_24fe44:
    // 0x24fe44: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x24FE44u;
    {
        const bool branch_taken_0x24fe44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FE48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24FE44u;
            // 0x24fe48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fe44) {
            ctx->pc = 0x24FEC8u;
            goto label_24fec8;
        }
    }
    ctx->pc = 0x24FE4Cu;
label_24fe4c:
    // 0x24fe4c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x24fe4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24fe50: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x24fe50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x24fe54: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x24FE54u;
    {
        const bool branch_taken_0x24fe54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FE58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24FE54u;
            // 0x24fe58: 0xafa40018  sw          $a0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fe54) {
            ctx->pc = 0x24FE9Cu;
            goto label_24fe9c;
        }
    }
    ctx->pc = 0x24FE5Cu;
label_24fe5c:
    // 0x24fe5c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x24FE5Cu;
    {
        const bool branch_taken_0x24fe5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FE60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24FE5Cu;
            // 0x24fe60: 0x2682fffe  addiu       $v0, $s4, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fe5c) {
            ctx->pc = 0x24FE98u;
            goto label_24fe98;
        }
    }
    ctx->pc = 0x24FE64u;
label_24fe64:
    // 0x24fe64: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x24fe64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24fe68: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x24fe68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x24fe6c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x24FE6Cu;
    {
        const bool branch_taken_0x24fe6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FE70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24FE6Cu;
            // 0x24fe70: 0xafa50018  sw          $a1, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fe6c) {
            ctx->pc = 0x24FE9Cu;
            goto label_24fe9c;
        }
    }
    ctx->pc = 0x24FE74u;
label_24fe74:
    // 0x24fe74: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x24FE74u;
    {
        const bool branch_taken_0x24fe74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FE78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24FE74u;
            // 0x24fe78: 0x2682fffe  addiu       $v0, $s4, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fe74) {
            ctx->pc = 0x24FE98u;
            goto label_24fe98;
        }
    }
    ctx->pc = 0x24FE7Cu;
label_24fe7c:
    // 0x24fe7c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x24fe7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24fe80: 0xafa60018  sw          $a2, 0x18($sp)
    ctx->pc = 0x24fe80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 6));
    // 0x24fe84: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x24FE84u;
    {
        const bool branch_taken_0x24fe84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FE88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24FE84u;
            // 0x24fe88: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fe84) {
            ctx->pc = 0x24FE9Cu;
            goto label_24fe9c;
        }
    }
    ctx->pc = 0x24FE8Cu;
label_24fe8c:
    // 0x24fe8c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24FE8Cu;
    {
        const bool branch_taken_0x24fe8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FE90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24FE8Cu;
            // 0x24fe90: 0x2682fffe  addiu       $v0, $s4, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fe8c) {
            ctx->pc = 0x24FE98u;
            goto label_24fe98;
        }
    }
    ctx->pc = 0x24FE94u;
label_24fe94:
    // 0x24fe94: 0x2682fffe  addiu       $v0, $s4, -0x2
    ctx->pc = 0x24fe94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967294));
label_24fe98:
    // 0x24fe98: 0x2223023  subu        $a2, $s1, $v0
    ctx->pc = 0x24fe98u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_24fe9c:
    // 0x24fe9c: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x24fe9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x24fea0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x24fea0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fea4: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x24fea4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24fea8: 0xc0933c4  jal         func_24CF10
    ctx->pc = 0x24FEA8u;
    SET_GPR_U32(ctx, 31, 0x24FEB0u);
    ctx->pc = 0x24FEACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24FEA8u;
            // 0x24feac: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24CF10u;
    if (runtime->hasFunction(0x24CF10u)) {
        auto targetFn = runtime->lookupFunction(0x24CF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FEB0u; }
        if (ctx->pc != 0x24FEB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0024CF10_0x24cf10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FEB0u; }
        if (ctx->pc != 0x24FEB0u) { return; }
    }
    ctx->pc = 0x24FEB0u;
label_24feb0:
    // 0x24feb0: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x24feb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x24feb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24feb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24feb8: 0x248410a8  addiu       $a0, $a0, 0x10A8
    ctx->pc = 0x24feb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4264));
    // 0x24febc: 0xdc8300a8  ld          $v1, 0xA8($a0)
    ctx->pc = 0x24febcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x24fec0: 0x64630001  daddiu      $v1, $v1, 0x1
    ctx->pc = 0x24fec0u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
    // 0x24fec4: 0xfc8300a8  sd          $v1, 0xA8($a0)
    ctx->pc = 0x24fec4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 168), GPR_U64(ctx, 3));
label_24fec8:
    // 0x24fec8: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x24fec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x24fecc: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x24feccu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x24fed0: 0xdfb700a0  ld          $s7, 0xA0($sp)
    ctx->pc = 0x24fed0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x24fed4: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x24fed4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24fed8: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x24fed8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24fedc: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x24fedcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24fee0: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x24fee0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24fee4: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x24fee4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24fee8: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x24fee8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24feec: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x24feecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24fef0: 0x3e00008  jr          $ra
    ctx->pc = 0x24FEF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24FEF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24FEF0u;
            // 0x24fef4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24FEF8u;
    ctx->pc = 0x24fef8u;
}
