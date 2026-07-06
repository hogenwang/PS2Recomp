#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00244EE0
// Address: 0x244ee0 - 0x244f90
void sub_00244EE0_0x244ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244EE0_0x244ee0");
#endif

    ctx->pc = 0x244ee0u;

    // 0x244ee0: 0x30820008  andi        $v0, $a0, 0x8
    ctx->pc = 0x244ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x244ee4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x244EE4u;
    {
        const bool branch_taken_0x244ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x244EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244EE4u;
            // 0x244ee8: 0x30820010  andi        $v0, $a0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x244ee4) {
            ctx->pc = 0x244EF8u;
            goto label_244ef8;
        }
    }
    ctx->pc = 0x244EECu;
    // 0x244eec: 0xdca20020  ld          $v0, 0x20($a1)
    ctx->pc = 0x244eecu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x244ef0: 0xfcc20020  sd          $v0, 0x20($a2)
    ctx->pc = 0x244ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 32), GPR_U64(ctx, 2));
    // 0x244ef4: 0x30820010  andi        $v0, $a0, 0x10
    ctx->pc = 0x244ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
label_244ef8:
    // 0x244ef8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x244EF8u;
    {
        const bool branch_taken_0x244ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x244EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244EF8u;
            // 0x244efc: 0x30820020  andi        $v0, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x244ef8) {
            ctx->pc = 0x244F0Cu;
            goto label_244f0c;
        }
    }
    ctx->pc = 0x244F00u;
    // 0x244f00: 0xdca20028  ld          $v0, 0x28($a1)
    ctx->pc = 0x244f00u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x244f04: 0xfcc20028  sd          $v0, 0x28($a2)
    ctx->pc = 0x244f04u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 40), GPR_U64(ctx, 2));
    // 0x244f08: 0x30820020  andi        $v0, $a0, 0x20
    ctx->pc = 0x244f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
label_244f0c:
    // 0x244f0c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x244F0Cu;
    {
        const bool branch_taken_0x244f0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x244F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244F0Cu;
            // 0x244f10: 0x30820040  andi        $v0, $a0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x244f0c) {
            ctx->pc = 0x244F20u;
            goto label_244f20;
        }
    }
    ctx->pc = 0x244F14u;
    // 0x244f14: 0xdca20030  ld          $v0, 0x30($a1)
    ctx->pc = 0x244f14u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x244f18: 0xfcc20030  sd          $v0, 0x30($a2)
    ctx->pc = 0x244f18u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 48), GPR_U64(ctx, 2));
    // 0x244f1c: 0x30820040  andi        $v0, $a0, 0x40
    ctx->pc = 0x244f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)64);
label_244f20:
    // 0x244f20: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x244F20u;
    {
        const bool branch_taken_0x244f20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x244F24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244F20u;
            // 0x244f24: 0x30820080  andi        $v0, $a0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x244f20) {
            ctx->pc = 0x244F34u;
            goto label_244f34;
        }
    }
    ctx->pc = 0x244F28u;
    // 0x244f28: 0xdca20038  ld          $v0, 0x38($a1)
    ctx->pc = 0x244f28u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x244f2c: 0xfcc20038  sd          $v0, 0x38($a2)
    ctx->pc = 0x244f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 56), GPR_U64(ctx, 2));
    // 0x244f30: 0x30820080  andi        $v0, $a0, 0x80
    ctx->pc = 0x244f30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
label_244f34:
    // 0x244f34: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x244F34u;
    {
        const bool branch_taken_0x244f34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x244F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244F34u;
            // 0x244f38: 0x30820002  andi        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x244f34) {
            ctx->pc = 0x244F48u;
            goto label_244f48;
        }
    }
    ctx->pc = 0x244F3Cu;
    // 0x244f3c: 0xdca20040  ld          $v0, 0x40($a1)
    ctx->pc = 0x244f3cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x244f40: 0xfcc20040  sd          $v0, 0x40($a2)
    ctx->pc = 0x244f40u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 64), GPR_U64(ctx, 2));
    // 0x244f44: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x244f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
label_244f48:
    // 0x244f48: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x244F48u;
    {
        const bool branch_taken_0x244f48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x244F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244F48u;
            // 0x244f4c: 0x30820001  andi        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x244f48) {
            ctx->pc = 0x244F5Cu;
            goto label_244f5c;
        }
    }
    ctx->pc = 0x244F50u;
    // 0x244f50: 0xdca20010  ld          $v0, 0x10($a1)
    ctx->pc = 0x244f50u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x244f54: 0xfcc20010  sd          $v0, 0x10($a2)
    ctx->pc = 0x244f54u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
    // 0x244f58: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x244f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_244f5c:
    // 0x244f5c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x244f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x244f60: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x244f60u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x244f64: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x244F64u;
    {
        const bool branch_taken_0x244f64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x244F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244F64u;
            // 0x244f68: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x244f64) {
            ctx->pc = 0x244F78u;
            goto label_244f78;
        }
    }
    ctx->pc = 0x244F6Cu;
    // 0x244f6c: 0xdca20008  ld          $v0, 0x8($a1)
    ctx->pc = 0x244f6cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x244f70: 0xfcc20008  sd          $v0, 0x8($a2)
    ctx->pc = 0x244f70u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 2));
    // 0x244f74: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x244f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_244f78:
    // 0x244f78: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x244F78u;
    {
        const bool branch_taken_0x244f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x244f78) {
            ctx->pc = 0x244F88u;
            goto label_244f88;
        }
    }
    ctx->pc = 0x244F80u;
    // 0x244f80: 0xdca20018  ld          $v0, 0x18($a1)
    ctx->pc = 0x244f80u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x244f84: 0xfcc20018  sd          $v0, 0x18($a2)
    ctx->pc = 0x244f84u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 2));
label_244f88:
    // 0x244f88: 0x3e00008  jr          $ra
    ctx->pc = 0x244F88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x244F90u;
    ctx->pc = 0x244f90u;
}
