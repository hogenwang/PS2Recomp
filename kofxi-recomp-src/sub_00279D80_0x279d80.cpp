#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00279D80
// Address: 0x279d80 - 0x27a480
void sub_00279D80_0x279d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00279D80_0x279d80");
#endif

    switch (ctx->pc) {
        case 0x279db0u: goto label_279db0;
        case 0x279e28u: goto label_279e28;
        case 0x279e50u: goto label_279e50;
        case 0x279f1cu: goto label_279f1c;
        case 0x279f38u: goto label_279f38;
        case 0x279fc0u: goto label_279fc0;
        case 0x27a034u: goto label_27a034;
        case 0x27a090u: goto label_27a090;
        case 0x27a130u: goto label_27a130;
        case 0x27a1a4u: goto label_27a1a4;
        case 0x27a244u: goto label_27a244;
        case 0x27a2b4u: goto label_27a2b4;
        case 0x27a354u: goto label_27a354;
        case 0x27a3c4u: goto label_27a3c4;
        case 0x27a408u: goto label_27a408;
        case 0x27a43cu: goto label_27a43c;
        case 0x27a454u: goto label_27a454;
        case 0x27a45cu: goto label_27a45c;
        default: break;
    }

    ctx->pc = 0x279d80u;

    // 0x279d80: 0x3c0201c3  lui         $v0, 0x1C3
    ctx->pc = 0x279d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)451 << 16));
    // 0x279d84: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x279d84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x279d88: 0x8c4353d0  lw          $v1, 0x53D0($v0)
    ctx->pc = 0x279d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21456)));
    // 0x279d8c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x279d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x279d90: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x279d90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279d94: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x279d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x279d98: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x279d98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279d9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x279d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x279da0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x279da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x279da4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x279da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x279da8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x279DA8u;
    {
        const bool branch_taken_0x279da8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x279DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279DA8u;
            // 0x279dac: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279da8) {
            ctx->pc = 0x279DD0u;
            goto label_279dd0;
        }
    }
    ctx->pc = 0x279DB0u;
label_279db0:
    // 0x279db0: 0x0  nop
    ctx->pc = 0x279db0u;
    // NOP
    // 0x279db4: 0x0  nop
    ctx->pc = 0x279db4u;
    // NOP
    // 0x279db8: 0x0  nop
    ctx->pc = 0x279db8u;
    // NOP
    // 0x279dbc: 0x0  nop
    ctx->pc = 0x279dbcu;
    // NOP
    // 0x279dc0: 0x0  nop
    ctx->pc = 0x279dc0u;
    // NOP
    // 0x279dc4: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x279DC4u;
    {
        const bool branch_taken_0x279dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x279dc4) {
            ctx->pc = 0x279DB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_279db0;
        }
    }
    ctx->pc = 0x279DCCu;
    // 0x279dcc: 0x0  nop
    ctx->pc = 0x279dccu;
    // NOP
label_279dd0:
    // 0x279dd0: 0x3c0201c3  lui         $v0, 0x1C3
    ctx->pc = 0x279dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)451 << 16));
    // 0x279dd4: 0x3c0301c3  lui         $v1, 0x1C3
    ctx->pc = 0x279dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)451 << 16));
    // 0x279dd8: 0x245153a0  addiu       $s1, $v0, 0x53A0
    ctx->pc = 0x279dd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 21408));
    // 0x279ddc: 0x24745390  addiu       $s4, $v1, 0x5390
    ctx->pc = 0x279ddcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 21392));
    // 0x279de0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x279de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x279de4: 0x3c0401c3  lui         $a0, 0x1C3
    ctx->pc = 0x279de4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)451 << 16));
    // 0x279de8: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x279de8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x279dec: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x279decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x279df0: 0x8c8353a4  lw          $v1, 0x53A4($a0)
    ctx->pc = 0x279df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 21412)));
    // 0x279df4: 0xa21006  srlv        $v0, $v0, $a1
    ctx->pc = 0x279df4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x279df8: 0x438023  subu        $s0, $v0, $v1
    ctx->pc = 0x279df8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x279dfc: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x279dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x279e00: 0x24639e4c  addiu       $v1, $v1, -0x61B4
    ctx->pc = 0x279e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942284));
    // 0x279e04: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x279e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x279e08: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x279E08u;
    {
        const bool branch_taken_0x279e08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x279e08) {
            ctx->pc = 0x279E2Cu;
            goto label_279e2c;
        }
    }
    ctx->pc = 0x279E10u;
    // 0x279e10: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x279e10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x279e14: 0x24849e60  addiu       $a0, $a0, -0x61A0
    ctx->pc = 0x279e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942304));
    // 0x279e18: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x279e18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x279e1c: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x279e1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x279e20: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x279E20u;
    SET_GPR_U32(ctx, 31, 0x279E28u);
    ctx->pc = 0x279E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279E20u;
            // 0x279e24: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (runtime->hasFunction(0x29E050u)) {
        auto targetFn = runtime->lookupFunction(0x29E050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279E28u; }
        if (ctx->pc != 0x279E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E050_0x29e050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279E28u; }
        if (ctx->pc != 0x279E28u) { return; }
    }
    ctx->pc = 0x279E28u;
label_279e28:
    // 0x279e28: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x279e28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_279e2c:
    // 0x279e2c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x279E2Cu;
    {
        const bool branch_taken_0x279e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x279e2c) {
            ctx->pc = 0x279E60u;
            goto label_279e60;
        }
    }
    ctx->pc = 0x279E34u;
    // 0x279e34: 0xdfd3131f  ld          $s3, 0x131F($fp)
    ctx->pc = 0x279e34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 30), 4895)));
    // 0x279e38: 0xffd6c482  sd          $s6, -0x3B7E($fp)
    ctx->pc = 0x279e38u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 4294952066), GPR_U64(ctx, 22));
    // 0x279e3c: 0xde5175bf  ld          $s1, 0x75BF($s2)
    ctx->pc = 0x279e3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 18), 30143)));
    // 0x279e40: 0xde6569b7  ld          $a1, 0x69B7($s3)
    ctx->pc = 0x279e40u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 27063)));
    // 0x279e44: 0x85567a63  lh          $s6, 0x7A63($t2)
    ctx->pc = 0x279e44u;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 31331)));
    // 0x279e48: 0xc84711b  jal         func_211C46C
    ctx->pc = 0x279E48u;
    SET_GPR_U32(ctx, 31, 0x279E50u);
    ctx->pc = 0x211C46Cu;
    {
        auto targetFn = runtime->lookupFunction(0x211C46Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279E50u; }
        if (ctx->pc != 0x279E50u) { return; }
    }
    ctx->pc = 0x279E50u;
label_279e50:
    // 0x279e50: 0x7635bed3  .word       0x7635BED3                   # INVALID     $s1, $s5, -0x412D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x279e50u;
    // Unhandled opcode: 0x1D
    // 0x279e54: 0x980d25f4  lwr         $t5, 0x25F4($zero)
    ctx->pc = 0x279e54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 9716); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 13) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 13) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 13, merged64); }
    // 0x279e58: 0x7635be1b  .word       0x7635BE1B                   # INVALID     $s1, $s5, -0x41E5 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x279e58u;
    // Unhandled opcode: 0x1D
    // 0x279e5c: 0x0  nop
    ctx->pc = 0x279e5cu;
    // NOP
