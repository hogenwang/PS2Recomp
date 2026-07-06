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

// Function: sub_00274AF0
// Address: 0x274af0 - 0x274bf0
void sub_00274AF0_0x274af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00274AF0_0x274af0");
#endif

    switch (ctx->pc) {
        case 0x274b2cu: goto label_274b2c;
        case 0x274b4cu: goto label_274b4c;
        case 0x274b9cu: goto label_274b9c;
        case 0x274bdcu: goto label_274bdc;
        default: break;
    }

    ctx->pc = 0x274af0u;

    // 0x274af0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x274af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x274af4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x274af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x274af8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x274af8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274afc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x274afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x274b00: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x274b00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x274b04: 0x24634b4c  addiu       $v1, $v1, 0x4B4C
    ctx->pc = 0x274b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19276));
    // 0x274b08: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x274b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x274b0c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x274B0Cu;
    {
        const bool branch_taken_0x274b0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x274b0c) {
            ctx->pc = 0x274B2Cu;
            goto label_274b2c;
        }
    }
    ctx->pc = 0x274B14u;
    // 0x274b14: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x274b14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x274b18: 0x24844b60  addiu       $a0, $a0, 0x4B60
    ctx->pc = 0x274b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19296));
    // 0x274b1c: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x274b1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x274b20: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x274b20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x274b24: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x274B24u;
    SET_GPR_U32(ctx, 31, 0x274B2Cu);
    ctx->pc = 0x274B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274B24u;
    // 0x274b28: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E050u, 0x274B24u, 0x274B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274B2Cu;
label_274b2c:
    // 0x274b2c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x274B2Cu;
    {
        const bool branch_taken_0x274b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274b2c) {
            ctx->pc = 0x274B60u;
            goto label_274b60;
        }
    }
    ctx->pc = 0x274B34u;
    // 0x274b34: 0xa24202c1  sb          $v0, 0x2C1($s2)
    ctx->pc = 0x274b34u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 705), (uint8_t)GPR_U32(ctx, 2));
    // 0x274b38: 0xdde27d3f  ld          $v0, 0x7D3F($t7)
    ctx->pc = 0x274b38u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 15), 32063)));
    // 0x274b3c: 0x2b74820  add         $t1, $s5, $s7
    ctx->pc = 0x274b3cu;
    {     int32_t rs_val = GPR_S32(ctx, 21);     int32_t rt_val = GPR_S32(ctx, 23);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
    // 0x274b40: 0x8f7ee5a5  lw          $fp, -0x1A5B($k1)
    ctx->pc = 0x274b40u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 27), 4294960549)));
    // 0x274b44: 0xcca8715  jal         func_32A1C54
    ctx->pc = 0x274B44u;
    SET_GPR_U32(ctx, 31, 0x274B4Cu);
    ctx->pc = 0x274B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274B44u;
    // 0x274b48: 0x256f8b58  addiu       $t7, $t3, -0x74A8 (Delay Slot)
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 11), 4294937432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A1C54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A1C54u, 0x274B44u, 0x274B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274B4Cu;
label_274b4c:
    // 0x274b4c: 0x0  nop
    ctx->pc = 0x274b4cu;
    // NOP
    // 0x274b50: 0xe8dfca68  swc2        $31, -0x3598($a2)
    ctx->pc = 0x274b50u;
    throw std::runtime_error("Unhandled opcode: 0x3A at 0x274B50 raw=0xE8DFCA68");
    // 0x274b54: 0x971e26ce  lhu         $fp, 0x26CE($t8)
    ctx->pc = 0x274b54u;
    SET_GPR_U32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 9934)));
    // 0x274b58: 0xe8dfca44  swc2        $31, -0x35BC($a2)
    ctx->pc = 0x274b58u;
    throw std::runtime_error("Unhandled opcode: 0x3A at 0x274B58 raw=0xE8DFCA44");
    // 0x274b5c: 0x0  nop
    ctx->pc = 0x274b5cu;
    // NOP
