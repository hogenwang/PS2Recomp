#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DBA48
// Address: 0x2dba48 - 0x2dbcf8
void sub_002DBA48_0x2dba48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DBA48_0x2dba48");
#endif

    switch (ctx->pc) {
        case 0x2dbaa0u: goto label_2dbaa0;
        case 0x2dbab8u: goto label_2dbab8;
        case 0x2dbaf8u: goto label_2dbaf8;
        case 0x2dbb14u: goto label_2dbb14;
        case 0x2dbbb0u: goto label_2dbbb0;
        case 0x2dbc28u: goto label_2dbc28;
        case 0x2dbc88u: goto label_2dbc88;
        case 0x2dbc94u: goto label_2dbc94;
        case 0x2dbcc4u: goto label_2dbcc4;
        default: break;
    }

    ctx->pc = 0x2dba48u;

    // 0x2dba48: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2dba48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2dba4c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2dba4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2dba50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2dba50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dba54: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2dba54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2dba58: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2dba58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2dba5c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x2dba5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x2dba60: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2dba60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2dba64: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2dba64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x2dba68: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x2dba68u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2dba6c: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x2dba6cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2dba70: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x2dba70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2dba74: 0x3c03002e  lui         $v1, 0x2E
    ctx->pc = 0x2dba74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)46 << 16));
    // 0x2dba78: 0x2463bac0  addiu       $v1, $v1, -0x4540
    ctx->pc = 0x2dba78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949568));
    // 0x2dba7c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2dba7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2dba80: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DBA80u;
    {
        const bool branch_taken_0x2dba80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dba80) {
            ctx->pc = 0x2DBAA0u;
            goto label_2dbaa0;
        }
    }
    ctx->pc = 0x2DBA88u;
    // 0x2dba88: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2dba88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2dba8c: 0x2484bad4  addiu       $a0, $a0, -0x452C
    ctx->pc = 0x2dba8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949588));
    // 0x2dba90: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x2dba90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2dba94: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2dba94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2dba98: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2DBA98u;
    SET_GPR_U32(ctx, 31, 0x2DBAA0u);
    ctx->pc = 0x2DBA9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBA98u;
            // 0x2dba9c: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (runtime->hasFunction(0x2D8FC0u)) {
        auto targetFn = runtime->lookupFunction(0x2D8FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBAA0u; }
        if (ctx->pc != 0x2DBAA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8FC0_0x2d8fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBAA0u; }
        if (ctx->pc != 0x2DBAA0u) { return; }
    }
    ctx->pc = 0x2DBAA0u;
label_2dbaa0:
    // 0x2dbaa0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2DBAA0u;
    {
        const bool branch_taken_0x2dbaa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dbaa0) {
            ctx->pc = 0x2DBAD4u;
            goto label_2dbad4;
        }
    }
    ctx->pc = 0x2DBAA8u;
    // 0x2dbaa8: 0x254234f8  addiu       $v0, $t2, 0x34F8
    ctx->pc = 0x2dbaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 13560));
    // 0x2dbaac: 0x865446fb  lh          $s4, 0x46FB($s2)
    ctx->pc = 0x2dbaacu;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 18171)));
    // 0x2dbab0: 0xcb3c22c  jal         func_2CF08B0
    ctx->pc = 0x2DBAB0u;
    SET_GPR_U32(ctx, 31, 0x2DBAB8u);
    ctx->pc = 0x2DBAB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBAB0u;
            // 0x2dbab4: 0xfe4219f2  sd          $v0, 0x19F2($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 6642), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CF08B0u;
    {
        auto targetFn = runtime->lookupFunction(0x2CF08B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBAB8u; }
        if (ctx->pc != 0x2DBAB8u) { return; }
    }
    ctx->pc = 0x2DBAB8u;
