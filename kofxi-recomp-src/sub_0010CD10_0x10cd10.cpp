#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010CD10
// Address: 0x10cd10 - 0x10cee0
void sub_0010CD10_0x10cd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010CD10_0x10cd10");
#endif

    switch (ctx->pc) {
        case 0x10cd20u: goto label_10cd20;
        case 0x10cd30u: goto label_10cd30;
        case 0x10cd40u: goto label_10cd40;
        case 0x10cd50u: goto label_10cd50;
        case 0x10cd60u: goto label_10cd60;
        case 0x10cd70u: goto label_10cd70;
        case 0x10cd80u: goto label_10cd80;
        case 0x10cd90u: goto label_10cd90;
        case 0x10cda0u: goto label_10cda0;
        case 0x10cdb0u: goto label_10cdb0;
        case 0x10cdc0u: goto label_10cdc0;
        case 0x10cdd0u: goto label_10cdd0;
        case 0x10cde0u: goto label_10cde0;
        case 0x10cdf0u: goto label_10cdf0;
        case 0x10ce00u: goto label_10ce00;
        case 0x10ce10u: goto label_10ce10;
        case 0x10ce20u: goto label_10ce20;
        case 0x10ce30u: goto label_10ce30;
        case 0x10ce40u: goto label_10ce40;
        case 0x10ce50u: goto label_10ce50;
        case 0x10ce60u: goto label_10ce60;
        case 0x10ce70u: goto label_10ce70;
        case 0x10ce80u: goto label_10ce80;
        case 0x10ce90u: goto label_10ce90;
        case 0x10cea0u: goto label_10cea0;
        case 0x10ceb0u: goto label_10ceb0;
        case 0x10cec0u: goto label_10cec0;
        case 0x10ced0u: goto label_10ced0;
        default: break;
    }

    ctx->pc = 0x10cd10u;

    // 0x10cd10: 0x2403004b  addiu       $v1, $zero, 0x4B
    ctx->pc = 0x10cd10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    // 0x10cd14: 0xc  syscall     0
    ctx->pc = 0x10cd14u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10cd18: 0x3e00008  jr          $ra
    ctx->pc = 0x10CD18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10CD20u;
label_10cd20:
    // 0x10cd20: 0x2403004c  addiu       $v1, $zero, 0x4C
    ctx->pc = 0x10cd20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x10cd24: 0xc  syscall     0
    ctx->pc = 0x10cd24u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10cd28: 0x3e00008  jr          $ra
    ctx->pc = 0x10CD28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10CD30u;
label_10cd30:
    // 0x10cd30: 0x2403004d  addiu       $v1, $zero, 0x4D
    ctx->pc = 0x10cd30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x10cd34: 0xc  syscall     0
    ctx->pc = 0x10cd34u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10cd38: 0x3e00008  jr          $ra
    ctx->pc = 0x10CD38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10CD40u;
label_10cd40:
    // 0x10cd40: 0x2403004e  addiu       $v1, $zero, 0x4E
    ctx->pc = 0x10cd40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x10cd44: 0xc  syscall     0
    ctx->pc = 0x10cd44u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10cd48: 0x3e00008  jr          $ra
    ctx->pc = 0x10CD48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10CD50u;
label_10cd50:
    // 0x10cd50: 0x2403004f  addiu       $v1, $zero, 0x4F
    ctx->pc = 0x10cd50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x10cd54: 0xc  syscall     0
    ctx->pc = 0x10cd54u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10cd58: 0x3e00008  jr          $ra
    ctx->pc = 0x10CD58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10CD60u;
label_10cd60:
    // 0x10cd60: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x10cd60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x10cd64: 0xc  syscall     0
    ctx->pc = 0x10cd64u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10cd68: 0x3e00008  jr          $ra
    ctx->pc = 0x10CD68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10CD70u;