label_279e60:
    // 0x279e60: 0x6cc37d66  ldr         $v1, 0x7D66($a2)
    ctx->pc = 0x279e60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 32102); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x279e64: 0x382a6926  xori        $t2, $at, 0x6926
    ctx->pc = 0x279e64u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 1) ^ (uint64_t)(uint16_t)26918);
    // 0x279e68: 0x3c0301c3  lui         $v1, 0x1C3
    ctx->pc = 0x279e68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)451 << 16));
    // 0x279e6c: 0x384b6926  xori        $t3, $v0, 0x6926
    ctx->pc = 0x279e6cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)26918);
    // 0x279e70: 0x786b7126  lq          $t3, 0x7126($v1)
    ctx->pc = 0x279e70u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 3), 28966)));
    // 0x279e74: 0x786b7126  lq          $t3, 0x7126($v1)
    ctx->pc = 0x279e74u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 3), 28966)));
    // 0x279e78: 0x786b7126  lq          $t3, 0x7126($v1)
    ctx->pc = 0x279e78u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 3), 28966)));
    // 0x279e7c: 0xc1c6d8f3  ll          $a2, -0x270D($t6)
    ctx->pc = 0x279e7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 4294957299); SET_GPR_S32(ctx, 6, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x279e80: 0xc4eed0e7  lwc1        $f14, -0x2F19($a3)
    ctx->pc = 0x279e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294955239)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x279e84: 0xadc2e8f7  sw          $v0, -0x1709($t6)
    ctx->pc = 0x279e84u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4294961399), GPR_U32(ctx, 2));
    // 0x279e88: 0xc8d6a1a7  lwc2        $22, -0x5E59($a2)
    ctx->pc = 0x279e88u;
    // Unhandled opcode: 0x32
    // 0x279e8c: 0xc9d6cda7  lwc2        $22, -0x3259($t6)
    ctx->pc = 0x279e8cu;
    // Unhandled opcode: 0x32
    // 0x279e90: 0xc9b6ada7  lwc2        $22, -0x5259($t5)
    ctx->pc = 0x279e90u;
    // Unhandled opcode: 0x32
    // 0x279e94: 0xdce6f093  ld          $a2, -0xF6D($a3)
    ctx->pc = 0x279e94u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 7), 4294963347)));
    // 0x279e98: 0xf5fea5a7  sdc1        $f30, -0x5A59($t7)
    ctx->pc = 0x279e98u;
    // Unhandled opcode: 0x3D
    // 0x279e9c: 0xcdd2e8ea  pref        0x12, -0x1716($t6)
    ctx->pc = 0x279e9cu;
    // PREF instruction (ignored)
    // 0x279ea0: 0x786b7126  lq          $t3, 0x7126($v1)
    ctx->pc = 0x279ea0u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 3), 28966)));
    // 0x279ea4: 0x786b7126  lq          $t3, 0x7126($v1)
    ctx->pc = 0x279ea4u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 3), 28966)));
    // 0x279ea8: 0x786b7126  lq          $t3, 0x7126($v1)
    ctx->pc = 0x279ea8u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 3), 28966)));
    // 0x279eac: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x279eacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x279eb0: 0x24849e7c  addiu       $a0, $a0, -0x6184
    ctx->pc = 0x279eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942332));
    // 0x279eb4: 0x382b6d26  xori        $t3, $at, 0x6D26
    ctx->pc = 0x279eb4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 1) ^ (uint64_t)(uint16_t)27942);
    // 0x279eb8: 0x786b7126  lq          $t3, 0x7126($v1)
    ctx->pc = 0x279eb8u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 3), 28966)));
    // 0x279ebc: 0x786b7126  lq          $t3, 0x7126($v1)
    ctx->pc = 0x279ebcu;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 3), 28966)));
    // 0x279ec0: 0x8c6253a8  lw          $v0, 0x53A8($v1)
    ctx->pc = 0x279ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 21416)));
    // 0x279ec4: 0x78ca3d66  lq          $t2, 0x3D66($a2)
    ctx->pc = 0x279ec4u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 6), 15718)));
    // 0x279ec8: 0x382a6d26  xori        $t2, $at, 0x6D26
    ctx->pc = 0x279ec8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 1) ^ (uint64_t)(uint16_t)27942);
    // 0x279ecc: 0x786b7126  lq          $t3, 0x7126($v1)
    ctx->pc = 0x279eccu;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 3), 28966)));
    // 0x279ed0: 0x384b6526  xori        $t3, $v0, 0x6526
    ctx->pc = 0x279ed0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)25894);
    // 0x279ed4: 0x786b7126  lq          $t3, 0x7126($v1)
    ctx->pc = 0x279ed4u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 3), 28966)));
    // 0x279ed8: 0x786b7126  lq          $t3, 0x7126($v1)
    ctx->pc = 0x279ed8u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 3), 28966)));
    // 0x279edc: 0x786b7126  lq          $t3, 0x7126($v1)
    ctx->pc = 0x279edcu;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 3), 28966)));
    // 0x279ee0: 0xc1c6d8f3  ll          $a2, -0x270D($t6)
    ctx->pc = 0x279ee0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 4294957299); SET_GPR_S32(ctx, 6, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x279ee4: 0xc4eed0e7  lwc1        $f14, -0x2F19($a3)
    ctx->pc = 0x279ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294955239)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x279ee8: 0xadc2e8f7  sw          $v0, -0x1709($t6)
    ctx->pc = 0x279ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4294961399), GPR_U32(ctx, 2));
    // 0x279eec: 0xc8d6a1a7  lwc2        $22, -0x5E59($a2)
    ctx->pc = 0x279eecu;
    // Unhandled opcode: 0x32
    // 0x279ef0: 0xd9cecda7  lqc2        $vf14, -0x3259($t6)
    ctx->pc = 0x279ef0u;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 14), 4294954407)));
    // 0x279ef4: 0xb9fbec87  swr         $k1, -0x1379($t7)
    ctx->pc = 0x279ef4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 4294962311); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 27); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x279ef8: 0xedcecda7  .word       0xEDCECDA7                   # INVALID     $t6, $t6, -0x3259 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x279ef8u;
    // Unhandled opcode: 0x3B
    // 0x279efc: 0xb9c7fcb3  swr         $a3, -0x34D($t6)
    ctx->pc = 0x279efcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 4294966451); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x279f00: 0xf5fea49f  sdc1        $f30, -0x5B61($t7)
    ctx->pc = 0x279f00u;
    // Unhandled opcode: 0x3D
    // 0x279f04: 0x78cb6926  lq          $t3, 0x6926($a2)
    ctx->pc = 0x279f04u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 6), 26918)));
    // 0x279f08: 0x786b7126  lq          $t3, 0x7126($v1)
    ctx->pc = 0x279f08u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 3), 28966)));
    // 0x279f0c: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x279f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x279f10: 0x24849ee0  addiu       $a0, $a0, -0x6120
    ctx->pc = 0x279f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942432));
    // 0x279f14: 0xc09e574  jal         func_2795D0
    ctx->pc = 0x279F14u;
    SET_GPR_U32(ctx, 31, 0x279F1Cu);
    ctx->pc = 0x279F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279F14u;
            // 0x279f18: 0x786b7126  lq          $t3, 0x7126($v1) (Delay Slot)
        SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 3), 28966)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2795D0u;
    if (runtime->hasFunction(0x2795D0u)) {
        auto targetFn = runtime->lookupFunction(0x2795D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279F1Cu; }
        if (ctx->pc != 0x279F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002795D0_0x2795d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279F1Cu; }
        if (ctx->pc != 0x279F1Cu) { return; }
    }
    ctx->pc = 0x279F1Cu;
label_279f1c:
    // 0x279f1c: 0x392b7122  xori        $t3, $t1, 0x7122
    ctx->pc = 0x279f1cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)28962);
    // 0x279f20: 0x78cb6566  lq          $t3, 0x6566($a2)
    ctx->pc = 0x279f20u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 6), 25958)));
    // 0x279f24: 0x786b7126  lq          $t3, 0x7126($v1)
    ctx->pc = 0x279f24u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 3), 28966)));
    // 0x279f28: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x279F28u;
    {
        const bool branch_taken_0x279f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x279f28) {
            ctx->pc = 0x279F58u;
            goto label_279f58;
        }
    }
    ctx->pc = 0x279F30u;
    // 0x279f30: 0xc056beb  jal         func_15AFAC
    ctx->pc = 0x279F30u;
    SET_GPR_U32(ctx, 31, 0x279F38u);
    ctx->pc = 0x279F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279F30u;
            // 0x279f34: 0xdd5e81af  ld          $fp, -0x7E51($t2) (Delay Slot)
        SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 10), 4294934959)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15AFACu;
    if (runtime->hasFunction(0x15AFACu)) {
        auto targetFn = runtime->lookupFunction(0x15AFACu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279F38u; }
        if (ctx->pc != 0x279F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015AFAC_0x15afac(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279F38u; }
        if (ctx->pc != 0x279F38u) { return; }
    }
    ctx->pc = 0x279F38u;
label_279f38:
    // 0x279f38: 0xdde2ceef  ld          $v0, -0x3111($t7)
    ctx->pc = 0x279f38u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 15), 4294954735)));
    // 0x279f3c: 0xa1ae72e9  sb          $t6, 0x72E9($t5)
    ctx->pc = 0x279f3cu;
    WRITE8(ADD32(GPR_U32(ctx, 13), 29417), (uint8_t)GPR_U32(ctx, 14));
    // 0x279f40: 0xfcf4a9d2  sd          $s4, -0x562E($a3)
    ctx->pc = 0x279f40u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 4294945234), GPR_U64(ctx, 20));
    // 0x279f44: 0x26e5020  add         $t2, $s3, $t6
    ctx->pc = 0x279f44u;
    {     int32_t rs_val = GPR_S32(ctx, 19);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
    // 0x279f48: 0x73deb536  .word       0x73DEB536                   # psrlh       $s6, $fp, 20 # 03C00000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x279f48u;
    SET_GPR_VEC(ctx, 22, _mm_srli_epi16(GPR_VEC(ctx, 30), 20));
    // 0x279f4c: 0x980d25f5  lwr         $t5, 0x25F5($zero)
    ctx->pc = 0x279f4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 9717); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 13) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 13) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 13, merged64); }
    // 0x279f50: 0x73deb5fe  .word       0x73DEB5FE                   # psrlw       $s6, $fp, 23 # 03C00000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x279f50u;
    SET_GPR_VEC(ctx, 22, _mm_srli_epi32(GPR_VEC(ctx, 30), 23));
    // 0x279f54: 0x0  nop
    ctx->pc = 0x279f54u;
    // NOP