label_2dbab8:
    // 0x2dbab8: 0x8d041d8d  lw          $a0, 0x1D8D($t0)
    ctx->pc = 0x2dbab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 7565)));
    // 0x2dbabc: 0xff0cd3aa  sd          $t4, -0x2C56($t8)
    ctx->pc = 0x2dbabcu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 4294955946), GPR_U64(ctx, 12));
    // 0x2dbac0: 0x0  nop
    ctx->pc = 0x2dbac0u;
    // NOP
    // 0x2dbac4: 0xbd07c9ca  cache       0x07, -0x3636($t0)
    ctx->pc = 0x2dbac4u;
    // CACHE instruction (ignored)
    // 0x2dbac8: 0xc712f020  lwc1        $f18, -0xFE0($t8)
    ctx->pc = 0x2dbac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294963232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x2dbacc: 0xbd07c86a  cache       0x07, -0x3796($t0)
    ctx->pc = 0x2dbaccu;
    // CACHE instruction (ignored)
    // 0x2dbad0: 0x0  nop
    ctx->pc = 0x2dbad0u;
    // NOP
label_2dbad4:
    // 0x2dbad4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2dbad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2dbad8: 0x8c4498b0  lw          $a0, -0x6750($v0)
    ctx->pc = 0x2dbad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294940848)));
    // 0x2dbadc: 0x51a50a58  beql        $t5, $a1, . + 4 + (0xA58 << 2)
    ctx->pc = 0x2DBADCu;
    {
        const bool branch_taken_0x2dbadc = (GPR_U64(ctx, 13) == GPR_U64(ctx, 5));
        if (branch_taken_0x2dbadc) {
            ctx->pc = 0x2DBAE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBADCu;
            // 0x2dbae0: 0x17251a58  bne         $t9, $a1, . + 4 + (0x1A58 << 2) (Delay Slot)
        // Likely branch instruction at 0x2DBAE0 - Handled by branch logic
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DE440u;
            return;
        }
    }
    ctx->pc = 0x2DBAE4u;
    // 0x2dbae4: 0x71bae867  .word       0x71BAE867                   # INVALID     $t5, $k0, -0x1799 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2dbae4u;
    // Unhandled MMI instruction: function 0x27
    // 0x2dbae8: 0xd7250a3c  ldc1        $f5, 0xA3C($t9)
    ctx->pc = 0x2dbae8u;
    // Unhandled opcode: 0x35
    // 0x2dbaec: 0x71c51cba  .word       0x71C51CBA                   # INVALID     $t6, $a1, 0x1CBA # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2dbaecu;
    // Unhandled MMI instruction: function 0x3A
    // 0x2dbaf0: 0xc0b6daa  jal         func_2DB6A8
    ctx->pc = 0x2DBAF0u;
    SET_GPR_U32(ctx, 31, 0x2DBAF8u);
    ctx->pc = 0x2DBAF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBAF0u;
            // 0x2dbaf4: 0xd5411e3d  ldc1        $f1, 0x1E3D($t2) (Delay Slot)
        // Unhandled opcode: 0x35
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6A8u;
    if (runtime->hasFunction(0x2DB6A8u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBAF8u; }
        if (ctx->pc != 0x2DBAF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6A8_0x2db6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBAF8u; }
        if (ctx->pc != 0x2DBAF8u) { return; }
    }
    ctx->pc = 0x2DBAF8u;
