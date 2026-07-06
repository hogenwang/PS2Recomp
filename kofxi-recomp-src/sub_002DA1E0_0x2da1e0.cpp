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

// Function: sub_002DA1E0
// Address: 0x2da1e0 - 0x2da320
void sub_002DA1E0_0x2da1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DA1E0_0x2da1e0");
#endif

    switch (ctx->pc) {
        case 0x2da228u: goto label_2da228;
        case 0x2da278u: goto label_2da278;
        case 0x2da288u: goto label_2da288;
        case 0x2da2a0u: goto label_2da2a0;
        case 0x2da2b0u: goto label_2da2b0;
        case 0x2da304u: goto label_2da304;
        default: break;
    }

    ctx->pc = 0x2da1e0u;

    // 0x2da1e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2da1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2da1e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2da1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2da1e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2da1e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da1ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2da1ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2da1f0: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x2da1f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2da1f4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2da1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2da1f8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2da1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2da1fc: 0x3c03002e  lui         $v1, 0x2E
    ctx->pc = 0x2da1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)46 << 16));
    // 0x2da200: 0x2463a248  addiu       $v1, $v1, -0x5DB8
    ctx->pc = 0x2da200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943304));
    // 0x2da204: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2da204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2da208: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DA208u;
    {
        const bool branch_taken_0x2da208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2da208) {
            ctx->pc = 0x2DA228u;
            goto label_2da228;
        }
    }
    ctx->pc = 0x2DA210u;
    // 0x2da210: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2da210u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2da214: 0x2484a25c  addiu       $a0, $a0, -0x5DA4
    ctx->pc = 0x2da214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943324));
    // 0x2da218: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x2da218u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2da21c: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2da21cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2da220: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2DA220u;
    SET_GPR_U32(ctx, 31, 0x2DA228u);
    ctx->pc = 0x2DA224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA220u;
    // 0x2da224: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FC0u, 0x2DA220u, 0x2DA228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA228u;
label_2da228:
    // 0x2da228: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2DA228u;
    {
        const bool branch_taken_0x2da228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da228) {
            ctx->pc = 0x2DA25Cu;
            goto label_2da25c;
        }
    }
    ctx->pc = 0x2DA230u;
    // 0x2da230: 0xfcdecc3a  sd          $fp, -0x33C6($a2)
    ctx->pc = 0x2da230u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 4294954042), GPR_U64(ctx, 30));
    // 0x2da234: 0x1b22820  add         $a1, $t5, $s2
    ctx->pc = 0x2da234u;
    {     int32_t rs_val = GPR_S32(ctx, 13);     int32_t rt_val = GPR_S32(ctx, 18);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
    // 0x2da238: 0xa08a0ac9  sb          $t2, 0xAC9($a0)
    ctx->pc = 0x2da238u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2761), (uint8_t)GPR_U32(ctx, 10));
    // 0x2da23c: 0xa10fd6e9  sb          $t7, -0x2917($t0)
    ctx->pc = 0x2da23cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 4294956777), (uint8_t)GPR_U32(ctx, 15));
    // 0x2da240: 0x85557943  lh          $s5, 0x7943($t2)
    ctx->pc = 0x2da240u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 31043)));
    // 0x2da244: 0xfe70d78a  sd          $s0, -0x2876($s3)
    ctx->pc = 0x2da244u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 4294956938), GPR_U64(ctx, 16));
    // 0x2da248: 0x0  nop
    ctx->pc = 0x2da248u;
    // NOP
    // 0x2da24c: 0x254a8295  addiu       $t2, $t2, -0x7D6B
    ctx->pc = 0x2da24cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294935189));
    // 0x2da250: 0xc712d344  lwc1        $f18, -0x2CBC($t8)
    ctx->pc = 0x2da250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294955844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x2da254: 0x254a82cd  addiu       $t2, $t2, -0x7D33
    ctx->pc = 0x2da254u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294935245));
    // 0x2da258: 0x0  nop
    ctx->pc = 0x2da258u;
    // NOP
label_2da25c:
    // 0x2da25c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2da25cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2da260: 0x245298b0  addiu       $s2, $v0, -0x6750
    ctx->pc = 0x2da260u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940848));
    // 0x2da264: 0x4ce089f5  .word       0x4CE089F5                   # INVALID     $a3, $zero, -0x760B # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2da264u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x2DA264 raw=0x4CE089F5");
    // 0x2da268: 0x2ce2d2b1  sltiu       $v0, $a3, -0x2D4F
    ctx->pc = 0x2da268u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)4294955697) ? 1 : 0);
    // 0x2da26c: 0x3de5383d  .word       0x3DE5383D                   # lui         $a1, 0x383D # 01E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2da26cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)14397 << 16));
    // 0x2da270: 0xc09ec24  jal         func_27B090
    ctx->pc = 0x2DA270u;
    SET_GPR_U32(ctx, 31, 0x2DA278u);
    ctx->pc = 0x2DA274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA270u;
    // 0x2da274: 0x2ce0983d  sltiu       $zero, $a3, -0x67C3 (Delay Slot)
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)4294940733) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B090u, 0x2DA270u, 0x2DA278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA278u;
label_2da278:
    // 0x2da278: 0x2ce158b5  sltiu       $at, $a3, 0x58B5
    ctx->pc = 0x2da278u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)22709) ? 1 : 0);
    // 0x2da27c: 0x28e5387d  slti        $a1, $a3, 0x387D
    ctx->pc = 0x2da27cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)14461) ? 1 : 0);
    // 0x2da280: 0xc0b8b74  jal         func_2E2DD0
    ctx->pc = 0x2DA280u;
    SET_GPR_U32(ctx, 31, 0x2DA288u);
    ctx->pc = 0x2DA284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA280u;
    // 0x2da284: 0x132d3cbf  beq         $t9, $t5, . + 4 + (0x3CBF << 2) (Delay Slot)
    // Likely branch instruction at 0x2DA284 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E2DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2DD0u, 0x2DA280u, 0x2DA288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA288u;