label_10cd70:
    // 0x10cd70: 0x24030051  addiu       $v1, $zero, 0x51
    ctx->pc = 0x10cd70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x10cd74: 0xc  syscall     0
    ctx->pc = 0x10cd74u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10cd78: 0x3e00008  jr          $ra
    ctx->pc = 0x10CD78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10CD80u;
label_10cd80:
    // 0x10cd80: 0x24030052  addiu       $v1, $zero, 0x52
    ctx->pc = 0x10cd80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x10cd84: 0xc  syscall     0
    ctx->pc = 0x10cd84u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10cd88: 0x3e00008  jr          $ra
    ctx->pc = 0x10CD88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10CD90u;
label_10cd90:
    // 0x10cd90: 0x2403ffad  addiu       $v1, $zero, -0x53
    ctx->pc = 0x10cd90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967213));
    // 0x10cd94: 0xc  syscall     0
    ctx->pc = 0x10cd94u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10cd98: 0x3e00008  jr          $ra
    ctx->pc = 0x10CD98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10CDA0u;
label_10cda0:
    // 0x10cda0: 0x24030054  addiu       $v1, $zero, 0x54
    ctx->pc = 0x10cda0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x10cda4: 0xc  syscall     0
    ctx->pc = 0x10cda4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10cda8: 0x3e00008  jr          $ra
    ctx->pc = 0x10CDA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10CDB0u;
label_10cdb0:
    // 0x10cdb0: 0x2403ffab  addiu       $v1, $zero, -0x55
    ctx->pc = 0x10cdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967211));
    // 0x10cdb4: 0xc  syscall     0
    ctx->pc = 0x10cdb4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10cdb8: 0x3e00008  jr          $ra
    ctx->pc = 0x10CDB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10CDC0u;
label_10cdc0:
    // 0x10cdc0: 0x24030056  addiu       $v1, $zero, 0x56
    ctx->pc = 0x10cdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x10cdc4: 0xc  syscall     0
    ctx->pc = 0x10cdc4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10cdc8: 0x3e00008  jr          $ra
    ctx->pc = 0x10CDC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10CDD0u;
label_10cdd0:
    // 0x10cdd0: 0x24030057  addiu       $v1, $zero, 0x57
    ctx->pc = 0x10cdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    // 0x10cdd4: 0xc  syscall     0
    ctx->pc = 0x10cdd4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10cdd8: 0x3e00008  jr          $ra
    ctx->pc = 0x10CDD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10CDE0u;
label_10cde0:
    // 0x10cde0: 0x2403ffa8  addiu       $v1, $zero, -0x58
    ctx->pc = 0x10cde0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967208));
    // 0x10cde4: 0xc  syscall     0
    ctx->pc = 0x10cde4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10cde8: 0x3e00008  jr          $ra
    ctx->pc = 0x10CDE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10CDF0u;
label_10cdf0:
    // 0x10cdf0: 0x24030059  addiu       $v1, $zero, 0x59
    ctx->pc = 0x10cdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
    // 0x10cdf4: 0xc  syscall     0
    ctx->pc = 0x10cdf4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10cdf8: 0x3e00008  jr          $ra
    ctx->pc = 0x10CDF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10CE00u;
label_10ce00:
    // 0x10ce00: 0x2403ffa6  addiu       $v1, $zero, -0x5A
    ctx->pc = 0x10ce00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967206));
    // 0x10ce04: 0xc  syscall     0
    ctx->pc = 0x10ce04u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10ce08: 0x3e00008  jr          $ra
    ctx->pc = 0x10CE08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10CE10u;
label_10ce10:
    // 0x10ce10: 0x2403005b  addiu       $v1, $zero, 0x5B
    ctx->pc = 0x10ce10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x10ce14: 0xc  syscall     0
    ctx->pc = 0x10ce14u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10ce18: 0x3e00008  jr          $ra
    ctx->pc = 0x10CE18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10CE20u;
label_10ce20:
    // 0x10ce20: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x10ce20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x10ce24: 0xc  syscall     0
    ctx->pc = 0x10ce24u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10ce28: 0x3e00008  jr          $ra
    ctx->pc = 0x10CE28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10CE30u;