label_2dbaf8:
    // 0x2dbaf8: 0x17a50238  bne         $sp, $a1, . + 4 + (0x238 << 2)
    ctx->pc = 0x2DBAF8u;
    {
        const bool branch_taken_0x2dbaf8 = (GPR_U64(ctx, 29) != GPR_U64(ctx, 5));
        ctx->pc = 0x2DBAFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBAF8u;
            // 0x2dbafc: 0x71c51cba  .word       0x71C51CBA                   # INVALID     $t6, $a1, 0x1CBA # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
        // Unhandled MMI instruction: function 0x3A
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbaf8) {
            ctx->pc = 0x2DC3DCu;
            return;
        }
    }
    ctx->pc = 0x2DBB00u;
    // 0x2dbb00: 0x97250a3b  lhu         $a1, 0xA3B($t9)
    ctx->pc = 0x2dbb00u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 25), 2619)));
    // 0x2dbb04: 0x91bac875  lbu         $k0, -0x378B($t5)
    ctx->pc = 0x2dbb04u;
    SET_GPR_U32(ctx, 26, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 4294953077)));
    // 0x2dbb08: 0x91bac875  lbu         $k0, -0x378B($t5)
    ctx->pc = 0x2dbb08u;
    SET_GPR_U32(ctx, 26, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 4294953077)));
    // 0x2dbb0c: 0xc0b6e1e  jal         func_2DB878
    ctx->pc = 0x2DBB0Cu;
    SET_GPR_U32(ctx, 31, 0x2DBB14u);
    ctx->pc = 0x2DBB10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBB0Cu;
            // 0x2dbb10: 0xd5611a3d  ldc1        $f1, 0x1A3D($t3) (Delay Slot)
        // Unhandled opcode: 0x35
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB878u;
    if (runtime->hasFunction(0x2DB878u)) {
        auto targetFn = runtime->lookupFunction(0x2DB878u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBB14u; }
        if (ctx->pc != 0x2DBB14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB878_0x2db878(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBB14u; }
        if (ctx->pc != 0x2DBB14u) { return; }
    }
    ctx->pc = 0x2DBB14u;
label_2dbb14:
    // 0x2dbb14: 0x3725023b  ori         $a1, $t9, 0x23B
    ctx->pc = 0x2dbb14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 25) | (uint64_t)(uint16_t)571);
    // 0x2dbb18: 0x27451f1a  addiu       $a1, $k0, 0x1F1A
    ctx->pc = 0x2dbb18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 26), 7962));
    // 0x2dbb1c: 0x91e50b79  lbu         $a1, 0xB79($t7)
    ctx->pc = 0x2dbb1cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 2937)));
    // 0x2dbb20: 0x47451f3a  .word       0x47451F3A                   # INVALID     $k0, $a1, 0x1F3A # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2dbb20u;
    // Unhandled FPU instruction: format 0x1A, function 0x3A
    // 0x2dbb24: 0x91a50b58  lbu         $a1, 0xB58($t5)
    ctx->pc = 0x2dbb24u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 2904)));
    // 0x2dbb28: 0x67451e7a  daddiu      $a1, $k0, 0x1E7A
    ctx->pc = 0x2dbb28u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 26) + (int64_t)(int32_t)7802);
    // 0x2dbb2c: 0x67451e58  daddiu      $a1, $k0, 0x1E58
    ctx->pc = 0x2dbb2cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 26) + (int64_t)(int32_t)7768);
    // 0x2dbb30: 0x87451eb8  lh          $a1, 0x1EB8($k0)
    ctx->pc = 0x2dbb30u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 26), 7864)));
    // 0x2dbb34: 0xa7451e98  sh          $a1, 0x1E98($k0)
    ctx->pc = 0x2dbb34u;
    WRITE16(ADD32(GPR_U32(ctx, 26), 7832), (uint16_t)GPR_U32(ctx, 5));
    // 0x2dbb38: 0xc7451ef8  lwc1        $f5, 0x1EF8($k0)
    ctx->pc = 0x2dbb38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 26), 7928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2dbb3c: 0xe7451ed8  swc1        $f5, 0x1ED8($k0)
    ctx->pc = 0x2dbb3cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 26), 7896), bits); }
    // 0x2dbb40: 0x61650b18  daddi       $a1, $t3, 0xB18
    ctx->pc = 0x2dbb40u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)2840; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
    // 0x2dbb44: 0x41650b38  .word       0x41650B38                   # INVALID     $t3, $a1, 0xB38 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2dbb44u;
    // Unhandled COP0 instruction format: 0xB
    // 0x2dbb48: 0x21650a78  addi        $a1, $t3, 0xA78
    ctx->pc = 0x2dbb48u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 11), (int32_t)2680, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
    // 0x2dbb4c: 0x1650a58  .word       0x01650A58                   # mult        $at, $t3, $a1 # 00000240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2dbb4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
    // 0x2dbb50: 0xe1650ab8  sc          $a1, 0xAB8($t3)
    ctx->pc = 0x2dbb50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 2744); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 5)); SET_GPR_S32(ctx, 5, 1); } else { SET_GPR_S32(ctx, 5, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x2dbb54: 0xc1650a98  ll          $a1, 0xA98($t3)
    ctx->pc = 0x2dbb54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 2712); SET_GPR_S32(ctx, 5, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x2dbb58: 0xa1650af8  sb          $a1, 0xAF8($t3)
    ctx->pc = 0x2dbb58u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 2808), (uint8_t)GPR_U32(ctx, 5));
    // 0x2dbb5c: 0x81650ad8  lb          $a1, 0xAD8($t3)
    ctx->pc = 0x2dbb5cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 2776)));
    // 0x2dbb60: 0x919ae747  lbu         $k0, -0x18B9($t4)
    ctx->pc = 0x2dbb60u;
    SET_GPR_U32(ctx, 26, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 4294960967)));
    // 0x2dbb64: 0x61050238  daddi       $a1, $t0, 0x238
    ctx->pc = 0x2dbb64u;
    { int64_t src = (int64_t)GPR_S64(ctx, 8); int64_t imm = (int64_t)(int32_t)568; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
    // 0x2dbb68: 0x75250a38  .word       0x75250A38                   # INVALID     $t1, $a1, 0xA38 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2dbb68u;
    // Unhandled opcode: 0x1D
    // 0x2dbb6c: 0x75250a38  .word       0x75250A38                   # INVALID     $t1, $a1, 0xA38 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2dbb6cu;
    // Unhandled opcode: 0x1D
    // 0x2dbb70: 0x75250a38  .word       0x75250A38                   # INVALID     $t1, $a1, 0xA38 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2dbb70u;
    // Unhandled opcode: 0x1D
    // 0x2dbb74: 0x359ae607  ori         $k0, $t4, 0xE607
    ctx->pc = 0x2dbb74u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)58887);
    // 0x2dbb78: 0x919ae367  lbu         $k0, -0x1C99($t4)
    ctx->pc = 0x2dbb78u;
    SET_GPR_U32(ctx, 26, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 4294959975)));
    // 0x2dbb7c: 0x71a5087a  .word       0x71A5087A                   # INVALID     $t5, $a1, 0x87A # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2dbb7cu;
    // Unhandled MMI instruction: function 0x3A
    // 0x2dbb80: 0x92acca07  lbu         $t4, -0x35F9($s5)
    ctx->pc = 0x2dbb80u;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 4294953479)));
    // 0x2dbb84: 0x93baee07  lbu         $k0, -0x11F9($sp)
    ctx->pc = 0x2dbb84u;
    SET_GPR_U32(ctx, 26, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4294962695)));
    // 0x2dbb88: 0x7db31a18  sq          $s3, 0x1A18($t5)
    ctx->pc = 0x2dbb88u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 6680), GPR_VEC(ctx, 19));
    // 0x2dbb8c: 0xd5561e3d  ldc1        $f22, 0x1E3D($t2)
    ctx->pc = 0x2dbb8cu;
    // Unhandled opcode: 0x35
    // 0x2dbb90: 0x72ad6a08  paddb       $t5, $s5, $t5
    ctx->pc = 0x2dbb90u;
    SET_GPR_VEC(ctx, 13, PS2_PADDB(GPR_VEC(ctx, 21), GPR_VEC(ctx, 13)));
    // 0x2dbb94: 0x7db01a18  sq          $s0, 0x1A18($t5)
    ctx->pc = 0x2dbb94u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 6680), GPR_VEC(ctx, 16));
    // 0x2dbb98: 0xd5350a3d  ldc1        $f21, 0xA3D($t1)
    ctx->pc = 0x2dbb98u;
    // Unhandled opcode: 0x35
    // 0x2dbb9c: 0x72acea18  .word       0x72ACEA18                   # mult1       $sp, $s5, $t4 # 00000200 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2dbb9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 12); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 29, (int32_t)result); }
    // 0x2dbba0: 0x7db11a18  sq          $s1, 0x1A18($t5)
    ctx->pc = 0x2dbba0u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 6680), GPR_VEC(ctx, 17));
    // 0x2dbba4: 0x72b50818  mult1       $at, $s5, $s5
    ctx->pc = 0x2dbba4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 21); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
    // 0x2dbba8: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x2DBBA8u;
    SET_GPR_U32(ctx, 31, 0x2DBBB0u);
    ctx->pc = 0x2DBBACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBBA8u;
            // 0x2dbbac: 0x75250a38  .word       0x75250A38                   # INVALID     $t1, $a1, 0xA38 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Unhandled opcode: 0x1D
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DF1D8u;
    if (runtime->hasFunction(0x2DF1D8u)) {
        auto targetFn = runtime->lookupFunction(0x2DF1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBBB0u; }
        if (ctx->pc != 0x2DBBB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DF1D8_0x2df1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBBB0u; }
        if (ctx->pc != 0x2DBBB0u) { return; }
    }
    ctx->pc = 0x2DBBB0u;