label_274b60:
    // 0x274b60: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x274b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x274b64: 0x244632dc  addiu       $a2, $v0, 0x32DC
    ctx->pc = 0x274b64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 13020));
    // 0x274b68: 0xb0eb4dc1  sdl         $t3, 0x4DC1($a3)
    ctx->pc = 0x274b68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 19905); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x274b6c: 0xb0fdd9c1  sdl         $sp, -0x263F($a3)
    ctx->pc = 0x274b6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 4294957505); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 29); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x274b70: 0xb07548c3  sdl         $s5, 0x48C3($v1)
    ctx->pc = 0x274b70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 18627); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 21); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x274b74: 0xd06d49c3  lld         $t5, 0x49C3($v1)
    ctx->pc = 0x274b74u;
    throw std::runtime_error("Unhandled opcode: 0x34 at 0x274B74 raw=0xD06D49C3");
    // 0x274b78: 0x987d99c0  lwr         $sp, -0x6640($v1)
    ctx->pc = 0x274b78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294941120); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 29) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 29) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 29, merged64); }
    // 0x274b7c: 0xe07d5bd3  sc          $sp, 0x5BD3($v1)
    ctx->pc = 0x274b7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23507); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 29)); SET_GPR_S32(ctx, 29, 1); } else { SET_GPR_S32(ctx, 29, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x274b80: 0xe4fdcb50  swc1        $f29, -0x34B0($a3)
    ctx->pc = 0x274b80u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294953808), bits); }
    // 0x274b84: 0x9b80c721  lwr         $zero, -0x38DF($gp)
    ctx->pc = 0x274b84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 28), 4294952737); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 0) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 0) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 0, merged64); }
    // 0x274b88: 0xe07d99c0  sc          $sp, -0x6640($v1)
    ctx->pc = 0x274b88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294941120); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 29)); SET_GPR_S32(ctx, 29, 1); } else { SET_GPR_S32(ctx, 29, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x274b8c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x274B8Cu;
    {
        const bool branch_taken_0x274b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274b8c) {
            ctx->pc = 0x274BBCu;
            goto label_274bbc;
        }
    }
    ctx->pc = 0x274B94u;
    // 0x274b94: 0xc40d052  jal         func_1034148
    ctx->pc = 0x274B94u;
    SET_GPR_U32(ctx, 31, 0x274B9Cu);
    ctx->pc = 0x274B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274B94u;
    // 0x274b98: 0xa3d38f01  sb          $s3, -0x70FF($fp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 30), 4294938369), (uint8_t)GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1034148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1034148u, 0x274B94u, 0x274B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274B9Cu;
label_274b9c:
    // 0x274b9c: 0x8d94c2cd  lw          $s4, -0x3D33($t4)
    ctx->pc = 0x274b9cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4294951629)));
    // 0x274ba0: 0xa08c0cb1  sb          $t4, 0xCB1($a0)
    ctx->pc = 0x274ba0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3249), (uint8_t)GPR_U32(ctx, 12));
    // 0x274ba4: 0xa2855009  sb          $a1, 0x5009($s4)
    ctx->pc = 0x274ba4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 20489), (uint8_t)GPR_U32(ctx, 5));
    // 0x274ba8: 0xa2faafc9  sb          $k0, -0x5037($s7)
    ctx->pc = 0x274ba8u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 4294946761), (uint8_t)GPR_U32(ctx, 26));
    // 0x274bac: 0xe886acfd  swc2        $6, -0x5303($a0)
    ctx->pc = 0x274bacu;
    throw std::runtime_error("Unhandled opcode: 0x3A at 0x274BAC raw=0xE886ACFD");
    // 0x274bb0: 0x971e26cf  lhu         $fp, 0x26CF($t8)
    ctx->pc = 0x274bb0u;
    SET_GPR_U32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 9935)));
    // 0x274bb4: 0xe886acd1  swc2        $6, -0x532F($a0)
    ctx->pc = 0x274bb4u;
    throw std::runtime_error("Unhandled opcode: 0x3A at 0x274BB4 raw=0xE886ACD1");
    // 0x274bb8: 0x0  nop
    ctx->pc = 0x274bb8u;
    // NOP
label_274bbc:
    // 0x274bbc: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x274bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x274bc0: 0x24424bac  addiu       $v0, $v0, 0x4BAC
    ctx->pc = 0x274bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19372));
    // 0x274bc4: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x274bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x274bc8: 0x24844b8c  addiu       $a0, $a0, 0x4B8C
    ctx->pc = 0x274bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19340));
    // 0x274bcc: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x274bccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x274bd0: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x274bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x274bd4: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x274BD4u;
    SET_GPR_U32(ctx, 31, 0x274BDCu);
    ctx->pc = 0x274BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274BD4u;
    // 0x274bd8: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E050u, 0x274BD4u, 0x274BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274BDCu;
label_274bdc:
    // 0x274bdc: 0x24020120  addiu       $v0, $zero, 0x120
    ctx->pc = 0x274bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    // 0x274be0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x274be0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x274be4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x274be4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x274be8: 0x3e00008  jr          $ra
    ctx->pc = 0x274BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274BE8u;
        // 0x274bec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274BE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x274BF0u;
}