label_10ce30:
    // 0x10ce30: 0x2403ffa4  addiu       $v1, $zero, -0x5C
    ctx->pc = 0x10ce30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967204));
    // 0x10ce34: 0xc  syscall     0
    ctx->pc = 0x10ce34u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10ce38: 0x3e00008  jr          $ra
    ctx->pc = 0x10CE38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10CE40u;
label_10ce40:
    // 0x10ce40: 0x2403005d  addiu       $v1, $zero, 0x5D
    ctx->pc = 0x10ce40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x10ce44: 0xc  syscall     0
    ctx->pc = 0x10ce44u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10ce48: 0x3e00008  jr          $ra
    ctx->pc = 0x10CE48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10CE50u;
label_10ce50:
    // 0x10ce50: 0x2403ffa3  addiu       $v1, $zero, -0x5D
    ctx->pc = 0x10ce50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967203));
    // 0x10ce54: 0xc  syscall     0
    ctx->pc = 0x10ce54u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10ce58: 0x3e00008  jr          $ra
    ctx->pc = 0x10CE58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10CE60u;
label_10ce60:
    // 0x10ce60: 0x2403005e  addiu       $v1, $zero, 0x5E
    ctx->pc = 0x10ce60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    // 0x10ce64: 0xc  syscall     0
    ctx->pc = 0x10ce64u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10ce68: 0x3e00008  jr          $ra
    ctx->pc = 0x10CE68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10CE70u;
label_10ce70:
    // 0x10ce70: 0x2403ffa2  addiu       $v1, $zero, -0x5E
    ctx->pc = 0x10ce70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967202));
    // 0x10ce74: 0xc  syscall     0
    ctx->pc = 0x10ce74u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10ce78: 0x3e00008  jr          $ra
    ctx->pc = 0x10CE78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10CE80u;
label_10ce80:
    // 0x10ce80: 0x2403005f  addiu       $v1, $zero, 0x5F
    ctx->pc = 0x10ce80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x10ce84: 0xc  syscall     0
    ctx->pc = 0x10ce84u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10ce88: 0x3e00008  jr          $ra
    ctx->pc = 0x10CE88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10CE90u;
label_10ce90:
    // 0x10ce90: 0x2403ffa1  addiu       $v1, $zero, -0x5F
    ctx->pc = 0x10ce90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967201));
    // 0x10ce94: 0xc  syscall     0
    ctx->pc = 0x10ce94u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10ce98: 0x3e00008  jr          $ra
    ctx->pc = 0x10CE98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10CEA0u;
label_10cea0:
    // 0x10cea0: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x10cea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x10cea4: 0xc  syscall     0
    ctx->pc = 0x10cea4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10cea8: 0x3e00008  jr          $ra
    ctx->pc = 0x10CEA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10CEB0u;
label_10ceb0:
    // 0x10ceb0: 0x24030061  addiu       $v1, $zero, 0x61
    ctx->pc = 0x10ceb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x10ceb4: 0xc  syscall     0
    ctx->pc = 0x10ceb4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10ceb8: 0x3e00008  jr          $ra
    ctx->pc = 0x10CEB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10CEC0u;
label_10cec0:
    // 0x10cec0: 0x24030062  addiu       $v1, $zero, 0x62
    ctx->pc = 0x10cec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x10cec4: 0xc  syscall     0
    ctx->pc = 0x10cec4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10cec8: 0x3e00008  jr          $ra
    ctx->pc = 0x10CEC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10CED0u;
label_10ced0:
    // 0x10ced0: 0x24030063  addiu       $v1, $zero, 0x63
    ctx->pc = 0x10ced0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x10ced4: 0xc  syscall     0
    ctx->pc = 0x10ced4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10ced8: 0x3e00008  jr          $ra
    ctx->pc = 0x10CED8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10CEE0u;
    ctx->pc = 0x10cee0u;
}