label_2dbbb0:
    // 0x2dbbb0: 0x7da51a78  sq          $a1, 0x1A78($t5)
    ctx->pc = 0x2dbbb0u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 6776), GPR_VEC(ctx, 5));
    // 0x2dbbb4: 0x7de51a3c  sq          $a1, 0x1A3C($t7)
    ctx->pc = 0x2dbbb4u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 6716), GPR_VEC(ctx, 5));
    // 0x2dbbb8: 0x5561043c  bnel        $t3, $at, . + 4 + (0x43C << 2)
    ctx->pc = 0x2DBBB8u;
    {
        const bool branch_taken_0x2dbbb8 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 1));
        if (branch_taken_0x2dbbb8) {
            ctx->pc = 0x2DBBBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBBB8u;
            // 0x2dbbbc: 0x51e50838  beql        $t7, $a1, . + 4 + (0x838 << 2) (Delay Slot)
        // Likely branch instruction at 0x2DBBBC - Handled by branch logic
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DCCACu;
            return;
        }
    }
    ctx->pc = 0x2DBBC0u;
    // 0x2dbbc0: 0x75250a38  .word       0x75250A38                   # INVALID     $t1, $a1, 0xA38 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2dbbc0u;
    // Unhandled opcode: 0x1D
    // 0x2dbbc4: 0x75250a38  .word       0x75250A38                   # INVALID     $t1, $a1, 0xA38 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2dbbc4u;
    // Unhandled opcode: 0x1D
    // 0x2dbbc8: 0x1de508f8  .word       0x1DE508F8                   # bgtz        $t7, . + 4 + (0x8F8 << 2) # 00050000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2DBBC8u;
    {
        const bool branch_taken_0x2dbbc8 = (GPR_S32(ctx, 15) > 0);
        ctx->pc = 0x2DBBCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBBC8u;
            // 0x2dbbcc: 0x3de50898  .word       0x3DE50898                   # lui         $a1, 0x898 # 01E00000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2200 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbbc8) {
            ctx->pc = 0x2DDFACu;
            return;
        }
    }
    ctx->pc = 0x2DBBD0u;
    // 0x2dbbd0: 0xbdf10a3e  cache       0x11, 0xA3E($t7)
    ctx->pc = 0x2dbbd0u;
    // CACHE instruction (ignored)
    // 0x2dbbd4: 0xfde50a34  sd          $a1, 0xA34($t7)
    ctx->pc = 0x2dbbd4u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 2612), GPR_U64(ctx, 5));
    // 0x2dbbd8: 0x7da40a78  sq          $a0, 0xA78($t5)
    ctx->pc = 0x2dbbd8u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 2680), GPR_VEC(ctx, 4));
    // 0x2dbbdc: 0xdd850a38  ld          $a1, 0xA38($t4)
    ctx->pc = 0x2dbbdcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 12), 2616)));
    // 0x2dbbe0: 0x70650a59  .word       0x70650A59                   # multu1      $at, $v1, $a1 # 00000240 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2dbbe0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 3) * (uint64_t)GPR_U32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
    // 0x2dbbe4: 0x5de508b8  .word       0x5DE508B8                   # bgtzl       $t7, . + 4 + (0x8B8 << 2) # 00050000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2DBBE4u;
    {
        const bool branch_taken_0x2dbbe4 = (GPR_S32(ctx, 15) > 0);
        if (branch_taken_0x2dbbe4) {
            ctx->pc = 0x2DBBE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBBE4u;
            // 0x2dbbe8: 0xfde50a34  sd          $a1, 0xA34($t7) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 15), 2612), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DDEC8u;
            return;
        }
    }
    ctx->pc = 0x2DBBECu;
    // 0x2dbbec: 0x7da40a78  sq          $a0, 0xA78($t5)
    ctx->pc = 0x2dbbecu;
    WRITE128(ADD32(GPR_U32(ctx, 13), 2680), GPR_VEC(ctx, 4));
    // 0x2dbbf0: 0xd527001c  ldc1        $f7, 0x1C($t1)
    ctx->pc = 0x2dbbf0u;
    // Unhandled opcode: 0x35
    // 0x2dbbf4: 0xf7bae625  sdc1        $f26, -0x19DB($sp)
    ctx->pc = 0x2dbbf4u;
    // Unhandled opcode: 0x3D
    // 0x2dbbf8: 0x61251a78  daddi       $a1, $t1, 0x1A78
    ctx->pc = 0x2dbbf8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 9); int64_t imm = (int64_t)(int32_t)6776; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
    // 0x2dbbfc: 0x92acca07  lbu         $t4, -0x35F9($s5)
    ctx->pc = 0x2dbbfcu;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 4294953479)));
    // 0x2dbc00: 0x93baee07  lbu         $k0, -0x11F9($sp)
    ctx->pc = 0x2dbc00u;
    SET_GPR_U32(ctx, 26, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4294962695)));
    // 0x2dbc04: 0x7db31a18  sq          $s3, 0x1A18($t5)
    ctx->pc = 0x2dbc04u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 6680), GPR_VEC(ctx, 19));
    // 0x2dbc08: 0xd5350a3d  ldc1        $f21, 0xA3D($t1)
    ctx->pc = 0x2dbc08u;
    // Unhandled opcode: 0x35
    // 0x2dbc0c: 0x72ad6a08  paddb       $t5, $s5, $t5
    ctx->pc = 0x2dbc0cu;
    SET_GPR_VEC(ctx, 13, PS2_PADDB(GPR_VEC(ctx, 21), GPR_VEC(ctx, 13)));
    // 0x2dbc10: 0x7db01a18  sq          $s0, 0x1A18($t5)
    ctx->pc = 0x2dbc10u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 6680), GPR_VEC(ctx, 16));
    // 0x2dbc14: 0x72b50818  mult1       $at, $s5, $s5
    ctx->pc = 0x2dbc14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 21); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
    // 0x2dbc18: 0x72acea18  .word       0x72ACEA18                   # mult1       $sp, $s5, $t4 # 00000200 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2dbc18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 12); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 29, (int32_t)result); }
    // 0x2dbc1c: 0x7db11a18  sq          $s1, 0x1A18($t5)
    ctx->pc = 0x2dbc1cu;
    WRITE128(ADD32(GPR_U32(ctx, 13), 6680), GPR_VEC(ctx, 17));
    // 0x2dbc20: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x2DBC20u;
    SET_GPR_U32(ctx, 31, 0x2DBC28u);
    ctx->pc = 0x2DBC24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBC20u;
            // 0x2dbc24: 0x75250a38  .word       0x75250A38                   # INVALID     $t1, $a1, 0xA38 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Unhandled opcode: 0x1D
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DF1D8u;
    if (runtime->hasFunction(0x2DF1D8u)) {
        auto targetFn = runtime->lookupFunction(0x2DF1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBC28u; }
        if (ctx->pc != 0x2DBC28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DF1D8_0x2df1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBC28u; }
        if (ctx->pc != 0x2DBC28u) { return; }
    }
    ctx->pc = 0x2DBC28u;
