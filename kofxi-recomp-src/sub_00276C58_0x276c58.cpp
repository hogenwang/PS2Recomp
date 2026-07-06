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

// Function: sub_00276C58
// Address: 0x276c58 - 0x276d80
void sub_00276C58_0x276c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00276C58_0x276c58");
#endif

    switch (ctx->pc) {
        case 0x276cacu: goto label_276cac;
        case 0x276cc4u: goto label_276cc4;
        case 0x276d20u: goto label_276d20;
        case 0x276d28u: goto label_276d28;
        case 0x276d34u: goto label_276d34;
        case 0x276d60u: goto label_276d60;
        default: break;
    }

    ctx->pc = 0x276c58u;

    // 0x276c58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x276c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x276c5c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x276c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x276c60: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x276c60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276c64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x276c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x276c68: 0x26300002  addiu       $s0, $s1, 0x2
    ctx->pc = 0x276c68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x276c6c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x276c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x276c70: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x276c70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276c74: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x276c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x276c78: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x276c78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276c7c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x276c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x276c80: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x276c80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x276c84: 0x24636ccc  addiu       $v1, $v1, 0x6CCC
    ctx->pc = 0x276c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27852));
    // 0x276c88: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x276c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x276c8c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x276C8Cu;
    {
        const bool branch_taken_0x276c8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x276c8c) {
            ctx->pc = 0x276CACu;
            goto label_276cac;
        }
    }
    ctx->pc = 0x276C94u;
    // 0x276c94: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x276c94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x276c98: 0x24846ce0  addiu       $a0, $a0, 0x6CE0
    ctx->pc = 0x276c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27872));
    // 0x276c9c: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x276c9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x276ca0: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x276ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x276ca4: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x276CA4u;
    SET_GPR_U32(ctx, 31, 0x276CACu);
    ctx->pc = 0x276CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276CA4u;
    // 0x276ca8: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E050u, 0x276CA4u, 0x276CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276CACu;
label_276cac:
    // 0x276cac: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x276CACu;
    {
        const bool branch_taken_0x276cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x276cac) {
            ctx->pc = 0x276CE0u;
            goto label_276ce0;
        }
    }
    ctx->pc = 0x276CB4u;
    // 0x276cb4: 0x84911133  lh          $s1, 0x1133($a0)
    ctx->pc = 0x276cb4u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4403)));
    // 0x276cb8: 0xff8202d2  sd          $v0, 0x2D2($gp)
    ctx->pc = 0x276cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 722), GPR_U64(ctx, 2));
    // 0x276cbc: 0xcf71b41  jal         func_3DC6D04
    ctx->pc = 0x276CBCu;
    SET_GPR_U32(ctx, 31, 0x276CC4u);
    ctx->pc = 0x276CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276CBCu;
    // 0x276cc0: 0xffcdd4aa  sd          $t5, -0x2B56($fp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 30), 4294956202), GPR_U64(ctx, 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC6D04u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC6D04u, 0x276CBCu, 0x276CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276CC4u;
label_276cc4:
    // 0x276cc4: 0xa3c24d09  sb          $v0, 0x4D09($fp)
    ctx->pc = 0x276cc4u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 19721), (uint8_t)GPR_U32(ctx, 2));
    // 0x276cc8: 0x263eb3f8  addiu       $fp, $s1, -0x4C08
    ctx->pc = 0x276cc8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), 4294947832));
    // 0x276ccc: 0x0  nop
    ctx->pc = 0x276cccu;
    // NOP
    // 0x276cd0: 0xf9a6c787  sqc2        $vf6, -0x3879($t5)
    ctx->pc = 0x276cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 4294952839), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x276cd4: 0x0  nop
    ctx->pc = 0x276cd4u;
    // NOP
    // 0x276cd8: 0xf9a6c7b7  sqc2        $vf6, -0x3849($t5)
    ctx->pc = 0x276cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 4294952887), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x276cdc: 0x0  nop
    ctx->pc = 0x276cdcu;
    // NOP