label_279f58:
    // 0x279f58: 0x3c0201c3  lui         $v0, 0x1C3
    ctx->pc = 0x279f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)451 << 16));
    // 0x279f5c: 0x8c4453ac  lw          $a0, 0x53AC($v0)
    ctx->pc = 0x279f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21420)));
    // 0x279f60: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x279f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x279f64: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x279f64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x279f68: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x279f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x279f6c: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x279f6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x279f70: 0x14e2005b  bne         $a3, $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x279F70u;
    {
        const bool branch_taken_0x279f70 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x279F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279F70u;
            // 0x279f74: 0x2ce20004  sltiu       $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x279f70) {
            ctx->pc = 0x27A0E0u;
            goto label_27a0e0;
        }
    }
    ctx->pc = 0x279F78u;
    // 0x279f78: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x279f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x279f7c: 0x3c0301c3  lui         $v1, 0x1C3
    ctx->pc = 0x279f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)451 << 16));
    // 0x279f80: 0x8c645394  lw          $a0, 0x5394($v1)
    ctx->pc = 0x279f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 21396)));
    // 0x279f84: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x279f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x279f88: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x279f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x279f8c: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x279F8Cu;
    {
        const bool branch_taken_0x279f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x279F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279F8Cu;
            // 0x279f90: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279f8c) {
            ctx->pc = 0x27A070u;
            goto label_27a070;
        }
    }
    ctx->pc = 0x279F94u;
    // 0x279f94: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x279f94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x279f98: 0x24639fe0  addiu       $v1, $v1, -0x6020
    ctx->pc = 0x279f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942688));
    // 0x279f9c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x279f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x279fa0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x279FA0u;
    {
        const bool branch_taken_0x279fa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x279fa0) {
            ctx->pc = 0x279FC0u;
            goto label_279fc0;
        }
    }
    ctx->pc = 0x279FA8u;
    // 0x279fa8: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x279fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x279fac: 0x24849ff4  addiu       $a0, $a0, -0x600C
    ctx->pc = 0x279facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942708));
    // 0x279fb0: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x279fb0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x279fb4: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x279fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x279fb8: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x279FB8u;
    SET_GPR_U32(ctx, 31, 0x279FC0u);
    ctx->pc = 0x279FBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279FB8u;
            // 0x279fbc: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (runtime->hasFunction(0x29E050u)) {
        auto targetFn = runtime->lookupFunction(0x29E050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279FC0u; }
        if (ctx->pc != 0x279FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E050_0x29e050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279FC0u; }
        if (ctx->pc != 0x279FC0u) { return; }
    }
    ctx->pc = 0x279FC0u;
label_279fc0:
    // 0x279fc0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x279FC0u;
    {
        const bool branch_taken_0x279fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x279fc0) {
            ctx->pc = 0x279FF4u;
            goto label_279ff4;
        }
    }
    ctx->pc = 0x279FC8u;
    // 0x279fc8: 0xa0aad119  sb          $t2, -0x2EE7($a1)
    ctx->pc = 0x279fc8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294955289), (uint8_t)GPR_U32(ctx, 10));
    // 0x279fcc: 0xffc2ce62  sd          $v0, -0x319E($fp)
    ctx->pc = 0x279fccu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 4294954594), GPR_U64(ctx, 2));
    // 0x279fd0: 0x8e36f665  lw          $s6, -0x99B($s1)
    ctx->pc = 0x279fd0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294964837)));
    // 0x279fd4: 0x267414c8  addiu       $s4, $s3, 0x14C8
    ctx->pc = 0x279fd4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 5320));
    // 0x279fd8: 0x38a8020  add         $s0, $gp, $t2
    ctx->pc = 0x279fd8u;
    {     int32_t rs_val = GPR_S32(ctx, 28);     int32_t rt_val = GPR_S32(ctx, 10);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
    // 0x279fdc: 0xa193a839  sb          $s3, -0x57C7($t4)
    ctx->pc = 0x279fdcu;
    WRITE8(ADD32(GPR_U32(ctx, 12), 4294944825), (uint8_t)GPR_U32(ctx, 19));
    // 0x279fe0: 0x0  nop
    ctx->pc = 0x279fe0u;
    // NOP
    // 0x279fe4: 0x889e5060  lwl         $fp, 0x5060($a0)
    ctx->pc = 0x279fe4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 20576); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 30) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 30, (int32_t)merged); }
    // 0x279fe8: 0x980d264c  lwr         $t5, 0x264C($zero)
    ctx->pc = 0x279fe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 9804); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 13) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 13) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 13, merged64); }
    // 0x279fec: 0x889e5020  lwl         $fp, 0x5020($a0)
    ctx->pc = 0x279fecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 20512); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 30) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 30, (int32_t)merged); }
    // 0x279ff0: 0x0  nop
    ctx->pc = 0x279ff0u;
    // NOP
label_279ff4:
    // 0x279ff4: 0x124e6005  beq         $s2, $t6, . + 4 + (0x6005 << 2)
    ctx->pc = 0x279FF4u;
    {
        const bool branch_taken_0x279ff4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 14));
        ctx->pc = 0x279FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279FF4u;
            // 0x279ff8: 0x524e6107  beql        $s2, $t6, . + 4 + (0x6107 << 2) (Delay Slot)
        // Likely branch instruction at 0x279FF8 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x279ff4) {
            ctx->pc = 0x29200Cu;
            return;
        }
    }
    ctx->pc = 0x279FFCu;
    // 0x279ffc: 0x524e6107  beql        $s2, $t6, . + 4 + (0x6107 << 2)
    ctx->pc = 0x279FFCu;
    {
        const bool branch_taken_0x279ffc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 14));
        if (branch_taken_0x279ffc) {
            ctx->pc = 0x27A000u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x279FFCu;
            // 0x27a000: 0x524e6107  beql        $s2, $t6, . + 4 + (0x6107 << 2) (Delay Slot)
        // Likely branch instruction at 0x27A000 - Handled by branch logic
        ctx->in_delay_slot = false;
            ctx->pc = 0x29241Cu;
            return;
        }
    }
    ctx->pc = 0x27A004u;
    // 0x27a004: 0xff62ecea  sd          $v0, -0x1316($k1)
    ctx->pc = 0x27a004u;
    WRITE64(ADD32(GPR_U32(ctx, 27), 4294962410), GPR_U64(ctx, 2));
    // 0x27a008: 0x9fc2cd2b  lwu         $v0, -0x32D5($fp)
    ctx->pc = 0x27a008u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4294954283)));
    // 0x27a00c: 0x5760650b  bnel        $k1, $zero, . + 4 + (0x650B << 2)
    ctx->pc = 0x27A00Cu;
    {
        const bool branch_taken_0x27a00c = (GPR_U64(ctx, 27) != GPR_U64(ctx, 0));
        if (branch_taken_0x27a00c) {
            ctx->pc = 0x27A010u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27A00Cu;
            // 0x27a010: 0xbe6bcda2  cache       0x0B, -0x325E($s3) (Delay Slot)
        // CACHE instruction (ignored)
        ctx->in_delay_slot = false;
            ctx->pc = 0x29343Cu;
            return;
        }
    }
    ctx->pc = 0x27A014u;
    // 0x27a014: 0x5c63850a  .word       0x5C63850A                   # bgtzl       $v1, . + 4 + (-0x7AF6 << 2) # 00030000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27A014u;
    {
        const bool branch_taken_0x27a014 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x27a014) {
            ctx->pc = 0x27A018u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27A014u;
            // 0x27a018: 0x9c02cc89  lwu         $v0, -0x3377($zero) (Delay Slot)
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 0), 4294954121)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x25B440u;
            return;
        }
    }
    ctx->pc = 0x27A01Cu;
    // 0x27a01c: 0x924e6407  lbu         $t6, 0x6407($s2)
    ctx->pc = 0x27a01cu;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 25607)));
    // 0x27a020: 0x524e6107  beql        $s2, $t6, . + 4 + (0x6107 << 2)
    ctx->pc = 0x27A020u;
    {
        const bool branch_taken_0x27a020 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 14));
        if (branch_taken_0x27a020) {
            ctx->pc = 0x27A024u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27A020u;
            // 0x27a024: 0x3c040028  lui         $a0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x292440u;
            return;
        }
    }
    ctx->pc = 0x27A028u;
    // 0x27a028: 0x2484a004  addiu       $a0, $a0, -0x5FFC
    ctx->pc = 0x27a028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942724));
    // 0x27a02c: 0xc09e574  jal         func_2795D0
    ctx->pc = 0x27A02Cu;
    SET_GPR_U32(ctx, 31, 0x27A034u);
    ctx->pc = 0x27A030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A02Cu;
            // 0x27a030: 0x524e6107  beql        $s2, $t6, . + 4 + (0x6107 << 2) (Delay Slot)
        // Likely branch instruction at 0x27A030 - Handled by branch logic
        ctx->in_delay_slot = false;
    ctx->pc = 0x2795D0u;
    if (runtime->hasFunction(0x2795D0u)) {
        auto targetFn = runtime->lookupFunction(0x2795D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A034u; }
        if (ctx->pc != 0x27A034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002795D0_0x2795d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A034u; }
        if (ctx->pc != 0x27A034u) { return; }
    }
    ctx->pc = 0x27A034u;