label_2dbc28:
    // 0x2dbc28: 0x7da51a78  sq          $a1, 0x1A78($t5)
    ctx->pc = 0x2dbc28u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 6776), GPR_VEC(ctx, 5));
    // 0x2dbc2c: 0x7de51a3c  sq          $a1, 0x1A3C($t7)
    ctx->pc = 0x2dbc2cu;
    WRITE128(ADD32(GPR_U32(ctx, 15), 6716), GPR_VEC(ctx, 5));
    // 0x2dbc30: 0x5561183c  bnel        $t3, $at, . + 4 + (0x183C << 2)
    ctx->pc = 0x2DBC30u;
    {
        const bool branch_taken_0x2dbc30 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 1));
        if (branch_taken_0x2dbc30) {
            ctx->pc = 0x2DBC34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBC30u;
            // 0x2dbc34: 0x51e50838  beql        $t7, $a1, . + 4 + (0x838 << 2) (Delay Slot)
        // Likely branch instruction at 0x2DBC34 - Handled by branch logic
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E1D24u;
            return;
        }
    }
    ctx->pc = 0x2DBC38u;
    // 0x2dbc38: 0x75250a38  .word       0x75250A38                   # INVALID     $t1, $a1, 0xA38 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2dbc38u;
    // Unhandled opcode: 0x1D
    // 0x2dbc3c: 0x75250a38  .word       0x75250A38                   # INVALID     $t1, $a1, 0xA38 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2dbc3cu;
    // Unhandled opcode: 0x1D
    // 0x2dbc40: 0x1de508f8  .word       0x1DE508F8                   # bgtz        $t7, . + 4 + (0x8F8 << 2) # 00050000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2DBC40u;
    {
        const bool branch_taken_0x2dbc40 = (GPR_S32(ctx, 15) > 0);
        ctx->pc = 0x2DBC44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBC40u;
            // 0x2dbc44: 0x3de50898  .word       0x3DE50898                   # lui         $a1, 0x898 # 01E00000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2200 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbc40) {
            ctx->pc = 0x2DE024u;
            return;
        }
    }
    ctx->pc = 0x2DBC48u;
    // 0x2dbc48: 0xbdf10a3e  cache       0x11, 0xA3E($t7)
    ctx->pc = 0x2dbc48u;
    // CACHE instruction (ignored)
    // 0x2dbc4c: 0xfde50a34  sd          $a1, 0xA34($t7)
    ctx->pc = 0x2dbc4cu;
    WRITE64(ADD32(GPR_U32(ctx, 15), 2612), GPR_U64(ctx, 5));
    // 0x2dbc50: 0x7da40a78  sq          $a0, 0xA78($t5)
    ctx->pc = 0x2dbc50u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 2680), GPR_VEC(ctx, 4));
    // 0x2dbc54: 0xdd850a38  ld          $a1, 0xA38($t4)
    ctx->pc = 0x2dbc54u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 12), 2616)));
    // 0x2dbc58: 0x70650a59  .word       0x70650A59                   # multu1      $at, $v1, $a1 # 00000240 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2dbc58u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 3) * (uint64_t)GPR_U32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
    // 0x2dbc5c: 0x5de508b8  .word       0x5DE508B8                   # bgtzl       $t7, . + 4 + (0x8B8 << 2) # 00050000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2DBC5Cu;
    {
        const bool branch_taken_0x2dbc5c = (GPR_S32(ctx, 15) > 0);
        if (branch_taken_0x2dbc5c) {
            ctx->pc = 0x2DBC60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBC5Cu;
            // 0x2dbc60: 0xfde50a34  sd          $a1, 0xA34($t7) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 15), 2612), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DDF40u;
            return;
        }
    }
    ctx->pc = 0x2DBC64u;
    // 0x2dbc64: 0x7da40a78  sq          $a0, 0xA78($t5)
    ctx->pc = 0x2dbc64u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 2680), GPR_VEC(ctx, 4));
    // 0x2dbc68: 0xd527001c  ldc1        $f7, 0x1C($t1)
    ctx->pc = 0x2dbc68u;
    // Unhandled opcode: 0x35
    // 0x2dbc6c: 0xf7bae625  sdc1        $f26, -0x19DB($sp)
    ctx->pc = 0x2dbc6cu;
    // Unhandled opcode: 0x3D
    // 0x2dbc70: 0x61251a78  daddi       $a1, $t1, 0x1A78
    ctx->pc = 0x2dbc70u;
    { int64_t src = (int64_t)GPR_S64(ctx, 9); int64_t imm = (int64_t)(int32_t)6776; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
    // 0x2dbc74: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2DBC74u;
    {
        const bool branch_taken_0x2dbc74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dbc74) {
            ctx->pc = 0x2DBCA4u;
            goto label_2dbca4;
        }
    }
    ctx->pc = 0x2DBC7Cu;
    // 0x2dbc7c: 0xa36d89e1  sb          $t5, -0x761F($k1)
    ctx->pc = 0x2dbc7cu;
    WRITE8(ADD32(GPR_U32(ctx, 27), 4294937057), (uint8_t)GPR_U32(ctx, 13));
    // 0x2dbc80: 0xc43da54  jal         func_10F6950
    ctx->pc = 0x2DBC80u;
    SET_GPR_U32(ctx, 31, 0x2DBC88u);
    ctx->pc = 0x2DBC84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBC80u;
            // 0x2dbc84: 0xffd8adfa  sd          $t8, -0x5206($fp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 30), 4294946298), GPR_U64(ctx, 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F6950u;
    {
        auto targetFn = runtime->lookupFunction(0x10F6950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBC88u; }
        if (ctx->pc != 0x2DBC88u) { return; }
    }
    ctx->pc = 0x2DBC88u;