label_276ce0:
    // 0x276ce0: 0xc339ea8f  ll          $t9, -0x1571($t9)
    ctx->pc = 0x276ce0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 4294961807); SET_GPR_S32(ctx, 25, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x276ce4: 0x8321ca8d  lb          $at, -0x3573($t9)
    ctx->pc = 0x276ce4u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 25), 4294953613)));
    // 0x276ce8: 0x5339ea8e  beql        $t9, $t9, . + 4 + (-0x1572 << 2)
    ctx->pc = 0x276CE8u;
    {
        const bool branch_taken_0x276ce8 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 25));
        if (branch_taken_0x276ce8) {
            ctx->pc = 0x276CECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x276CE8u;
            // 0x276cec: 0xc323eb8f  ll          $v1, -0x1471($t9) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 25), 4294962063); SET_GPR_S32(ctx, 3, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x271724u;
            return;
        }
    }
    ctx->pc = 0x276CF0u;
    // 0x276cf0: 0x8372cb8f  lb          $s2, -0x3471($k1)
    ctx->pc = 0x276cf0u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 27), 4294953871)));
    // 0x276cf4: 0xc33beb8f  ll          $k1, -0x1471($t9)
    ctx->pc = 0x276cf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 4294962063); SET_GPR_S32(ctx, 27, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x276cf8: 0xc323eb0f  ll          $v1, -0x14F1($t9)
    ctx->pc = 0x276cf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 4294961935); SET_GPR_S32(ctx, 3, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x276cfc: 0x1331cf8c  beq         $t9, $s1, . + 4 + (-0x3074 << 2)
    ctx->pc = 0x276CFCu;
    {
        const bool branch_taken_0x276cfc = (GPR_U64(ctx, 25) == GPR_U64(ctx, 17));
        ctx->pc = 0x276D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276CFCu;
        // 0x276d00: 0x8228eb87  lb          $t0, -0x1479($s1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4294962055)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276cfc) {
            ctx->pc = 0x26AB30u;
            return;
        }
    }
    ctx->pc = 0x276D04u;
    // 0x276d04: 0x1350d774  beq         $k0, $s0, . + 4 + (-0x288C << 2)
    ctx->pc = 0x276D04u;
    {
        const bool branch_taken_0x276d04 = (GPR_U64(ctx, 26) == GPR_U64(ctx, 16));
        ctx->pc = 0x276D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276D04u;
        // 0x276d08: 0x1328db81  beq         $t9, $t0, . + 4 + (-0x247F << 2) (Delay Slot)
        // Likely branch instruction at 0x276D08 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x276d04) {
            ctx->pc = 0x26CAD8u;
            return;
        }
    }
    ctx->pc = 0x276D0Cu;
    // 0x276d0c: 0xc33beb0f  ll          $k1, -0x14F1($t9)
    ctx->pc = 0x276d0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 4294961935); SET_GPR_S32(ctx, 27, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x276d10: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x276D10u;
    {
        const bool branch_taken_0x276d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x276d10) {
            ctx->pc = 0x276D40u;
            goto label_276d40;
        }
    }
    ctx->pc = 0x276D18u;
    // 0x276d18: 0xc8c0c29  jal         func_23030A4
    ctx->pc = 0x276D18u;
    SET_GPR_U32(ctx, 31, 0x276D20u);
    ctx->pc = 0x276D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276D18u;
    // 0x276d1c: 0x14f6820  add         $t5, $t2, $t7 (Delay Slot)
    {     int32_t rs_val = GPR_S32(ctx, 10);     int32_t rt_val = GPR_S32(ctx, 15);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23030A4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23030A4u, 0x276D18u, 0x276D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276D20u;
label_276d20:
    // 0x276d20: 0xc5ae8bd  jal         func_16BA2F4
    ctx->pc = 0x276D20u;
    SET_GPR_U32(ctx, 31, 0x276D28u);
    ctx->pc = 0x276D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276D20u;
    // 0x276d24: 0x22d6820  add         $t5, $s1, $t5 (Delay Slot)
    {     int32_t rs_val = GPR_S32(ctx, 17);     int32_t rt_val = GPR_S32(ctx, 13);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
    ctx->in_delay_slot = false;
    ctx->pc = 0x16BA2F4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BA2F4u, 0x276D20u, 0x276D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276D28u;
label_276d28:
    // 0x276d28: 0x87c66ae3  lh          $a2, 0x6AE3($fp)
    ctx->pc = 0x276d28u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 27363)));
    // 0x276d2c: 0xc8d3fa6  jal         func_234FE98
    ctx->pc = 0x276D2Cu;
    SET_GPR_U32(ctx, 31, 0x276D34u);
    ctx->pc = 0x276D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276D2Cu;
    // 0x276d30: 0xf787c6a9  sdc1        $f7, -0x3957($gp) (Delay Slot)
    throw std::runtime_error("Unhandled opcode: 0x3D at 0x276D30 raw=0xF787C6A9");
    ctx->in_delay_slot = false;
    ctx->pc = 0x234FE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234FE98u, 0x276D2Cu, 0x276D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276D34u;
label_276d34:
    // 0x276d34: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276d34u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x276D34 raw=0x00000001");
    // 0x276d38: 0xf787c699  sdc1        $f7, -0x3967($gp)
    ctx->pc = 0x276d38u;
    throw std::runtime_error("Unhandled opcode: 0x3D at 0x276D38 raw=0xF787C699");
    // 0x276d3c: 0x0  nop
    ctx->pc = 0x276d3cu;
    // NOP
label_276d40:
    // 0x276d40: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x276d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x276d44: 0x24426d30  addiu       $v0, $v0, 0x6D30
    ctx->pc = 0x276d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27952));
    // 0x276d48: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x276d48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x276d4c: 0x24846d10  addiu       $a0, $a0, 0x6D10
    ctx->pc = 0x276d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27920));
    // 0x276d50: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x276d50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x276d54: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x276d54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x276d58: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x276D58u;
    SET_GPR_U32(ctx, 31, 0x276D60u);
    ctx->pc = 0x276D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276D58u;
    // 0x276d5c: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E050u, 0x276D58u, 0x276D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276D60u;
label_276d60:
    // 0x276d60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x276d60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x276d64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x276d64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x276d68: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x276d68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x276d6c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x276d6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x276d70: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x276d70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x276d74: 0x3e00008  jr          $ra
    ctx->pc = 0x276D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276D74u;
        // 0x276d78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276D74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x276D7Cu;
    // 0x276d7c: 0x0  nop
    ctx->pc = 0x276d7cu;
    // NOP
    if (ctx->pc == 0x276d7cu) { ctx->pc = 0x276d80u; }
}