label_2da288:
    // 0x2da288: 0x3ce53835  .word       0x3CE53835                   # lui         $a1, 0x3835 # 00E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2da288u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)14389 << 16));
    // 0x2da28c: 0x6ce0bcbd  ldr         $zero, -0x4343($a3)
    ctx->pc = 0x2da28cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 4294950077); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
    // 0x2da290: 0x6ce19afd  ldr         $at, -0x6503($a3)
    ctx->pc = 0x2da290u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 4294941437); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
    // 0x2da294: 0x2ce0983d  sltiu       $zero, $a3, -0x67C3
    ctx->pc = 0x2da294u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)4294940733) ? 1 : 0);
    // 0x2da298: 0xc0b7454  jal         func_2DD150
    ctx->pc = 0x2DA298u;
    SET_GPR_U32(ctx, 31, 0x2DA2A0u);
    ctx->pc = 0x2DA29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA298u;
    // 0x2da29c: 0x2ce0983d  sltiu       $zero, $a3, -0x67C3 (Delay Slot)
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)4294940733) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD150u, 0x2DA298u, 0x2DA2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA2A0u;
label_2da2a0:
    // 0x2da2a0: 0x2ce018b5  sltiu       $zero, $a3, 0x18B5
    ctx->pc = 0x2da2a0u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)6325) ? 1 : 0);
    // 0x2da2a4: 0x2ce0983d  sltiu       $zero, $a3, -0x67C3
    ctx->pc = 0x2da2a4u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)4294940733) ? 1 : 0);
    // 0x2da2a8: 0xc0b7c90  jal         func_2DF240
    ctx->pc = 0x2DA2A8u;
    SET_GPR_U32(ctx, 31, 0x2DA2B0u);
    ctx->pc = 0x2DA2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA2A8u;
    // 0x2da2ac: 0x3de5383d  .word       0x3DE5383D                   # lui         $a1, 0x383D # 01E00000 <InstrIdType: CPU_NORMAL> (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)14397 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF240u, 0x2DA2A8u, 0x2DA2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA2B0u;
label_2da2b0:
    // 0x2da2b0: 0x2ce08df7  sltiu       $zero, $a3, -0x7209
    ctx->pc = 0x2da2b0u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)4294938103) ? 1 : 0);
    // 0x2da2b4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2DA2B4u;
    {
        const bool branch_taken_0x2da2b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da2b4) {
            ctx->pc = 0x2DA2E4u;
            goto label_2da2e4;
        }
    }
    ctx->pc = 0x2DA2BCu;
    // 0x2da2bc: 0xa319f999  sb          $t9, -0x667($t8)
    ctx->pc = 0x2da2bcu;
    WRITE8(ADD32(GPR_U32(ctx, 24), 4294965657), (uint8_t)GPR_U32(ctx, 25));
    // 0x2da2c0: 0x85a265d3  lh          $v0, 0x65D3($t5)
    ctx->pc = 0x2da2c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 26067)));
    // 0x2da2c4: 0xfe6e0ec2  sd          $t6, 0xEC2($s3)
    ctx->pc = 0x2da2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 3778), GPR_U64(ctx, 14));
    // 0x2da2c8: 0xa2fae1d1  sb          $k0, -0x1E2F($s7)
    ctx->pc = 0x2da2c8u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 4294959569), (uint8_t)GPR_U32(ctx, 26));
    // 0x2da2cc: 0x257e9ac8  addiu       $fp, $t3, -0x6538
    ctx->pc = 0x2da2ccu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 11), 4294941384));
    // 0x2da2d0: 0x25bdb260  addiu       $sp, $t5, -0x4DA0
    ctx->pc = 0x2da2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 13), 4294947424));
    // 0x2da2d4: 0x254a8259  addiu       $t2, $t2, -0x7DA7
    ctx->pc = 0x2da2d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294935129));
    // 0x2da2d8: 0xc712d345  lwc1        $f18, -0x2CBB($t8)
    ctx->pc = 0x2da2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294955845)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x2da2dc: 0x254a8201  addiu       $t2, $t2, -0x7DFF
    ctx->pc = 0x2da2dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294935041));
    // 0x2da2e0: 0x0  nop
    ctx->pc = 0x2da2e0u;
    // NOP
label_2da2e4:
    // 0x2da2e4: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x2da2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x2da2e8: 0x2442a2d4  addiu       $v0, $v0, -0x5D2C
    ctx->pc = 0x2da2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943444));
    // 0x2da2ec: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2da2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2da2f0: 0x2484a2b4  addiu       $a0, $a0, -0x5D4C
    ctx->pc = 0x2da2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943412));
    // 0x2da2f4: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2da2f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2da2f8: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2da2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2da2fc: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2DA2FCu;
    SET_GPR_U32(ctx, 31, 0x2DA304u);
    ctx->pc = 0x2DA300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA2FCu;
    // 0x2da300: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FC0u, 0x2DA2FCu, 0x2DA304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA304u;
label_2da304:
    // 0x2da304: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2da304u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da308: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2da308u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2da30c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2da30cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2da310: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2da310u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2da314: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2da314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2da318: 0x3e00008  jr          $ra
    ctx->pc = 0x2DA318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DA31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA318u;
        // 0x2da31c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DA318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DA320u;
}