label_2dbc88:
    // 0x2dbc88: 0x8e96f63d  lw          $s6, -0x9C3($s4)
    ctx->pc = 0x2dbc88u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294964797)));
    // 0x2dbc8c: 0xcb9a9b7  jal         func_2E6A6DC
    ctx->pc = 0x2DBC8Cu;
    SET_GPR_U32(ctx, 31, 0x2DBC94u);
    ctx->pc = 0x2DBC90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBC8Cu;
            // 0x2dbc90: 0x862707bb  lh          $a3, 0x7BB($s1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1979)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E6A6DCu;
    {
        auto targetFn = runtime->lookupFunction(0x2E6A6DCu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBC94u; }
        if (ctx->pc != 0x2DBC94u) { return; }
    }
    ctx->pc = 0x2DBC94u;
label_2dbc94:
    // 0x2dbc94: 0xbd07cac9  cache       0x07, -0x3537($t0)
    ctx->pc = 0x2dbc94u;
    // CACHE instruction (ignored)
    // 0x2dbc98: 0xc712f021  lwc1        $f18, -0xFDF($t8)
    ctx->pc = 0x2dbc98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294963233)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x2dbc9c: 0xbd07cb69  cache       0x07, -0x3497($t0)
    ctx->pc = 0x2dbc9cu;
    // CACHE instruction (ignored)
    // 0x2dbca0: 0x0  nop
    ctx->pc = 0x2dbca0u;
    // NOP
