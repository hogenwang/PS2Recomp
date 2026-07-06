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

// Function: sub_002DAEC8
// Address: 0x2daec8 - 0x2dafe0
void sub_002DAEC8_0x2daec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DAEC8_0x2daec8");
#endif

    switch (ctx->pc) {
        case 0x2daf08u: goto label_2daf08;
        case 0x2daf90u: goto label_2daf90;
        case 0x2dafc8u: goto label_2dafc8;
        default: break;
    }

    ctx->pc = 0x2daec8u;

    // 0x2daec8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2daec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2daecc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2daeccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2daed0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2daed0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2daed4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2daed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2daed8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2daed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2daedc: 0x3c03002e  lui         $v1, 0x2E
    ctx->pc = 0x2daedcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)46 << 16));
    // 0x2daee0: 0x2463af28  addiu       $v1, $v1, -0x50D8
    ctx->pc = 0x2daee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946600));
    // 0x2daee4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2daee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2daee8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DAEE8u;
    {
        const bool branch_taken_0x2daee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2daee8) {
            ctx->pc = 0x2DAF08u;
            goto label_2daf08;
        }
    }
    ctx->pc = 0x2DAEF0u;
    // 0x2daef0: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2daef0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2daef4: 0x2484af3c  addiu       $a0, $a0, -0x50C4
    ctx->pc = 0x2daef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946620));
    // 0x2daef8: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x2daef8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2daefc: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2daefcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2daf00: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2DAF00u;
    SET_GPR_U32(ctx, 31, 0x2DAF08u);
    ctx->pc = 0x2DAF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAF00u;
    // 0x2daf04: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FC0u, 0x2DAF00u, 0x2DAF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAF08u;
label_2daf08:
    // 0x2daf08: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2DAF08u;
    {
        const bool branch_taken_0x2daf08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2daf08) {
            ctx->pc = 0x2DAF3Cu;
            goto label_2daf3c;
        }
    }
    ctx->pc = 0x2DAF10u;
    // 0x2daf10: 0x8ce36745  lw          $v1, 0x6745($a3)
    ctx->pc = 0x2daf10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 26437)));
    // 0x2daf14: 0x8daed53d  lw          $t6, -0x2AC3($t5)
    ctx->pc = 0x2daf14u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294956349)));
    // 0x2daf18: 0xdf2264ff  ld          $v0, 0x64FF($t9)
    ctx->pc = 0x2daf18u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 25), 25855)));
    // 0x2daf1c: 0x263b020  add         $s6, $s3, $v1
    ctx->pc = 0x2daf1cu;
    {     int32_t rs_val = GPR_S32(ctx, 19);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x2daf20: 0xdd4505ff  ld          $a1, 0x5FF($t2)
    ctx->pc = 0x2daf20u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 10), 1535)));
    // 0x2daf24: 0xddccba77  ld          $t4, -0x4589($t6)
    ctx->pc = 0x2daf24u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 14), 4294949495)));
    // 0x2daf28: 0x0  nop
    ctx->pc = 0x2daf28u;
    // NOP
    // 0x2daf2c: 0xcf3db177  pref        0x1D, -0x4E89($t9)
    ctx->pc = 0x2daf2cu;
    // PREF instruction (ignored)
    // 0x2daf30: 0xc712dae4  lwc1        $f18, -0x251C($t8)
    ctx->pc = 0x2daf30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294957796)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x2daf34: 0xcf3db14b  pref        0x1D, -0x4EB5($t9)
    ctx->pc = 0x2daf34u;
    // PREF instruction (ignored)
    // 0x2daf38: 0x0  nop
    ctx->pc = 0x2daf38u;
    // NOP