label_27a034:
    // 0x27a034: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x27A034u;
    {
        const bool branch_taken_0x27a034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a034) {
            ctx->pc = 0x27A064u;
            goto label_27a064;
        }
    }
    ctx->pc = 0x27A03Cu;
    // 0x27a03c: 0x24ec0c48  addiu       $t4, $a3, 0xC48
    ctx->pc = 0x27a03cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), 3144));
    // 0x27a040: 0x8628b663  lh          $t0, -0x499D($s1)
    ctx->pc = 0x27a040u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4294948451)));
    // 0x27a044: 0xffd87c12  sd          $t8, 0x7C12($fp)
    ctx->pc = 0x27a044u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 31762), GPR_U64(ctx, 24));
    // 0x27a048: 0x271074a0  addiu       $s0, $t8, 0x74A0
    ctx->pc = 0x27a048u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 24), 29856));
    // 0x27a04c: 0xa2250519  sb          $a1, 0x519($s1)
    ctx->pc = 0x27a04cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1305), (uint8_t)GPR_U32(ctx, 5));
    // 0x27a050: 0x245be2f0  addiu       $k1, $v0, -0x1D10
    ctx->pc = 0x27a050u;
    SET_GPR_S32(ctx, 27, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959856));
    // 0x27a054: 0x8890605e  lwl         $s0, 0x605E($a0)
    ctx->pc = 0x27a054u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24670); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 16) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 16, (int32_t)merged); }
    // 0x27a058: 0x980d264d  lwr         $t5, 0x264D($zero)
    ctx->pc = 0x27a058u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 9805); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 13) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 13) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 13, merged64); }
    // 0x27a05c: 0x8890601e  lwl         $s0, 0x601E($a0)
    ctx->pc = 0x27a05cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24606); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 16) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 16, (int32_t)merged); }
    // 0x27a060: 0x0  nop
    ctx->pc = 0x27a060u;
    // NOP
label_27a064:
    // 0x27a064: 0x100000fe  b           . + 4 + (0xFE << 2)
    ctx->pc = 0x27A064u;
    {
        const bool branch_taken_0x27a064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A064u;
            // 0x27a068: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a064) {
            ctx->pc = 0x27A460u;
            goto label_27a460;
        }
    }
    ctx->pc = 0x27A06Cu;
    // 0x27a06c: 0x0  nop
    ctx->pc = 0x27a06cu;
    // NOP
label_27a070:
    // 0x27a070: 0x3c0601c3  lui         $a2, 0x1C3
    ctx->pc = 0x27a070u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)451 << 16));
    // 0x27a074: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x27a074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x27a078: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x27a078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27a07c: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x27A07Cu;
    {
        const bool branch_taken_0x27a07c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x27A080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A07Cu;
            // 0x27a080: 0x8cd0538c  lw          $s0, 0x538C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 21388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a07c) {
            ctx->pc = 0x27A0ACu;
            goto label_27a0ac;
        }
    }
    ctx->pc = 0x27A084u;
    // 0x27a084: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x27a084u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a088: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x27a088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27a08c: 0x0  nop
    ctx->pc = 0x27a08cu;
    // NOP
label_27a090:
    // 0x27a090: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x27a090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x27a094: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x27a094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x27a098: 0x0  nop
    ctx->pc = 0x27a098u;
    // NOP
    // 0x27a09c: 0x0  nop
    ctx->pc = 0x27a09cu;
    // NOP
    // 0x27a0a0: 0x0  nop
    ctx->pc = 0x27a0a0u;
    // NOP
    // 0x27a0a4: 0x1044fffa  beq         $v0, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x27A0A4u;
    {
        const bool branch_taken_0x27a0a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x27A0A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A0A4u;
            // 0x27a0a8: 0x2038021  addu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a0a4) {
            ctx->pc = 0x27A090u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27a090;
        }
    }
    ctx->pc = 0x27A0ACu;
label_27a0ac:
    // 0x27a0ac: 0x3c0201c3  lui         $v0, 0x1C3
    ctx->pc = 0x27a0acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)451 << 16));
    // 0x27a0b0: 0x8c4353d4  lw          $v1, 0x53D4($v0)
    ctx->pc = 0x27a0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21460)));
    // 0x27a0b4: 0x146000d2  bnez        $v1, . + 4 + (0xD2 << 2)
    ctx->pc = 0x27A0B4u;
    {
        const bool branch_taken_0x27a0b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A0B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A0B4u;
            // 0x27a0b8: 0x212102b  sltu        $v0, $s0, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a0b4) {
            ctx->pc = 0x27A400u;
            goto label_27a400;
        }
    }
    ctx->pc = 0x27A0BCu;
    // 0x27a0bc: 0x144000d0  bnez        $v0, . + 4 + (0xD0 << 2)
    ctx->pc = 0x27A0BCu;
    {
        const bool branch_taken_0x27a0bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A0C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A0BCu;
            // 0x27a0c0: 0x8cc2538c  lw          $v0, 0x538C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 21388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a0bc) {
            ctx->pc = 0x27A400u;
            goto label_27a400;
        }
    }
    ctx->pc = 0x27A0C4u;
    // 0x27a0c4: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x27a0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x27a0c8: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x27a0c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x27a0cc: 0x104000cc  beqz        $v0, . + 4 + (0xCC << 2)
    ctx->pc = 0x27A0CCu;
    {
        const bool branch_taken_0x27a0cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A0D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A0CCu;
            // 0x27a0d0: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a0cc) {
            ctx->pc = 0x27A400u;
            goto label_27a400;
        }
    }
    ctx->pc = 0x27A0D4u;
    // 0x27a0d4: 0x100000e2  b           . + 4 + (0xE2 << 2)
    ctx->pc = 0x27A0D4u;
    {
        const bool branch_taken_0x27a0d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a0d4) {
            ctx->pc = 0x27A460u;
            goto label_27a460;
        }
    }
    ctx->pc = 0x27A0DCu;
    // 0x27a0dc: 0x0  nop
    ctx->pc = 0x27a0dcu;
    // NOP
label_27a0e0:
    // 0x27a0e0: 0x14400091  bnez        $v0, . + 4 + (0x91 << 2)
    ctx->pc = 0x27A0E0u;
    {
        const bool branch_taken_0x27a0e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27a0e0) {
            ctx->pc = 0x27A328u;
            goto label_27a328;
        }
    }
    ctx->pc = 0x27A0E8u;
    // 0x27a0e8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x27a0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x27a0ec: 0x94e60008  lhu         $a2, 0x8($a3)
    ctx->pc = 0x27a0ecu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x27a0f0: 0x2634021  addu        $t0, $s3, $v1
    ctx->pc = 0x27a0f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x27a0f4: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x27a0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x27a0f8: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x27a0f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x27a0fc: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x27A0FCu;
    {
        const bool branch_taken_0x27a0fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A0FCu;
            // 0x27a100: 0x3c0301c3  lui         $v1, 0x1C3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)451 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a0fc) {
            ctx->pc = 0x27A1E0u;
            goto label_27a1e0;
        }
    }
    ctx->pc = 0x27A104u;
    // 0x27a104: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x27a104u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x27a108: 0x2463a150  addiu       $v1, $v1, -0x5EB0
    ctx->pc = 0x27a108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943056));
    // 0x27a10c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x27a10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27a110: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27A110u;
    {
        const bool branch_taken_0x27a110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27a110) {
            ctx->pc = 0x27A130u;
            goto label_27a130;
        }
    }
    ctx->pc = 0x27A118u;
    // 0x27a118: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x27a118u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x27a11c: 0x2484a164  addiu       $a0, $a0, -0x5E9C
    ctx->pc = 0x27a11cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943076));
    // 0x27a120: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x27a120u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x27a124: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x27a124u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x27a128: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x27A128u;
    SET_GPR_U32(ctx, 31, 0x27A130u);
    ctx->pc = 0x27A12Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A128u;
            // 0x27a12c: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (runtime->hasFunction(0x29E050u)) {
        auto targetFn = runtime->lookupFunction(0x29E050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A130u; }
        if (ctx->pc != 0x27A130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E050_0x29e050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A130u; }
        if (ctx->pc != 0x27A130u) { return; }
    }
    ctx->pc = 0x27A130u;