label_2dbca4:
    // 0x2dbca4: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x2dbca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x2dbca8: 0x2442bc94  addiu       $v0, $v0, -0x436C
    ctx->pc = 0x2dbca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950036));
    // 0x2dbcac: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2dbcacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2dbcb0: 0x2484bc74  addiu       $a0, $a0, -0x438C
    ctx->pc = 0x2dbcb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950004));
    // 0x2dbcb4: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2dbcb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2dbcb8: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2dbcb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2dbcbc: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2DBCBCu;
    SET_GPR_U32(ctx, 31, 0x2DBCC4u);
    ctx->pc = 0x2DBCC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBCBCu;
            // 0x2dbcc0: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (runtime->hasFunction(0x2D8FC0u)) {
        auto targetFn = runtime->lookupFunction(0x2D8FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBCC4u; }
        if (ctx->pc != 0x2DBCC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8FC0_0x2d8fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBCC4u; }
        if (ctx->pc != 0x2DBCC4u) { return; }
    }
    ctx->pc = 0x2DBCC4u;
label_2dbcc4:
    // 0x2dbcc4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2dbcc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbcc8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2dbcc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dbccc: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2dbcccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2dbcd0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2dbcd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dbcd4: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x2dbcd4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2dbcd8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2dbcd8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2dbcdc: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2dbcdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbce0: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x2dbce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2dbce4: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x2dbce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2dbce8: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2dbce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2dbcec: 0x3e00008  jr          $ra
    ctx->pc = 0x2DBCECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DBCF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBCECu;
            // 0x2dbcf0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DBCF4u;
    // 0x2dbcf4: 0x0  nop
    ctx->pc = 0x2dbcf4u;
    // NOP
    ctx->pc = 0x2dbcf8u;
}
