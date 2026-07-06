#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00298DB8
// Address: 0x298db8 - 0x298e88
void sub_00298DB8_0x298db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298DB8_0x298db8");
#endif

    switch (ctx->pc) {
        case 0x298e08u: goto label_298e08;
        case 0x298e4cu: goto label_298e4c;
        default: break;
    }

    ctx->pc = 0x298db8u;

    // 0x298db8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x298db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x298dbc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x298dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x298dc0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x298dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x298dc4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x298dc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298dc8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x298dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x298dcc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x298dccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298dd0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x298dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x298dd4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x298dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x298dd8: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x298DD8u;
    {
        const bool branch_taken_0x298dd8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x298DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298DD8u;
            // 0x298ddc: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298dd8) {
            ctx->pc = 0x298DECu;
            goto label_298dec;
        }
    }
    ctx->pc = 0x298DE0u;
    // 0x298de0: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x298de0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x298de4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x298DE4u;
    {
        const bool branch_taken_0x298de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x298DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298DE4u;
            // 0x298de8: 0x92240000  lbu         $a0, 0x0($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298de4) {
            ctx->pc = 0x298DF4u;
            goto label_298df4;
        }
    }
    ctx->pc = 0x298DECu;
label_298dec:
    // 0x298dec: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x298DECu;
    {
        const bool branch_taken_0x298dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298DF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298DECu;
            // 0x298df0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298dec) {
            ctx->pc = 0x298E68u;
            goto label_298e68;
        }
    }
    ctx->pc = 0x298DF4u;
label_298df4:
    // 0x298df4: 0x24120100  addiu       $s2, $zero, 0x100
    ctx->pc = 0x298df4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x298df8: 0x24140020  addiu       $s4, $zero, 0x20
    ctx->pc = 0x298df8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x298dfc: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x298dfcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x298e00: 0x13983e  dsrl32      $s3, $s3, 0
    ctx->pc = 0x298e00u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) >> (32 + 0));
    // 0x298e04: 0x0  nop
    ctx->pc = 0x298e04u;
    // NOP
label_298e08:
    // 0x298e08: 0x4163c  dsll32      $v0, $a0, 24
    ctx->pc = 0x298e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 24));
    // 0x298e0c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x298e0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x298e10: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x298e10u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x298e14: 0x2421025  or          $v0, $s2, $v0
    ctx->pc = 0x298e14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x298e18: 0x218ba  dsrl        $v1, $v0, 2
    ctx->pc = 0x298e18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> 2);
    // 0x298e1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x298e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298e20: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x298e20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x298e24: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x298e24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298e28: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x298e28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x298e2c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x298e2cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x298e30: 0x66520100  daddiu      $s2, $s2, 0x100
    ctx->pc = 0x298e30u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 18) + (int64_t)(int32_t)256);
    // 0x298e34: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x298e34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x298e38: 0x2831023  subu        $v0, $s4, $v1
    ctx->pc = 0x298e38u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x298e3c: 0x701814  dsllv       $v1, $s0, $v1
    ctx->pc = 0x298e3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (GPR_U32(ctx, 3) & 0x3F));
    // 0x298e40: 0x501016  dsrlv       $v0, $s0, $v0
    ctx->pc = 0x298e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) >> (GPR_U32(ctx, 2) & 0x3F));
    // 0x298e44: 0xc048082  jal         func_120208
    ctx->pc = 0x298E44u;
    SET_GPR_U32(ctx, 31, 0x298E4Cu);
    ctx->pc = 0x298E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298E44u;
            // 0x298e48: 0x628025  or          $s0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (runtime->hasFunction(0x120208u)) {
        auto targetFn = runtime->lookupFunction(0x120208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298E4Cu; }
        if (ctx->pc != 0x298E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00120208_0x120208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298E4Cu; }
        if (ctx->pc != 0x298E4Cu) { return; }
    }
    ctx->pc = 0x298E4Cu;
label_298e4c:
    // 0x298e4c: 0x2138024  and         $s0, $s0, $s3
    ctx->pc = 0x298e4cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 19));
    // 0x298e50: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x298e50u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x298e54: 0x2028026  xor         $s0, $s0, $v0
    ctx->pc = 0x298e54u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
    // 0x298e58: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x298E58u;
    {
        const bool branch_taken_0x298e58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x298E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298E58u;
            // 0x298e5c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298e58) {
            ctx->pc = 0x298E08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_298e08;
        }
    }
    ctx->pc = 0x298E60u;
    // 0x298e60: 0x10143a  dsrl        $v0, $s0, 16
    ctx->pc = 0x298e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) >> 16);
    // 0x298e64: 0x501026  xor         $v0, $v0, $s0
    ctx->pc = 0x298e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 16));
label_298e68:
    // 0x298e68: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x298e68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x298e6c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x298e6cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x298e70: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x298e70u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x298e74: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x298e74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x298e78: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x298e78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298e7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x298e7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298e80: 0x3e00008  jr          $ra
    ctx->pc = 0x298E80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298E80u;
            // 0x298e84: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x298E88u;
    ctx->pc = 0x298e88u;
}