label_2daf3c:
    // 0x2daf3c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2daf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2daf40: 0x8c4498b0  lw          $a0, -0x6750($v0)
    ctx->pc = 0x2daf40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294940848)));
    // 0x2daf44: 0x93c2b15e  lbu         $v0, -0x4EA2($fp)
    ctx->pc = 0x2daf44u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 4294947166)));
    // 0x2daf48: 0xb30ab35e  sdl         $t2, -0x4CA2($t8)
    ctx->pc = 0x2daf48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 4294947678); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2daf4c: 0x6fc55115  ldr         $a1, 0x5115($fp)
    ctx->pc = 0x2daf4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 20757); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2daf50: 0x33522152  andi        $s2, $k0, 0x2152
    ctx->pc = 0x2daf50u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 26) & (uint64_t)(uint16_t)8530);
    // 0x2daf54: 0x6fd95145  ldr         $t9, 0x5145($fp)
    ctx->pc = 0x2daf54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 20805); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 25, (GPR_U64(ctx, 25) & keepMask) | (mem >> shift)); }
    // 0x2daf58: 0x1342c942  beq         $k0, $v0, . + 4 + (-0x36BE << 2)
    ctx->pc = 0x2DAF58u;
    {
        const bool branch_taken_0x2daf58 = (GPR_U64(ctx, 26) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DAF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAF58u;
        // 0x2daf5c: 0x93c2b342  lbu         $v0, -0x4CBE($fp) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 4294947650)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2daf58) {
            ctx->pc = 0x2CD464u;
            return;
        }
    }
    ctx->pc = 0x2DAF60u;
    // 0x2daf60: 0xd3e6b35a  lld         $a2, -0x4CA6($ra)
    ctx->pc = 0x2daf60u;
    throw std::runtime_error("Unhandled opcode: 0x34 at 0x2DAF60 raw=0xD3E6B35A");
    // 0x2daf64: 0x9346a152  lbu         $a2, -0x5EAE($k0)
    ctx->pc = 0x2daf64u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 26), 4294943058)));
    // 0x2daf68: 0x9346a152  lbu         $a2, -0x5EAE($k0)
    ctx->pc = 0x2daf68u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 26), 4294943058)));
    // 0x2daf6c: 0x6f0d5051  ldr         $t5, 0x5051($t8)
    ctx->pc = 0x2daf6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 20561); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x2daf70: 0x91c6a0c6  lbu         $a2, -0x5F3A($t6)
    ctx->pc = 0x2daf70u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 4294942918)));
    // 0x2daf74: 0xd3c6b116  lld         $a2, -0x4EEA($fp)
    ctx->pc = 0x2daf74u;
    throw std::runtime_error("Unhandled opcode: 0x34 at 0x2DAF74 raw=0xD3C6B116");
    // 0x2daf78: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2DAF78u;
    {
        const bool branch_taken_0x2daf78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2daf78) {
            ctx->pc = 0x2DAFA8u;
            goto label_2dafa8;
        }
    }
    ctx->pc = 0x2DAF80u;
    // 0x2daf80: 0x84ae2723  lh          $t6, 0x2723($a1)
    ctx->pc = 0x2daf80u;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 10019)));
    // 0x2daf84: 0xdcccd39f  ld          $t4, -0x2C61($a2)
    ctx->pc = 0x2daf84u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 6), 4294955935)));
    // 0x2daf88: 0xce43afe  jal         func_390EBF8
    ctx->pc = 0x2DAF88u;
    SET_GPR_U32(ctx, 31, 0x2DAF90u);
    ctx->pc = 0x2DAF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAF88u;
    // 0x2daf8c: 0xdea65167  ld          $a2, 0x5167($s5) (Delay Slot)
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 21), 20839)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390EBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390EBF8u, 0x2DAF88u, 0x2DAF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAF90u;
label_2daf90:
    // 0x2daf90: 0x425820  add         $t3, $v0, $v0
    ctx->pc = 0x2daf90u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
    // 0x2daf94: 0xfc624d2a  sd          $v0, 0x4D2A($v1)
    ctx->pc = 0x2daf94u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 19754), GPR_U64(ctx, 2));
    // 0x2daf98: 0xcf3d771b  pref        0x1D, 0x771B($t9)
    ctx->pc = 0x2daf98u;
    // PREF instruction (ignored)
    // 0x2daf9c: 0xc712dae5  lwc1        $f18, -0x251B($t8)
    ctx->pc = 0x2daf9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294957797)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x2dafa0: 0xcf3d7727  pref        0x1D, 0x7727($t9)
    ctx->pc = 0x2dafa0u;
    // PREF instruction (ignored)
    // 0x2dafa4: 0x0  nop
    ctx->pc = 0x2dafa4u;
    // NOP
label_2dafa8:
    // 0x2dafa8: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x2dafa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x2dafac: 0x2442af98  addiu       $v0, $v0, -0x5068
    ctx->pc = 0x2dafacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946712));
    // 0x2dafb0: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2dafb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2dafb4: 0x2484af78  addiu       $a0, $a0, -0x5088
    ctx->pc = 0x2dafb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946680));
    // 0x2dafb8: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2dafb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2dafbc: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2dafbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2dafc0: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2DAFC0u;
    SET_GPR_U32(ctx, 31, 0x2DAFC8u);
    ctx->pc = 0x2DAFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAFC0u;
    // 0x2dafc4: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FC0u, 0x2DAFC0u, 0x2DAFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAFC8u;
label_2dafc8:
    // 0x2dafc8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2dafc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dafcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2dafccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dafd0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2dafd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2dafd4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2dafd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dafd8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DAFD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DAFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAFD8u;
        // 0x2dafdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DAFD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DAFE0u;
}
