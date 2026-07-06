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

// Function: sub_002DA0A0
// Address: 0x2da0a0 - 0x2da1e0
void sub_002DA0A0_0x2da0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DA0A0_0x2da0a0");
#endif

    switch (ctx->pc) {
        case 0x2da0e8u: goto label_2da0e8;
        case 0x2da130u: goto label_2da130;
        case 0x2da138u: goto label_2da138;
        case 0x2da148u: goto label_2da148;
        case 0x2da160u: goto label_2da160;
        case 0x2da170u: goto label_2da170;
        case 0x2da190u: goto label_2da190;
        case 0x2da198u: goto label_2da198;
        case 0x2da1a8u: goto label_2da1a8;
        case 0x2da1c4u: goto label_2da1c4;
        default: break;
    }

    ctx->pc = 0x2da0a0u;

    // 0x2da0a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2da0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2da0a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2da0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2da0a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2da0a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da0ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2da0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2da0b0: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x2da0b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2da0b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2da0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2da0b8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2da0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2da0bc: 0x3c03002e  lui         $v1, 0x2E
    ctx->pc = 0x2da0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)46 << 16));
    // 0x2da0c0: 0x2463a108  addiu       $v1, $v1, -0x5EF8
    ctx->pc = 0x2da0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942984));
    // 0x2da0c4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2da0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2da0c8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DA0C8u;
    {
        const bool branch_taken_0x2da0c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2da0c8) {
            ctx->pc = 0x2DA0E8u;
            goto label_2da0e8;
        }
    }
    ctx->pc = 0x2DA0D0u;
    // 0x2da0d0: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2da0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2da0d4: 0x2484a11c  addiu       $a0, $a0, -0x5EE4
    ctx->pc = 0x2da0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943004));
    // 0x2da0d8: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x2da0d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2da0dc: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2da0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2da0e0: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2DA0E0u;
    SET_GPR_U32(ctx, 31, 0x2DA0E8u);
    ctx->pc = 0x2DA0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA0E0u;
    // 0x2da0e4: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FC0u, 0x2DA0E0u, 0x2DA0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA0E8u;
label_2da0e8:
    // 0x2da0e8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2DA0E8u;
    {
        const bool branch_taken_0x2da0e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da0e8) {
            ctx->pc = 0x2DA11Cu;
            goto label_2da11c;
        }
    }
    ctx->pc = 0x2DA0F0u;
    // 0x2da0f0: 0x1353020  add         $a2, $t1, $s5
    ctx->pc = 0x2da0f0u;
    {     int32_t rs_val = GPR_S32(ctx, 9);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
    // 0x2da0f4: 0x26839ce8  addiu       $v1, $s4, -0x6318
    ctx->pc = 0x2da0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941928));
    // 0x2da0f8: 0xa0725d31  sb          $s2, 0x5D31($v1)
    ctx->pc = 0x2da0f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 23857), (uint8_t)GPR_U32(ctx, 18));
    // 0x2da0fc: 0xdf0e0e47  ld          $t6, 0xE47($t8)
    ctx->pc = 0x2da0fcu;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 24), 3655)));
    // 0x2da100: 0x25e96d00  addiu       $t1, $t7, 0x6D00
    ctx->pc = 0x2da100u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 15), 27904));
    // 0x2da104: 0x84af5a53  lh          $t7, 0x5A53($a1)
    ctx->pc = 0x2da104u;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 23123)));
    // 0x2da108: 0x0  nop
    ctx->pc = 0x2da108u;
    // NOP
    // 0x2da10c: 0x6d30eb7b  ldr         $s0, -0x1485($t1)
    ctx->pc = 0x2da10cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 4294962043); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
    // 0x2da110: 0xc712d046  lwc1        $f18, -0x2FBA($t8)
    ctx->pc = 0x2da110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294955078)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x2da114: 0x6d30eb23  ldr         $s0, -0x14DD($t1)
    ctx->pc = 0x2da114u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 4294961955); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
    // 0x2da118: 0x0  nop
    ctx->pc = 0x2da118u;
    // NOP