label_27a130:
    // 0x27a130: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x27A130u;
    {
        const bool branch_taken_0x27a130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a130) {
            ctx->pc = 0x27A164u;
            goto label_27a164;
        }
    }
    ctx->pc = 0x27A138u;
    // 0x27a138: 0x8699ae73  lh          $t9, -0x518D($s4)
    ctx->pc = 0x27a138u;
    SET_GPR_S32(ctx, 25, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4294946419)));
    // 0x27a13c: 0x1987820  add         $t7, $t4, $t8
    ctx->pc = 0x27a13cu;
    {     int32_t rs_val = GPR_S32(ctx, 12);     int32_t rt_val = GPR_S32(ctx, 24);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
    // 0x27a140: 0xdea51e0f  ld          $a1, 0x1E0F($s5)
    ctx->pc = 0x27a140u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 21), 7695)));
    // 0x27a144: 0x8e4e72ed  lw          $t6, 0x72ED($s2)
    ctx->pc = 0x27a144u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 29421)));
    // 0x27a148: 0x85c2003b  lh          $v0, 0x3B($t6)
    ctx->pc = 0x27a148u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 59)));
    // 0x27a14c: 0xdfd4db57  ld          $s4, -0x24A9($fp)
    ctx->pc = 0x27a14cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 30), 4294957911)));
    // 0x27a150: 0x0  nop
    ctx->pc = 0x27a150u;
    // NOP
    // 0x27a154: 0x6d34d4d5  ldr         $s4, -0x2B2B($t1)
    ctx->pc = 0x27a154u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 4294956245); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
    // 0x27a158: 0x980d26a4  lwr         $t5, 0x26A4($zero)
    ctx->pc = 0x27a158u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 9892); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 13) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 13) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 13, merged64); }
    // 0x27a15c: 0x6d34d495  ldr         $s4, -0x2B6B($t1)
    ctx->pc = 0x27a15cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 4294956181); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
    // 0x27a160: 0x0  nop
    ctx->pc = 0x27a160u;
    // NOP
label_27a164:
    // 0x27a164: 0xa3be580e  sb          $fp, 0x580E($sp)
    ctx->pc = 0x27a164u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 22542), (uint8_t)GPR_U32(ctx, 30));
    // 0x27a168: 0xa3ba500f  sb          $k0, 0x500F($sp)
    ctx->pc = 0x27a168u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 20495), (uint8_t)GPR_U32(ctx, 26));
    // 0x27a16c: 0xa3ba500f  sb          $k0, 0x500F($sp)
    ctx->pc = 0x27a16cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 20495), (uint8_t)GPR_U32(ctx, 26));
    // 0x27a170: 0xa3ba500f  sb          $k0, 0x500F($sp)
    ctx->pc = 0x27a170u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 20495), (uint8_t)GPR_U32(ctx, 26));
    // 0x27a174: 0x158de4bd  bne         $t4, $t5, . + 4 + (-0x1B43 << 2)
    ctx->pc = 0x27A174u;
    {
        const bool branch_taken_0x27a174 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 13));
        ctx->pc = 0x27A178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A174u;
            // 0x27a178: 0x950ae23c  lhu         $t2, -0x1DC4($t0) (Delay Slot)
        SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 4294959676)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a174) {
            ctx->pc = 0x27346Cu;
            return;
        }
    }
    ctx->pc = 0x27A17Cu;
    // 0x27a17c: 0xb7aa60b7  sdr         $t2, 0x60B7($sp)
    ctx->pc = 0x27a17cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24759); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27a180: 0x1108c498  beq         $t0, $t0, . + 4 + (-0x3B68 << 2)
    ctx->pc = 0x27A180u;
    {
        const bool branch_taken_0x27a180 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 8));
        ctx->pc = 0x27A184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A180u;
            // 0x27a184: 0x982a64bb  lwr         $t2, 0x64BB($at) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 1), 25787); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 10) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 10) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 10, merged64); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a180) {
            ctx->pc = 0x26B3E4u;
            return;
        }
    }
    ctx->pc = 0x27A188u;
    // 0x27a188: 0x990c693c  lwr         $t4, 0x693C($t0)
    ctx->pc = 0x27a188u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 26940); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 12) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 12) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 12, merged64); }
    // 0x27a18c: 0xa3ae500c  sb          $t6, 0x500C($sp)
    ctx->pc = 0x27a18cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 20492), (uint8_t)GPR_U32(ctx, 14));
    // 0x27a190: 0xa3ba500f  sb          $k0, 0x500F($sp)
    ctx->pc = 0x27a190u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 20495), (uint8_t)GPR_U32(ctx, 26));
    // 0x27a194: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x27a194u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x27a198: 0x2484a174  addiu       $a0, $a0, -0x5E8C
    ctx->pc = 0x27a198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943092));
    // 0x27a19c: 0xc09e574  jal         func_2795D0
    ctx->pc = 0x27A19Cu;
    SET_GPR_U32(ctx, 31, 0x27A1A4u);
    ctx->pc = 0x27A1A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A19Cu;
            // 0x27a1a0: 0xa3ba500f  sb          $k0, 0x500F($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 20495), (uint8_t)GPR_U32(ctx, 26));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2795D0u;
    if (runtime->hasFunction(0x2795D0u)) {
        auto targetFn = runtime->lookupFunction(0x2795D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A1A4u; }
        if (ctx->pc != 0x27A1A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002795D0_0x2795d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A1A4u; }
        if (ctx->pc != 0x27A1A4u) { return; }
    }
    ctx->pc = 0x27A1A4u;
label_27a1a4:
    // 0x27a1a4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x27A1A4u;
    {
        const bool branch_taken_0x27a1a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a1a4) {
            ctx->pc = 0x27A1D4u;
            goto label_27a1d4;
        }
    }
    ctx->pc = 0x27A1ACu;
    // 0x27a1ac: 0x87ed71c3  lh          $t5, 0x71C3($ra)
    ctx->pc = 0x27a1acu;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 31), 29123)));
    // 0x27a1b0: 0xa2feb3f9  sb          $fp, -0x4C07($s7)
    ctx->pc = 0x27a1b0u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 4294947833), (uint8_t)GPR_U32(ctx, 30));
    // 0x27a1b4: 0xfd096db2  sd          $t1, 0x6DB2($t0)
    ctx->pc = 0x27a1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 28082), GPR_U64(ctx, 9));
    // 0x27a1b8: 0xffcc8862  sd          $t4, -0x779E($fp)
    ctx->pc = 0x27a1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 4294936674), GPR_U64(ctx, 12));
    // 0x27a1bc: 0x8c6d7125  lw          $t5, 0x7125($v1)
    ctx->pc = 0x27a1bcu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28965)));
    // 0x27a1c0: 0xa09212d9  sb          $s2, 0x12D9($a0)
    ctx->pc = 0x27a1c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4825), (uint8_t)GPR_U32(ctx, 18));
    // 0x27a1c4: 0x6d5d4d43  ldr         $sp, 0x4D43($t2)
    ctx->pc = 0x27a1c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 19779); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 29, (GPR_U64(ctx, 29) & keepMask) | (mem >> shift)); }
    // 0x27a1c8: 0x980d26a5  lwr         $t5, 0x26A5($zero)
    ctx->pc = 0x27a1c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 9893); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 13) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 13) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 13, merged64); }
    // 0x27a1cc: 0x6d5d4d03  ldr         $sp, 0x4D03($t2)
    ctx->pc = 0x27a1ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 19715); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 29, (GPR_U64(ctx, 29) & keepMask) | (mem >> shift)); }
    // 0x27a1d0: 0x0  nop
    ctx->pc = 0x27a1d0u;
    // NOP