label_2da11c:
    // 0x2da11c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2da11cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2da120: 0x245298b0  addiu       $s2, $v0, -0x6750
    ctx->pc = 0x2da120u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940848));
    // 0x2da124: 0xd2da863f  lld         $k0, -0x79C1($s6)
    ctx->pc = 0x2da124u;
    throw std::runtime_error("Unhandled opcode: 0x34 at 0x2DA124 raw=0xD2DA863F");
    // 0x2da128: 0x92d8c244  lbu         $t8, -0x3DBC($s6)
    ctx->pc = 0x2da128u;
    SET_GPR_U32(ctx, 24, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 4294951492)));
    // 0x2da12c: 0x3df2e4e  .word       0x03DF2E4E                   # INVALID     $fp, $ra, 0x2E4E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2da12cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2DA12C raw=0x03DF2E4E");
label_2da130:
    // 0x2da130: 0xc09ec24  jal         func_27B090
    ctx->pc = 0x2DA130u;
    SET_GPR_U32(ctx, 31, 0x2DA138u);
    ctx->pc = 0x2DA134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA130u;
    // 0x2da134: 0x12da8e4e  beq         $s6, $k0, . + 4 + (-0x71B2 << 2) (Delay Slot)
    // Likely branch instruction at 0x2DA134 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B090u, 0x2DA130u, 0x2DA138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA138u;
label_2da138:
    // 0x2da138: 0x92db464e  lbu         $k1, 0x464E($s6)
    ctx->pc = 0x2da138u;
    SET_GPR_U32(ctx, 27, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 17998)));
    // 0x2da13c: 0x56df2e4e  bnel        $s6, $ra, . + 4 + (0x2E4E << 2)
    ctx->pc = 0x2DA13Cu;
    {
        const bool branch_taken_0x2da13c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 31));
        if (branch_taken_0x2da13c) {
            ctx->pc = 0x2DA140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DA13Cu;
            // 0x2da140: 0xc0b8b74  jal         func_2E2DD0 (Delay Slot)
            // JAL 0x2E2DD0 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5A78u;
            return;
        }
    }
    ctx->pc = 0x2DA144u;
    // 0x2da144: 0x8d172c6a  lw          $s7, 0x2C6A($t0)
    ctx->pc = 0x2da144u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 11370)));
label_2da148:
    // 0x2da148: 0x2df264e  .word       0x02DF264E                   # INVALID     $s6, $ra, 0x264E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2da148u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2DA148 raw=0x02DF264E");
    // 0x2da14c: 0x92daae0a  lbu         $k0, -0x51F6($s6)
    ctx->pc = 0x2da14cu;
    SET_GPR_U32(ctx, 26, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 4294946314)));
    // 0x2da150: 0xd2db8e0c  lld         $k1, -0x71F4($s6)
    ctx->pc = 0x2da150u;
    throw std::runtime_error("Unhandled opcode: 0x34 at 0x2DA150 raw=0xD2DB8E0C");
    // 0x2da154: 0x12da8e4e  beq         $s6, $k0, . + 4 + (-0x71B2 << 2)
    ctx->pc = 0x2DA154u;
    {
        const bool branch_taken_0x2da154 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 26));
        ctx->pc = 0x2DA158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA154u;
        // 0x2da158: 0xc0b7454  jal         func_2DD150 (Delay Slot)
        // JAL 0x2DD150 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da154) {
            ctx->pc = 0x2BDA90u;
            return;
        }
    }
    ctx->pc = 0x2DA15Cu;
    // 0x2da15c: 0x12da8e4e  beq         $s6, $k0, . + 4 + (-0x71B2 << 2)
label_2da160:
    if (ctx->pc == 0x2DA160u) {
        ctx->pc = 0x2DA160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA15Cu;
        // 0x2da160: 0x92da064e  lbu         $k0, 0x64E($s6) (Delay Slot)
        SET_GPR_U32(ctx, 26, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 1614)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA164u;
        goto label_fallthrough_0x2da15c;
    }
    ctx->pc = 0x2DA15Cu;
    {
        const bool branch_taken_0x2da15c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 26));
        ctx->pc = 0x2DA160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA15Cu;
        // 0x2da160: 0x92da064e  lbu         $k0, 0x64E($s6) (Delay Slot)
        SET_GPR_U32(ctx, 26, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 1614)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da15c) {
            ctx->pc = 0x2BDA98u;
            return;
        }
    }
label_fallthrough_0x2da15c:
    ctx->pc = 0x2DA164u;
    // 0x2da164: 0x12da8e4e  beq         $s6, $k0, . + 4 + (-0x71B2 << 2)
    ctx->pc = 0x2DA164u;
    {
        const bool branch_taken_0x2da164 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 26));
        ctx->pc = 0x2DA168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA164u;
        // 0x2da168: 0xc0b7c90  jal         func_2DF240 (Delay Slot)
        // JAL 0x2DF240 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da164) {
            ctx->pc = 0x2BDAA0u;
            return;
        }
    }
    ctx->pc = 0x2DA16Cu;
    // 0x2da16c: 0x3df2e4e  .word       0x03DF2E4E                   # INVALID     $fp, $ra, 0x2E4E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2da16cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2DA16C raw=0x03DF2E4E");
label_2da170:
    // 0x2da170: 0xd2da845b  lld         $k0, -0x7BA5($s6)
    ctx->pc = 0x2da170u;
    throw std::runtime_error("Unhandled opcode: 0x34 at 0x2DA170 raw=0xD2DA845B");
    // 0x2da174: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2DA174u;
    {
        const bool branch_taken_0x2da174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da174) {
            ctx->pc = 0x2DA1A4u;
            goto label_2da1a4;
        }
    }
    ctx->pc = 0x2DA17Cu;
    // 0x2da17c: 0x86dcb1eb  lh          $gp, -0x4E15($s6)
    ctx->pc = 0x2da17cu;
    SET_GPR_S32(ctx, 28, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 4294947307)));
    // 0x2da180: 0x8ccca10d  lw          $t4, -0x5EF3($a2)
    ctx->pc = 0x2da180u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294942989)));
    // 0x2da184: 0x24531390  addiu       $s3, $v0, 0x1390
    ctx->pc = 0x2da184u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 5008));
    // 0x2da188: 0xc79b07a  jal         func_1E6C1E8
    ctx->pc = 0x2DA188u;
    SET_GPR_U32(ctx, 31, 0x2DA190u);
    ctx->pc = 0x2DA18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA188u;
    // 0x2da18c: 0xde98c66f  ld          $t8, -0x3991($s4) (Delay Slot)
    SET_GPR_U64(ctx, 24, READ64(ADD32(GPR_U32(ctx, 20), 4294952559)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6C1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6C1E8u, 0x2DA188u, 0x2DA190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA190u;
label_2da190:
    // 0x2da190: 0xcb7d5cf  jal         func_2DF573C
    ctx->pc = 0x2DA190u;
    SET_GPR_U32(ctx, 31, 0x2DA198u);
    ctx->pc = 0x2DA194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA190u;
    // 0x2da194: 0x6db7be03  ldr         $s7, -0x41FD($t5) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 4294950403); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 23, (GPR_U64(ctx, 23) & keepMask) | (mem >> shift)); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF573Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF573Cu, 0x2DA190u, 0x2DA198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA198u;
label_2da198:
    // 0x2da198: 0xc712d047  lwc1        $f18, -0x2FB9($t8)
    ctx->pc = 0x2da198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294955079)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x2da19c: 0x6db7be5b  ldr         $s7, -0x41A5($t5)
    ctx->pc = 0x2da19cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 4294950491); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 23, (GPR_U64(ctx, 23) & keepMask) | (mem >> shift)); }
    // 0x2da1a0: 0x0  nop
    ctx->pc = 0x2da1a0u;
    // NOP
label_2da1a4:
    // 0x2da1a4: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x2da1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
label_2da1a8:
    // 0x2da1a8: 0x2442a194  addiu       $v0, $v0, -0x5E6C
    ctx->pc = 0x2da1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943124));
    // 0x2da1ac: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2da1acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2da1b0: 0x2484a174  addiu       $a0, $a0, -0x5E8C
    ctx->pc = 0x2da1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943092));
    // 0x2da1b4: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2da1b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2da1b8: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2da1b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2da1bc: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2DA1BCu;
    SET_GPR_U32(ctx, 31, 0x2DA1C4u);
    ctx->pc = 0x2DA1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA1BCu;
    // 0x2da1c0: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FC0u, 0x2DA1BCu, 0x2DA1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA1C4u;
label_2da1c4:
    // 0x2da1c4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2da1c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da1c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2da1c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2da1cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2da1ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2da1d0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2da1d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2da1d4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2da1d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2da1d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DA1D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DA1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA1D8u;
        // 0x2da1dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DA1D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DA1E0u;
}