label_27a1d4:
    // 0x27a1d4: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x27A1D4u;
    {
        const bool branch_taken_0x27a1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A1D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A1D4u;
            // 0x27a1d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a1d4) {
            ctx->pc = 0x27A460u;
            goto label_27a460;
        }
    }
    ctx->pc = 0x27A1DCu;
    // 0x27a1dc: 0x0  nop
    ctx->pc = 0x27a1dcu;
    // NOP
label_27a1e0:
    // 0x27a1e0: 0x94e5000a  lhu         $a1, 0xA($a3)
    ctx->pc = 0x27a1e0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
    // 0x27a1e4: 0x8c625394  lw          $v0, 0x5394($v1)
    ctx->pc = 0x27a1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 21396)));
    // 0x27a1e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27a1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27a1ec: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x27a1ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x27a1f0: 0xa21006  srlv        $v0, $v0, $a1
    ctx->pc = 0x27a1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x27a1f4: 0x21942  srl         $v1, $v0, 5
    ctx->pc = 0x27a1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x27a1f8: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x27a1f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x27a1fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27a1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27a200: 0x442004  sllv        $a0, $a0, $v0
    ctx->pc = 0x27a200u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x27a204: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x27a204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x27a208: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x27a208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x27a20c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x27a20cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x27a210: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x27A210u;
    {
        const bool branch_taken_0x27a210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A210u;
            // 0x27a214: 0x3c0301c3  lui         $v1, 0x1C3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)451 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a210) {
            ctx->pc = 0x27A2F0u;
            goto label_27a2f0;
        }
    }
    ctx->pc = 0x27A218u;
    // 0x27a218: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x27a218u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x27a21c: 0x2463a264  addiu       $v1, $v1, -0x5D9C
    ctx->pc = 0x27a21cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943332));
    // 0x27a220: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x27a220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27a224: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27A224u;
    {
        const bool branch_taken_0x27a224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27a224) {
            ctx->pc = 0x27A244u;
            goto label_27a244;
        }
    }
    ctx->pc = 0x27A22Cu;
    // 0x27a22c: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x27a22cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x27a230: 0x2484a278  addiu       $a0, $a0, -0x5D88
    ctx->pc = 0x27a230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943352));
    // 0x27a234: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x27a234u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x27a238: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x27a238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x27a23c: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x27A23Cu;
    SET_GPR_U32(ctx, 31, 0x27A244u);
    ctx->pc = 0x27A240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A23Cu;
            // 0x27a240: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (runtime->hasFunction(0x29E050u)) {
        auto targetFn = runtime->lookupFunction(0x29E050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A244u; }
        if (ctx->pc != 0x27A244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E050_0x29e050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A244u; }
        if (ctx->pc != 0x27A244u) { return; }
    }
    ctx->pc = 0x27A244u;
label_27a244:
    // 0x27a244: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x27A244u;
    {
        const bool branch_taken_0x27a244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a244) {
            ctx->pc = 0x27A278u;
            goto label_27a278;
        }
    }
    ctx->pc = 0x27A24Cu;
    // 0x27a24c: 0x8655150b  lh          $s5, 0x150B($s2)
    ctx->pc = 0x27a24cu;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 5387)));
    // 0x27a250: 0xde386367  ld          $t8, 0x6367($s1)
    ctx->pc = 0x27a250u;
    SET_GPR_U64(ctx, 24, READ64(ADD32(GPR_U32(ctx, 17), 25447)));
    // 0x27a254: 0x1b11020  add         $v0, $t5, $s1
    ctx->pc = 0x27a254u;
    {     int32_t rs_val = GPR_S32(ctx, 13);     int32_t rt_val = GPR_S32(ctx, 17);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
    // 0x27a258: 0x8f99c715  lw          $t9, -0x38EB($gp)
    ctx->pc = 0x27a258u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952725)));
    // 0x27a25c: 0xa2dac8f9  sb          $k0, -0x3707($s6)
    ctx->pc = 0x27a25cu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 4294953209), (uint8_t)GPR_U32(ctx, 26));
    // 0x27a260: 0x86b15c23  lh          $s1, 0x5C23($s5)
    ctx->pc = 0x27a260u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 23587)));
    // 0x27a264: 0x0  nop
    ctx->pc = 0x27a264u;
    // NOP
    // 0x27a268: 0xcc5df55a  pref        0x1D, -0xAA6($v0)
    ctx->pc = 0x27a268u;
    // PREF instruction (ignored)
    // 0x27a26c: 0x980d26fe  lwr         $t5, 0x26FE($zero)
    ctx->pc = 0x27a26cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 9982); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 13) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 13) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 13, merged64); }
    // 0x27a270: 0xcc5df566  pref        0x1D, -0xA9A($v0)
    ctx->pc = 0x27a270u;
    // PREF instruction (ignored)
    // 0x27a274: 0x0  nop
    ctx->pc = 0x27a274u;
    // NOP
label_27a278:
    // 0x27a278: 0xbdf3180f  cache       0x13, 0x180F($t7)
    ctx->pc = 0x27a278u;
    // CACHE instruction (ignored)
    // 0x27a27c: 0xbdf3890f  cache       0x13, -0x76F1($t7)
    ctx->pc = 0x27a27cu;
    // CACHE instruction (ignored)
    // 0x27a280: 0xbdf3890f  cache       0x13, -0x76F1($t7)
    ctx->pc = 0x27a280u;
    // CACHE instruction (ignored)
    // 0x27a284: 0xbdf3890f  cache       0x13, -0x76F1($t7)
    ctx->pc = 0x27a284u;
    // CACHE instruction (ignored)
    // 0x27a288: 0x3aa5bfe9  xori        $a1, $s5, 0xBFE9
    ctx->pc = 0x27a288u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) ^ (uint64_t)(uint16_t)49129);
    // 0x27a28c: 0xbb653e3d  swr         $a1, 0x3E3D($k1)
    ctx->pc = 0x27a28cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 15933); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27a290: 0xab318e29  swl         $s1, -0x71D7($t9)
    ctx->pc = 0x27a290u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 4294938153); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 17); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27a294: 0xabb5de99  swl         $s5, -0x2167($sp)
    ctx->pc = 0x27a294u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4294958745); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 21); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27a298: 0xdad18f59  lqc2        $vf17, -0x70A7($s6)
    ctx->pc = 0x27a298u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 4294938457)));
    // 0x27a29c: 0x5df5d90d  .word       0x5DF5D90D                   # bgtzl       $t7, . + 4 + (-0x26F3 << 2) # 00150000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27A29Cu;
    {
        const bool branch_taken_0x27a29c = (GPR_S32(ctx, 15) > 0);
        if (branch_taken_0x27a29c) {
            ctx->pc = 0x27A2A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27A29Cu;
            // 0x27a2a0: 0xbdf3890f  cache       0x13, -0x76F1($t7) (Delay Slot)
        // CACHE instruction (ignored)
        ctx->in_delay_slot = false;
            ctx->pc = 0x2706D4u;
            return;
        }
    }
    ctx->pc = 0x27A2A4u;
    // 0x27a2a4: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x27a2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x27a2a8: 0x2484a288  addiu       $a0, $a0, -0x5D78
    ctx->pc = 0x27a2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943368));
    // 0x27a2ac: 0xc09e574  jal         func_2795D0
    ctx->pc = 0x27A2ACu;
    SET_GPR_U32(ctx, 31, 0x27A2B4u);
    ctx->pc = 0x27A2B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A2ACu;
            // 0x27a2b0: 0xbdf3890f  cache       0x13, -0x76F1($t7) (Delay Slot)
        // CACHE instruction (ignored)
        ctx->in_delay_slot = false;
    ctx->pc = 0x2795D0u;
    if (runtime->hasFunction(0x2795D0u)) {
        auto targetFn = runtime->lookupFunction(0x2795D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A2B4u; }
        if (ctx->pc != 0x27A2B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002795D0_0x2795d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A2B4u; }
        if (ctx->pc != 0x27A2B4u) { return; }
    }
    ctx->pc = 0x27A2B4u;
label_27a2b4:
    // 0x27a2b4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x27A2B4u;
    {
        const bool branch_taken_0x27a2b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a2b4) {
            ctx->pc = 0x27A2E4u;
            goto label_27a2e4;
        }
    }
    ctx->pc = 0x27A2BCu;
    // 0x27a2bc: 0x8d964875  lw          $s6, 0x4875($t4)
    ctx->pc = 0x27a2bcu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 18549)));
    // 0x27a2c0: 0x8fc34e85  lw          $v1, 0x4E85($fp)
    ctx->pc = 0x27a2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20101)));
    // 0x27a2c4: 0x8d3591f5  lw          $s5, -0x6E0B($t1)
    ctx->pc = 0x27a2c4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294939125)));
    // 0x27a2c8: 0xde925d27  ld          $s2, 0x5D27($s4)
    ctx->pc = 0x27a2c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 20), 23847)));
    // 0x27a2cc: 0x2575f5f0  addiu       $s5, $t3, -0xA10
    ctx->pc = 0x27a2ccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 11), 4294964720));
    // 0x27a2d0: 0x1e68820  add         $s1, $t7, $a2
    ctx->pc = 0x27a2d0u;
    {     int32_t rs_val = GPR_S32(ctx, 15);     int32_t rt_val = GPR_S32(ctx, 6);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
    // 0x27a2d4: 0xcc5da55f  pref        0x1D, -0x5AA1($v0)
    ctx->pc = 0x27a2d4u;
    // PREF instruction (ignored)
    // 0x27a2d8: 0x980d26ff  lwr         $t5, 0x26FF($zero)
    ctx->pc = 0x27a2d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 9983); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 13) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 13) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 13, merged64); }
    // 0x27a2dc: 0xcc5da563  pref        0x1D, -0x5A9D($v0)
    ctx->pc = 0x27a2dcu;
    // PREF instruction (ignored)
    // 0x27a2e0: 0x0  nop
    ctx->pc = 0x27a2e0u;
    // NOP
label_27a2e4:
    // 0x27a2e4: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x27A2E4u;
    {
        const bool branch_taken_0x27a2e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A2E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A2E4u;
            // 0x27a2e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a2e4) {
            ctx->pc = 0x27A460u;
            goto label_27a460;
        }
    }
    ctx->pc = 0x27A2ECu;
    // 0x27a2ec: 0x0  nop
    ctx->pc = 0x27a2ecu;
    // NOP
label_27a2f0:
    // 0x27a2f0: 0x8c6253d4  lw          $v0, 0x53D4($v1)
    ctx->pc = 0x27a2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 21460)));
    // 0x27a2f4: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x27A2F4u;
    {
        const bool branch_taken_0x27a2f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A2F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A2F4u;
            // 0x27a2f8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a2f4) {
            ctx->pc = 0x27A400u;
            goto label_27a400;
        }
    }
    ctx->pc = 0x27A2FCu;
    // 0x27a2fc: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x27a2fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x27a300: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x27A300u;
    {
        const bool branch_taken_0x27a300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A300u;
            // 0x27a304: 0x101042  srl         $v0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a300) {
            ctx->pc = 0x27A400u;
            goto label_27a400;
        }
    }
    ctx->pc = 0x27A308u;
    // 0x27a308: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x27a308u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x27a30c: 0x14400054  bnez        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x27A30Cu;
    {
        const bool branch_taken_0x27a30c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A30Cu;
            // 0x27a310: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a30c) {
            ctx->pc = 0x27A460u;
            goto label_27a460;
        }
    }
    ctx->pc = 0x27A314u;
    // 0x27a314: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x27a314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x27a318: 0x16020039  bne         $s0, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x27A318u;
    {
        const bool branch_taken_0x27a318 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x27A31Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A318u;
            // 0x27a31c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a318) {
            ctx->pc = 0x27A400u;
            goto label_27a400;
        }
    }
    ctx->pc = 0x27A320u;
    // 0x27a320: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x27A320u;
    {
        const bool branch_taken_0x27a320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A320u;
            // 0x27a324: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a320) {
            ctx->pc = 0x27A464u;
            goto label_27a464;
        }
    }
    ctx->pc = 0x27A328u;
label_27a328:
    // 0x27a328: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x27a328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x27a32c: 0x2463a374  addiu       $v1, $v1, -0x5C8C
    ctx->pc = 0x27a32cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943604));
    // 0x27a330: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x27a330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27a334: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27A334u;
    {
        const bool branch_taken_0x27a334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27a334) {
            ctx->pc = 0x27A354u;
            goto label_27a354;
        }
    }
    ctx->pc = 0x27A33Cu;
    // 0x27a33c: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x27a33cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x27a340: 0x2484a388  addiu       $a0, $a0, -0x5C78
    ctx->pc = 0x27a340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943624));
    // 0x27a344: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x27a344u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x27a348: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x27a348u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x27a34c: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x27A34Cu;
    SET_GPR_U32(ctx, 31, 0x27A354u);
    ctx->pc = 0x27A350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A34Cu;
            // 0x27a350: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (runtime->hasFunction(0x29E050u)) {
        auto targetFn = runtime->lookupFunction(0x29E050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A354u; }
        if (ctx->pc != 0x27A354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E050_0x29e050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A354u; }
        if (ctx->pc != 0x27A354u) { return; }
    }
    ctx->pc = 0x27A354u;
label_27a354:
    // 0x27a354: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x27A354u;
    {
        const bool branch_taken_0x27a354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a354) {
            ctx->pc = 0x27A388u;
            goto label_27a388;
        }
    }
    ctx->pc = 0x27A35Cu;
    // 0x27a35c: 0xa18a9f41  sb          $t2, -0x60BF($t4)
    ctx->pc = 0x27a35cu;
    WRITE8(ADD32(GPR_U32(ctx, 12), 4294942529), (uint8_t)GPR_U32(ctx, 10));
    // 0x27a360: 0xa3826519  sb          $v0, 0x6519($gp)
    ctx->pc = 0x27a360u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 25881), (uint8_t)GPR_U32(ctx, 2));
    // 0x27a364: 0x8d528e7d  lw          $s2, -0x7183($t2)
    ctx->pc = 0x27a364u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294938237)));
    // 0x27a368: 0xdf620277  ld          $v0, 0x277($k1)
    ctx->pc = 0x27a368u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 27), 631)));
    // 0x27a36c: 0x8dc86c95  lw          $t0, 0x6C95($t6)
    ctx->pc = 0x27a36cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 27797)));
    // 0x27a370: 0xa10fbd51  sb          $t7, -0x42AF($t0)
    ctx->pc = 0x27a370u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 4294950225), (uint8_t)GPR_U32(ctx, 15));
    // 0x27a374: 0x0  nop
    ctx->pc = 0x27a374u;
    // NOP
    // 0x27a378: 0xb88c4960  swr         $t4, 0x4960($a0)
    ctx->pc = 0x27a378u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 18784); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 12); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27a37c: 0x980d2758  lwr         $t5, 0x2758($zero)
    ctx->pc = 0x27a37cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 10072); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 13) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 13) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 13, merged64); }
    // 0x27a380: 0xb88c495c  swr         $t4, 0x495C($a0)
    ctx->pc = 0x27a380u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 18780); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 12); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27a384: 0x0  nop
    ctx->pc = 0x27a384u;
    // NOP
label_27a388:
    // 0x27a388: 0x708215f5  .word       0x708215F5                   # INVALID     $a0, $v0, 0x15F5 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x27a388u;
    // Unhandled MMI instruction: function 0x35
    // 0x27a38c: 0x709215fc  .word       0x709215FC                   # psllw       $v0, $s2, 23 # 00800000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x27a38cu;
    SET_GPR_VEC(ctx, 2, _mm_slli_epi32(GPR_VEC(ctx, 18), 23));
    // 0x27a390: 0x709215fc  .word       0x709215FC                   # psllw       $v0, $s2, 23 # 00800000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x27a390u;
    SET_GPR_VEC(ctx, 2, _mm_slli_epi32(GPR_VEC(ctx, 18), 23));
    // 0x27a394: 0x709215fc  .word       0x709215FC                   # psllw       $v0, $s2, 23 # 00800000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x27a394u;
    SET_GPR_VEC(ctx, 2, _mm_slli_epi32(GPR_VEC(ctx, 18), 23));
    // 0x27a398: 0x1ffc7c8c  .word       0x1FFC7C8C                   # bgtz        $ra, . + 4 + (0x7C8C << 2) # 001C0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27A398u;
    {
        const bool branch_taken_0x27a398 = (GPR_S32(ctx, 31) > 0);
        ctx->pc = 0x27A39Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A398u;
            // 0x27a39c: 0x15b26788  bne         $t5, $s2, . + 4 + (0x6788 << 2) (Delay Slot)
        // Likely branch instruction at 0x27A39C - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a398) {
            ctx->pc = 0x2995CCu;
            return;
        }
    }
    ctx->pc = 0x27A3A0u;
    // 0x27a3a0: 0x1fe53588  .word       0x1FE53588                   # bgtz        $ra, . + 4 + (0x3588 << 2) # 00050000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27A3A0u;
    {
        const bool branch_taken_0x27a3a0 = (GPR_S32(ctx, 31) > 0);
        ctx->pc = 0x27A3A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A3A0u;
            // 0x27a3a4: 0x1ff57b8e  .word       0x1FF57B8E                   # bgtz        $ra, . + 4 + (0x7B8E << 2) # 00150000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x27A3A4 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a3a0) {
            ctx->pc = 0x2879C4u;
            return;
        }
    }
    ctx->pc = 0x27A3A8u;
    // 0x27a3a8: 0xf574dc  .word       0x00F574DC                   # dmult       $a3, $s5 # 000074C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a3a8u;
    // Unhandled SPECIAL instruction: 0x1C
    // 0x27a3ac: 0x5e921599  .word       0x5E921599                   # bgtzl       $s4, . + 4 + (0x1599 << 2) # 00120000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27A3ACu;
    {
        const bool branch_taken_0x27a3ac = (GPR_S32(ctx, 20) > 0);
        if (branch_taken_0x27a3ac) {
            ctx->pc = 0x27A3B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27A3ACu;
            // 0x27a3b0: 0x709215fc  .word       0x709215FC                   # psllw       $v0, $s2, 23 # 00800000 <InstrIdType: R5900_MMI> (Delay Slot)
        SET_GPR_VEC(ctx, 2, _mm_slli_epi32(GPR_VEC(ctx, 18), 23));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27FA14u;
            return;
        }
    }
    ctx->pc = 0x27A3B4u;
    // 0x27a3b4: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x27a3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x27a3b8: 0x2484a398  addiu       $a0, $a0, -0x5C68
    ctx->pc = 0x27a3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943640));
    // 0x27a3bc: 0xc09e574  jal         func_2795D0
    ctx->pc = 0x27A3BCu;
    SET_GPR_U32(ctx, 31, 0x27A3C4u);
    ctx->pc = 0x27A3C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A3BCu;
            // 0x27a3c0: 0x709215fc  .word       0x709215FC                   # psllw       $v0, $s2, 23 # 00800000 <InstrIdType: R5900_MMI> (Delay Slot)
        SET_GPR_VEC(ctx, 2, _mm_slli_epi32(GPR_VEC(ctx, 18), 23));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2795D0u;
    if (runtime->hasFunction(0x2795D0u)) {
        auto targetFn = runtime->lookupFunction(0x2795D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A3C4u; }
        if (ctx->pc != 0x27A3C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002795D0_0x2795d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A3C4u; }
        if (ctx->pc != 0x27A3C4u) { return; }
    }
    ctx->pc = 0x27A3C4u;
label_27a3c4:
    // 0x27a3c4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x27A3C4u;
    {
        const bool branch_taken_0x27a3c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a3c4) {
            ctx->pc = 0x27A3F4u;
            goto label_27a3f4;
        }
    }
    ctx->pc = 0x27A3CCu;
    // 0x27a3cc: 0xddf042b7  ld          $s0, 0x42B7($t7)
    ctx->pc = 0x27a3ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 15), 17079)));
    // 0x27a3d0: 0x85935e63  lh          $s3, 0x5E63($t4)
    ctx->pc = 0x27a3d0u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 24163)));
    // 0x27a3d4: 0x27d0a538  addiu       $s0, $fp, -0x5AC8
    ctx->pc = 0x27a3d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294944056));
    // 0x27a3d8: 0x8d4651c5  lw          $a2, 0x51C5($t2)
    ctx->pc = 0x27a3d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 20933)));
    // 0x27a3dc: 0xffb042c2  sd          $s0, 0x42C2($sp)
    ctx->pc = 0x27a3dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 17090), GPR_U64(ctx, 16));
    // 0x27a3e0: 0x8d283afd  lw          $t0, 0x3AFD($t1)
    ctx->pc = 0x27a3e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 15101)));
    // 0x27a3e4: 0xb88c4069  swr         $t4, 0x4069($a0)
    ctx->pc = 0x27a3e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16489); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 12); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27a3e8: 0x980d2759  lwr         $t5, 0x2759($zero)
    ctx->pc = 0x27a3e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 10073); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 13) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 13) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 13, merged64); }
    // 0x27a3ec: 0xb88c4055  swr         $t4, 0x4055($a0)
    ctx->pc = 0x27a3ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16469); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 12); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27a3f0: 0x0  nop
    ctx->pc = 0x27a3f0u;
    // NOP
label_27a3f4:
    // 0x27a3f4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x27A3F4u;
    {
        const bool branch_taken_0x27a3f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A3F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A3F4u;
            // 0x27a3f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a3f4) {
            ctx->pc = 0x27A460u;
            goto label_27a460;
        }
    }
    ctx->pc = 0x27A3FCu;
    // 0x27a3fc: 0x0  nop
    ctx->pc = 0x27a3fcu;
    // NOP
label_27a400:
    // 0x27a400: 0xc09e6f8  jal         func_279BE0
    ctx->pc = 0x27A400u;
    SET_GPR_U32(ctx, 31, 0x27A408u);
    ctx->pc = 0x27A404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A400u;
            // 0x27a404: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x279BE0u;
    if (runtime->hasFunction(0x279BE0u)) {
        auto targetFn = runtime->lookupFunction(0x279BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A408u; }
        if (ctx->pc != 0x27A408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00279BE0_0x279be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A408u; }
        if (ctx->pc != 0x27A408u) { return; }
    }
    ctx->pc = 0x27A408u;
label_27a408:
    // 0x27a408: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27a408u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a40c: 0x52200014  beql        $s1, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x27A40Cu;
    {
        const bool branch_taken_0x27a40c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a40c) {
            ctx->pc = 0x27A410u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27A40Cu;
            // 0x27a410: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27A460u;
            goto label_27a460;
        }
    }
    ctx->pc = 0x27A414u;
    // 0x27a414: 0x1240000f  beqz        $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x27A414u;
    {
        const bool branch_taken_0x27a414 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a414) {
            ctx->pc = 0x27A454u;
            goto label_27a454;
        }
    }
    ctx->pc = 0x27A41Cu;
    // 0x27a41c: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x27A41Cu;
    {
        const bool branch_taken_0x27a41c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A41Cu;
            // 0x27a420: 0x212102b  sltu        $v0, $s0, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a41c) {
            ctx->pc = 0x27A454u;
            goto label_27a454;
        }
    }
    ctx->pc = 0x27A424u;
    // 0x27a424: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27A424u;
    {
        const bool branch_taken_0x27a424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A424u;
            // 0x27a428: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a424) {
            ctx->pc = 0x27A448u;
            goto label_27a448;
        }
    }
    ctx->pc = 0x27A42Cu;
    // 0x27a42c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27a42cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a430: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27a430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a434: 0xc049c48  jal         func_127120
    ctx->pc = 0x27A434u;
    SET_GPR_U32(ctx, 31, 0x27A43Cu);
    ctx->pc = 0x27A438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A434u;
            // 0x27a438: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A43Cu; }
        if (ctx->pc != 0x27A43Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A43Cu; }
        if (ctx->pc != 0x27A43Cu) { return; }
    }
    ctx->pc = 0x27A43Cu;
label_27a43c:
    // 0x27a43c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x27A43Cu;
    {
        const bool branch_taken_0x27a43c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a43c) {
            ctx->pc = 0x27A454u;
            goto label_27a454;
        }
    }
    ctx->pc = 0x27A444u;
    // 0x27a444: 0x0  nop
    ctx->pc = 0x27a444u;
    // NOP
label_27a448:
    // 0x27a448: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27a448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a44c: 0xc049c48  jal         func_127120
    ctx->pc = 0x27A44Cu;
    SET_GPR_U32(ctx, 31, 0x27A454u);
    ctx->pc = 0x27A450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A44Cu;
            // 0x27a450: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A454u; }
        if (ctx->pc != 0x27A454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A454u; }
        if (ctx->pc != 0x27A454u) { return; }
    }
    ctx->pc = 0x27A454u;
label_27a454:
    // 0x27a454: 0xc09e920  jal         func_27A480
    ctx->pc = 0x27A454u;
    SET_GPR_U32(ctx, 31, 0x27A45Cu);
    ctx->pc = 0x27A458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A454u;
            // 0x27a458: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27A480u;
    if (runtime->hasFunction(0x27A480u)) {
        auto targetFn = runtime->lookupFunction(0x27A480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A45Cu; }
        if (ctx->pc != 0x27A45Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027A480_0x27a480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A45Cu; }
        if (ctx->pc != 0x27A45Cu) { return; }
    }
    ctx->pc = 0x27A45Cu;
label_27a45c:
    // 0x27a45c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x27a45cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27a460:
    // 0x27a460: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27a460u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_27a464:
    // 0x27a464: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x27a464u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27a468: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x27a468u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27a46c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x27a46cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x27a470: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x27a470u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27a474: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x27a474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x27a478: 0x3e00008  jr          $ra
    ctx->pc = 0x27A478u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27A47Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A478u;
            // 0x27a47c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27A480u;
    ctx->pc = 0x27a480u;
}
